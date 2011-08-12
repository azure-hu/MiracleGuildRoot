#include "stdafx.h"
#include "mgmain.h"

MGMain::MGMain(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
	for(int i = 0; i < _group; ++i)
	{
		_groupLayout[i] = new QFormLayout;
		for(int j = 0; j < _group; ++j)
		{
			int number = ( i *_group )+ j;
			_groupCheck[number] = new QCheckBox;
			_groupCombo[number] = new QComboBox;
			_groupLayout[i]->addRow(_groupCheck[number], _groupCombo[number]);
		}
	}
	ui.groupBox_1->setLayout(_groupLayout[0]);
	ui.groupBox_2->setLayout(_groupLayout[1]);
	ui.groupBox_3->setLayout(_groupLayout[2]);
	ui.groupBox_4->setLayout(_groupLayout[3]);
	ui.groupBox_5->setLayout(_groupLayout[4]);

	chars = new QList<QString>;
	ids = new QList<int>;


	CreateDbConnection();
	if(ConnectToDatabase())
	{
		query.exec("SELECT name, id FROM characters WHERE mainId = 0;");
		while (query.next()) 
		{
			chars->push_back(query.value(0).toString());
			ids->push_back(query.value(1).toInt());
		}

		query.exec("SELECT name, mainId FROM characters WHERE mainId > 0;");
		while (query.next()) 
		{
			chars->push_back(query.value(0).toString());
			ids->push_back(query.value(1).toInt());
		}
	}
}

void MGMain::CreateDbConnection()
{
	 db = QSqlDatabase::addDatabase("QMYSQL");
     db.setHostName("db4free.net");
     db.setDatabaseName("miracledkp");
     db.setUserName("miracle");
     db.setPassword("MiracleHun");
}

bool MGMain::ConnectToDatabase()
{
	return db.open();
}

void MGMain::CloseConnection()
{
	db.close();
}

MGMain::~MGMain()
{

}
