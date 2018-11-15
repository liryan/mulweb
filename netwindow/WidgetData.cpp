#include "WidgetData.h"



WidgetData::WidgetData()
{
	forcusView = NULL;
}


WidgetData::~WidgetData()
{
}

WidgetData* WidgetData::instance()
{
	static WidgetData instance;
	return &instance;
}

void WidgetData::SetFocusView(QWidget* view) {
	this->forcusView = view;
}

