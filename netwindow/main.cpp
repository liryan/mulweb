#include "NetWindow.h"
#include <QtWidgets/QApplication>
#include <qtextcodec.h>
#include <qwebenginesettings.h>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_UseSoftwareOpenGL);
	QApplication a(argc, argv);
	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::ErrorPageEnabled, true);
	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::HyperlinkAuditingEnabled, true);
	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::AllowRunningInsecureContent, true);
	QWebEngineSettings::defaultSettings()->setFontFamily(QWebEngineSettings::StandardFont, "微软雅黑");
	NetWindow w;
	w.show();
	return a.exec();
}
