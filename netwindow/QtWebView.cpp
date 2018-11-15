#include "QtWebView.h"
#include <qmessagebox.h>
#include <qevent.h>
#include "WidgetData.h"


QtWebView::QtWebView(QWidget *parent)
	: QWidget(parent)
{
	iTabIndex = -1;
	viewParent = NULL;
	bFindPanelVisible = true;

	ui.setupUi(this);
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(ui.verticalLayoutWidget);
	this->setLayout(layout);
	ui.textStatus->setText(QString(tr("就绪")));
	ui.barLoader->setValue(0);
	ui.barLoader->setTextVisible(false);
	//connect(ui.webEngineView, SIGNAL(loadProgress(int)), this, SLOT(onLoad(int)));
	//connect(ui.webEngineView, SIGNAL(loadFinished(bool)), this, SLOT(onLoadFinished(bool)));
	//connect(ui.webEngineView, SIGNAL(urlChanged(const QUrl &)), this, SLOT(onUrlChanged(const QUrl &)));

	ui.listHistory->installEventFilter(this);
	ui.listHistory->setFocusPolicy(Qt::StrongFocus);
	this->on_btnFindPanel_clicked();
}

QtWebView::~QtWebView()
{
	QLayout * p = this->layout();
	this->destroy();
	delete p;
}

void QtWebView::AddNewTabTo(QTabWidget* parent)
{
	QtWebView* view = new QtWebView();
	int curIndex = parent->addTab(view, tr("等待..."));
	view->setTabIndex(parent, curIndex);
	parent->setCurrentIndex(curIndex);
}

void QtWebView::RemoveWebView(int index, QTabWidget* parent)
{
	if (parent->count() <= index) {
		return;
	}
	QtWebView* view=dynamic_cast<QtWebView*>(parent->widget(index));
	parent->removeTab(index);
	delete view;
}

void QtWebView::FindText(QString& str)
{
	ui.webEngineView->findText(str);
}

bool QtWebView::eventFilter(QObject *target, QEvent *event)
{
	if (target==ui.listHistory && event->type() == QEvent::KeyPress) {
		QKeyEvent *keyEvent = dynamic_cast<QKeyEvent*>(event);
		if (keyEvent->key() == Qt::Key_Return) {
			on_btnGo_clicked();
			WidgetData::instance()->SetFocusView(this);
			return true;
		}
	}
	return QWidget::eventFilter(target, event);
}

void QtWebView::on_btnGo_clicked()
{
	QString url = ui.listHistory->currentText();
	if (url.indexOf("http://") == -1 && url.indexOf("https://") == -1 && url.indexOf("file://") == -1) {
		url = "http://" + url;
	}
	ui.listHistory->addItem(url);
	if (url.lastIndexOf("file://") == 0) {
		ui.webEngineView->load(QUrl(url));
	}
	else {
		ui.webEngineView->load(QUrl(url));
	}
	
	ui.textStatus->setText(QString(tr("正在加载")) + url);

}

void QtWebView::openLocalFile(QString path)
{
	ui.webEngineView->load(QUrl::fromLocalFile(path));
}
void QtWebView::on_btnFind_clicked()
{
	QString content = ui.textLine->text();
	if (content.size() > 0) {
		this->FindText(content);
	}
}
void QtWebView::on_btnFindPanel_clicked()
{
	bFindPanelVisible = !bFindPanelVisible;
	if (bFindPanelVisible) {
		ui.searchLabel->show();
		ui.btnFind->show();
		ui.textLine->show();
		ui.btnFindPanel->setText(QString(tr("收起搜索")));
	}
	else {
		ui.searchLabel->hide();
		ui.btnFind->hide();
		ui.textLine->hide();
		ui.btnFindPanel->setText(QString(tr("搜搜")));
	}
}
void QtWebView::on_btnBack_clicked()
{
	ui.webEngineView->back();
}
void QtWebView::on_btnForward_clicked()
{
	ui.webEngineView->forward();
}
void QtWebView::on_btnStop_clicked()
{
	ui.webEngineView->stop();
}

void QtWebView::on_btnFresh_clicked()
{
	ui.webEngineView->reload();
}

void QtWebView::onLoad(int progress)
{
	ui.barLoader->setTextVisible(true);
	ui.barLoader->setValue(progress);
	if (progress == 100) {
		onLoadFinished(true);
	}
}

void QtWebView::onLoadFinished(bool ok)
{

	if (ok) {
		ui.barLoader->setTextVisible(false);
		ui.barLoader->setValue(0);
		QWebEnginePage* page = ui.webEngineView->page();
		this->viewParent->setTabText(this->iTabIndex, page->title());
		ui.textStatus->setText(QString(tr("就绪")));
	}
}

void QtWebView::onUrlChanged(const QUrl &url)
{
	QString cur = url.url();
	if (cur == "about:blank") {
		return;
	}
	QString link = ui.listHistory->currentText();
	if (cur == link) {
		return;
	}
	ui.listHistory->setEditText(cur);
	this->on_btnGo_clicked();
}
