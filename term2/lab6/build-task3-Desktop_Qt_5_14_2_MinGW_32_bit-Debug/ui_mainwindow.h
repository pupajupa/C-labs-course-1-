/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *random;
    QPushButton *clear;
    QPushButton *isEmpty;
    QPushButton *getMinKey;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *memo;
    QPushButton *show;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *remove;
    QPushButton *search;
    QPushButton *insert;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(541, 245);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        random = new QPushButton(centralwidget);
        random->setObjectName(QString::fromUtf8("random"));
        random->setGeometry(QRect(0, 10, 111, 41));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(130, 10, 111, 41));
        isEmpty = new QPushButton(centralwidget);
        isEmpty->setObjectName(QString::fromUtf8("isEmpty"));
        isEmpty->setGeometry(QRect(0, 60, 111, 41));
        getMinKey = new QPushButton(centralwidget);
        getMinKey->setObjectName(QString::fromUtf8("getMinKey"));
        getMinKey->setGeometry(QRect(130, 60, 111, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 10, 271, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        memo = new QTextBrowser(widget);
        memo->setObjectName(QString::fromUtf8("memo"));

        verticalLayout->addWidget(memo);

        show = new QPushButton(widget);
        show->setObjectName(QString::fromUtf8("show"));

        verticalLayout->addWidget(show);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 110, 241, 81));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        remove = new QPushButton(widget1);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout->addWidget(remove);

        search = new QPushButton(widget1);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);

        insert = new QPushButton(widget1);
        insert->setObjectName(QString::fromUtf8("insert"));

        horizontalLayout->addWidget(insert);


        verticalLayout_2->addLayout(horizontalLayout);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 541, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "Random generate", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        isEmpty->setText(QCoreApplication::translate("MainWindow", "IsEmpty", nullptr));
        getMinKey->setText(QCoreApplication::translate("MainWindow", "GetMinKey", nullptr));
        show->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        insert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
