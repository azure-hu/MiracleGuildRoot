#include "stdafx.h"
#include "mgmain.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MGMain w;
	w.show();
	return a.exec();
}
