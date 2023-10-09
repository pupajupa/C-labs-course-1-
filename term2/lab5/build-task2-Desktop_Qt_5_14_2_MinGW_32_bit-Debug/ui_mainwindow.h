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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpinBox *value;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushback;
    QPushButton *popback;
    QPushButton *pushfront;
    QPushButton *popfront;
    QPushButton *clear;
    QPushButton *empty;
    QPushButton *size;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 303);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(240, 10, 311, 111));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 10, 91, 61));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        value = new QSpinBox(widget);
        value->setObjectName(QString::fromUtf8("value"));
        value->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(value);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(1, 10, 151, 242));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushback = new QPushButton(widget1);
        pushback->setObjectName(QString::fromUtf8("pushback"));

        verticalLayout->addWidget(pushback);

        popback = new QPushButton(widget1);
        popback->setObjectName(QString::fromUtf8("popback"));

        verticalLayout->addWidget(popback);

        pushfront = new QPushButton(widget1);
        pushfront->setObjectName(QString::fromUtf8("pushfront"));

        verticalLayout->addWidget(pushfront);

        popfront = new QPushButton(widget1);
        popfront->setObjectName(QString::fromUtf8("popfront"));

        verticalLayout->addWidget(popfront);

        clear = new QPushButton(widget1);
        clear->setObjectName(QString::fromUtf8("clear"));

        verticalLayout->addWidget(clear);

        empty = new QPushButton(widget1);
        empty->setObjectName(QString::fromUtf8("empty"));

        verticalLayout->addWidget(empty);

        size = new QPushButton(widget1);
        size->setObjectName(QString::fromUtf8("size"));

        verticalLayout->addWidget(size);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 607, 25));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Value:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Functions:", nullptr));
        pushback->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        popback->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        pushfront->setText(QCoreApplication::translate("MainWindow", "push_front", nullptr));
        popfront->setText(QCoreApplication::translate("MainWindow", "pop_front", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        empty->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        size->setText(QCoreApplication::translate("MainWindow", "size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
