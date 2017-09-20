#include "CustomWidgetExample.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CustomWidgetExample w;
	w.show();
	return a.exec();
}
