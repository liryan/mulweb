#pragma once

#include <QWidget>
#include "ui_WebView.h"

class QtWebView : public QWidget
{
	Q_OBJECT

public:
	QtWebView(QWidget *parent = Q_NULLPTR);
	~QtWebView();
	static void AddNewTabTo(QTabWidget* parent);
	static void RemoveWebView(int index, QTabWidget* parent);
	void setTabIndex(QTabWidget*p, int index) { viewParent = p; iTabIndex = index; }
	bool eventFilter(QObject *target, QEvent *event);
	void openLocalFile(QString path);
private:
	Ui::WebViewForm ui;
	int iTabIndex;
	QTabWidget* viewParent;
	bool		bFindPanelVisible;

public slots:
	void on_btnGo_clicked();
	void on_btnStop_clicked();
	void on_btnFresh_clicked();
	void on_btnBack_clicked();
	void on_btnForward_clicked();
	void on_btnFind_clicked();
	void on_btnFindPanel_clicked();
	void onLoad(int progress);
	void onLoadFinished(bool);
	void onUrlChanged(const QUrl &);
	void FindText(QString& str);
};
