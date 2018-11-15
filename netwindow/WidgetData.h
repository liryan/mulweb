#pragma once
#include <qwidget.h>

class WidgetData
{
private:
	QWidget * forcusView;
public:
	WidgetData();
	virtual ~WidgetData();
	static WidgetData* instance();
	void SetFocusView(QWidget* view);
	QWidget* GetFocusView() { return forcusView; }
};

