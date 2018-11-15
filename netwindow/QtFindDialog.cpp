#include "QtFindDialog.h"

QtFindDialog::QtFindDialog(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

QtFindDialog::~QtFindDialog()
{
}

QString QtFindDialog::text()
{
	return ui.textContent->text();
}