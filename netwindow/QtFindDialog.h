#pragma once

#include <QDialog>
#include "ui_FindDialog.h"

class QtFindDialog : public QDialog
{
	Q_OBJECT

public:
	QtFindDialog(QDialog *parent = Q_NULLPTR);
	~QtFindDialog();
	QString text();
private:
	Ui::FindDialog ui;
};
