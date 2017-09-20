#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CustomWidgetExample.h"

class CustomWidgetExample : public QMainWindow
{
	Q_OBJECT

public:
	CustomWidgetExample(QWidget *parent = Q_NULLPTR);

private:
	Ui::CustomWidgetExampleClass ui;
};
