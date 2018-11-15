#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetWindow.h"
#include <qboxlayout.h>
#include <list>
#include <qsplitter.h>

class TabWidgetPair;

class NetWindow : public QMainWindow
{
	Q_OBJECT

public:
	NetWindow(QWidget *parent = Q_NULLPTR);
	virtual bool close(bool alsoDelete);
	void changeFocus(QTabWidget*);
	void removeTabview(QTabWidget* tabView);
private:
	std::list<TabWidgetPair*>	listPanels;
	QHBoxLayout*				mainLayout;
	QSplitter*					mainSpliter;
	Ui::NetWindowClass ui;
	void addNewPanel();
	bool eventFilter(QObject *target, QEvent *event);
	
public slots:
	void on_actExit_triggered();
	void on_actAbout_triggered();
	void on_actOpen_triggered();
	void on_actSplit_triggered();
	void on_actFind_triggered();
	void on_actCopy_triggered();
	void on_actPaste_triggered();

};


class TabWidgetPair : public QObject {
	Q_OBJECT
public:
	QTabWidget * view;
	NetWindow* mainView;
public:
	TabWidgetPair(QTabWidget* view, NetWindow* pMain);
public slots:
	void tabBarClicked(int);
	void tabCloseRequested(int);
};