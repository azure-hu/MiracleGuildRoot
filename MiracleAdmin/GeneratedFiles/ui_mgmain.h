/********************************************************************************
** Form generated from reading UI file 'mgmain.ui'
**
** Created: Fri Aug 12 18:07:40 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MGMAIN_H
#define UI_MGMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MGMainClass
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *addMemberTab;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *lineEdit;
    QLabel *classLabel;
    QComboBox *comboBox;
    QLabel *roleLabel;
    QComboBox *role1Combo;
    QComboBox *role2Combo;
    QLabel *profLabel;
    QComboBox *prof1Combo;
    QLabel *mainLabel;
    QCheckBox *mainCheck;
    QComboBox *mainCombo;
    QPushButton *recordButton;
    QComboBox *prof2Combo;
    QWidget *tab_5;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_1;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab_4;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *MGMainClass)
    {
        if (MGMainClass->objectName().isEmpty())
            MGMainClass->setObjectName(QString::fromUtf8("MGMainClass"));
        MGMainClass->resize(531, 499);
        gridLayout = new QGridLayout(MGMainClass);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(MGMainClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        addMemberTab = new QWidget();
        addMemberTab->setObjectName(QString::fromUtf8("addMemberTab"));
        horizontalLayout_2 = new QHBoxLayout(addMemberTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignJustify|Qt::AlignTop);
        nameLabel = new QLabel(addMemberTab);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        lineEdit = new QLineEdit(addMemberTab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        classLabel = new QLabel(addMemberTab);
        classLabel->setObjectName(QString::fromUtf8("classLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, classLabel);

        comboBox = new QComboBox(addMemberTab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        roleLabel = new QLabel(addMemberTab);
        roleLabel->setObjectName(QString::fromUtf8("roleLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, roleLabel);

        role1Combo = new QComboBox(addMemberTab);
        role1Combo->setObjectName(QString::fromUtf8("role1Combo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, role1Combo);

        role2Combo = new QComboBox(addMemberTab);
        role2Combo->setObjectName(QString::fromUtf8("role2Combo"));

        formLayout->setWidget(3, QFormLayout::FieldRole, role2Combo);

        profLabel = new QLabel(addMemberTab);
        profLabel->setObjectName(QString::fromUtf8("profLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, profLabel);

        prof1Combo = new QComboBox(addMemberTab);
        prof1Combo->setObjectName(QString::fromUtf8("prof1Combo"));

        formLayout->setWidget(4, QFormLayout::FieldRole, prof1Combo);

        mainLabel = new QLabel(addMemberTab);
        mainLabel->setObjectName(QString::fromUtf8("mainLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, mainLabel);

        mainCheck = new QCheckBox(addMemberTab);
        mainCheck->setObjectName(QString::fromUtf8("mainCheck"));

        formLayout->setWidget(6, QFormLayout::FieldRole, mainCheck);

        mainCombo = new QComboBox(addMemberTab);
        mainCombo->setObjectName(QString::fromUtf8("mainCombo"));

        formLayout->setWidget(7, QFormLayout::FieldRole, mainCombo);

        recordButton = new QPushButton(addMemberTab);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        formLayout->setWidget(8, QFormLayout::LabelRole, recordButton);

        prof2Combo = new QComboBox(addMemberTab);
        prof2Combo->setObjectName(QString::fromUtf8("prof2Combo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, prof2Combo);


        horizontalLayout_2->addLayout(formLayout);

        tabWidget->addTab(addMemberTab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_3 = new QGridLayout(tab_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setCheckable(true);
        groupBox_2->setChecked(false);

        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setCheckable(true);
        groupBox_4->setChecked(false);

        gridLayout_3->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_1 = new QGroupBox(tab_5);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        groupBox_1->setCheckable(false);

        gridLayout_3->addWidget(groupBox_1, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setCheckable(true);
        groupBox_3->setChecked(false);

        gridLayout_3->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setCheckable(true);
        groupBox_5->setChecked(false);

        gridLayout_3->addWidget(groupBox_5, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_3->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(MGMainClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MGMainClass);
    } // setupUi

    void retranslateUi(QWidget *MGMainClass)
    {
        MGMainClass->setWindowTitle(QApplication::translate("MGMainClass", "Miracle Guild Administration", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("MGMainClass", "Karakter neve:", 0, QApplication::UnicodeUTF8));
        classLabel->setText(QApplication::translate("MGMainClass", "Kaszt:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MGMainClass", "Druid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Hunter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Mage", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Paladin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Priest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Rogue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Shaman", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Warlock", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Warrior", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Death Knight", 0, QApplication::UnicodeUTF8)
        );
        roleLabel->setText(QApplication::translate("MGMainClass", "Szerepk\303\266r:", 0, QApplication::UnicodeUTF8));
        role1Combo->clear();
        role1Combo->insertItems(0, QStringList()
         << QApplication::translate("MGMainClass", "DPS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Healer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Tank", 0, QApplication::UnicodeUTF8)
        );
        role2Combo->clear();
        role2Combo->insertItems(0, QStringList()
         << QApplication::translate("MGMainClass", "DPS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Healer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Tank", 0, QApplication::UnicodeUTF8)
        );
        profLabel->setText(QApplication::translate("MGMainClass", "Szakma:", 0, QApplication::UnicodeUTF8));
        prof1Combo->clear();
        prof1Combo->insertItems(0, QStringList()
         << QApplication::translate("MGMainClass", "-NULL-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Alchemy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Blacksmithing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Enchanting", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Engineering", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Herbalism", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Inscription", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Jewelcrafting", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Leatherworking", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Mining", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Skinning", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Tailoring", 0, QApplication::UnicodeUTF8)
        );
        mainLabel->setText(QApplication::translate("MGMainClass", "Main Karakter:", 0, QApplication::UnicodeUTF8));
        mainCheck->setText(QApplication::translate("MGMainClass", "Main Karakter", 0, QApplication::UnicodeUTF8));
        recordButton->setText(QApplication::translate("MGMainClass", "R\303\266gz\303\255t\303\251s", 0, QApplication::UnicodeUTF8));
        prof2Combo->clear();
        prof2Combo->insertItems(0, QStringList()
         << QApplication::translate("MGMainClass", "-NULL-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Alchemy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Blacksmithing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Enchanting", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Engineering", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Herbalism", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Inscription", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Jewelcrafting", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Leatherworking", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Mining", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Skinning", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MGMainClass", "Tailoring", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(addMemberTab), QApplication::translate("MGMainClass", "Tag felv\303\251tel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MGMainClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MGMainClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        groupBox_1->setTitle(QApplication::translate("MGMainClass", "Group 1", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MGMainClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MGMainClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MGMainClass", "Raid Tab", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MGMainClass", "Page", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MGMainClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MGMainClass", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MGMainClass: public Ui_MGMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MGMAIN_H
