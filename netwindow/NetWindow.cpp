#include "NetWindow.h"
#include "QtWebView.h"
#include <qmessagebox.h>
#include "WidgetData.h"
#include "QtWebView.h"
#include <qfiledialog.h>
#include "QtFindDialog.h"
#include <qwebenginesettings.h>

QString active =
"QTabWidget::panel{border-top:1px solid red;backgroud-color:#AAAAAA}"
"QTabBar::tab{border:1px solid #AAAAAA;padding:5px;background:white;}"
"QTabBar::tab:selected{border-right:1px solid #AAAAAA;border-left:0px;border-top:2px solid #55aaff;border-bottom:0px}";

QString noActive =
"QTabWidget::panel{border-top:1px solid red;backgroud-color:#AAAAAA}"
"QTabBar::tab{border:1px solid #AAAAAA;padding:5px;background:white;}"
"QTabBar::tab:selected{border-right:1px solid #AAAAAA;border-left:0px;border-top:2px solid #AAAAAA;border-bottom:0px}";


TabWidgetPair::TabWidgetPair(QTabWidget* view, NetWindow* main)
{
	this->view = view;
	this->mainView = main;
	connect(view->tabBar(), SIGNAL(tabBarClicked(int)), SLOT(tabBarClicked(int)));
	connect(view->tabBar(), SIGNAL(tabCloseRequested(int)), this, SLOT(tabCloseRequested(int)));
}

void TabWidgetPair::tabBarClicked(int index)
{
	mainView->changeFocus(this->view);
}

void TabWidgetPair::tabCloseRequested(int index)
{
	QtWebView::RemoveWebView(index,this->view);
	if (this->view->count() == 0) {
		mainView->removeTabview(this->view);
	}
}


NetWindow::NetWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	mainLayout = new QHBoxLayout();
	mainLayout->setMargin(0);
	ui.centralWidget->setLayout(mainLayout);
	mainSpliter=new QSplitter(Qt::Horizontal, ui.centralWidget);
	mainLayout->addWidget(mainSpliter);
	this->addNewPanel();
	this->installEventFilter(this);
}

bool NetWindow::close(bool alsoDelete)
{
	for (auto it = listPanels.begin(); it != listPanels.end(); it++) {
		delete (*it)->view;
		delete (*it);
	}
	delete mainSpliter;
	delete mainLayout;
	listPanels.clear();
	return QMainWindow::close();
}

void NetWindow::removeTabview(QTabWidget* tabView)
{

}

void NetWindow::addNewPanel()
{
	QTabWidget* tabView = new QTabWidget(mainSpliter);
	tabView->installEventFilter(this);
	tabView->setTabsClosable(true);
	tabView->setFont(QFont(tr("微软雅黑")));
	TabWidgetPair* pair=new TabWidgetPair(tabView,this);
	this->listPanels.push_back(pair);
	mainSpliter->addWidget(tabView);
	QtWebView::AddNewTabTo(tabView);
	changeFocus(tabView);
}

void NetWindow::changeFocus(QTabWidget* view) 
{
	for (auto it = this->listPanels.begin(); it != listPanels.end(); it++) {
		if ((*it)->view == view) {
			(*it)->view->setStyleSheet(active);
			WidgetData::instance()->SetFocusView((*it)->view);
		}
		else {
			(*it)->view->setStyleSheet(noActive);
		}
		
	}
}

bool NetWindow::eventFilter(QObject *target, QEvent *event)
{
	if (event->type() == QEvent::MouseButtonDblClick) {
		QTabWidget* tabView = dynamic_cast<QTabWidget*>(target);
		QtWebView::AddNewTabTo(tabView);
		return true;
	}
	return QMainWindow::eventFilter(target, event);
}

void NetWindow::on_actSplit_triggered()
{
	if (this->listPanels.size() > 1) {
		QMessageBox msgBox;
		msgBox.setText(QString(tr("仅仅支持两个窗口")));
		msgBox.exec();
		return;
	}
	this->addNewPanel();
}


void NetWindow::on_actFind_triggered()
{
	QtFindDialog dlg;
	int ret=dlg.exec();
	if (ret == 0) {
		return;
	}
	QString text = dlg.text();
	if (text.size() < 0) {
		return;
	}
	QWidget* focus = WidgetData::instance()->GetFocusView();
	if (focus == NULL) {
		return;
	}
	QTabWidget* view = dynamic_cast<QTabWidget*>(focus);
	QtWebView* web = dynamic_cast<QtWebView*>(view->currentWidget());
	if (web == NULL) {
		return;
	}
	web->FindText(text);
}

void NetWindow::on_actCopy_triggered()
{

}

void NetWindow::on_actPaste_triggered()
{

}

void NetWindow::on_actAbout_triggered() {
	QMessageBox msgBox;
	msgBox.setText(QString(tr("复眼浏览器测试版")));
	msgBox.exec();
}

void NetWindow::on_actOpen_triggered() {
	QString fileName = QFileDialog::getOpenFileName(this, tr("open file"), " ", tr("Allfile(*.*)"));
	QWidget* focus = WidgetData::instance()->GetFocusView();
	if (focus == NULL) {
		return;
	}
	QTabWidget* view = dynamic_cast<QTabWidget*>(focus);
	if (view == NULL ) {
		if (listPanels.size() == 0) {
			this->addNewPanel();
		}
		view = this->listPanels.front()->view;
	}
	QtWebView* web = dynamic_cast<QtWebView*>(view->currentWidget());
	if (web == NULL)
		return;
	web->openLocalFile(fileName);
}

void NetWindow::on_actExit_triggered() {
	this->close(true);
}