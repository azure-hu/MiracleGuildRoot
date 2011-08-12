#ifndef MGMAIN_H
#define MGMAIN_H

#include <QtGui/QWidget>
#include <QSqlDatabase>
#include "ui_mgmain.h"

#define _group 5

class MGMain : public QWidget
{
	Q_OBJECT

public:
	MGMain(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MGMain();

private:
	Ui::MGMainClass ui;
	QFormLayout* _groupLayout[_group];
	QCheckBox* _groupCheck[_group * _group];
	QComboBox* _groupCombo[_group * _group];
	QSqlDatabase db;
	QSqlQuery query;
	QList<QString>* chars;
	QList<int>* ids;

	void CreateDbConnection();
	bool ConnectToDatabase();
	void CloseConnection();
};

#endif // MGMAIN_H
