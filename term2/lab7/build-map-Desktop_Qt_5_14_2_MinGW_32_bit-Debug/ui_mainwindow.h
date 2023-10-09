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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *keyForErase;
    QPushButton *erase;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *insert;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit;
    QPushButton *show_map;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *size;
    QPushButton *empty;
    QPushButton *clear;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *end;
    QPushButton *begin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(628, 351);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 150, 131, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        keyForErase = new QSpinBox(layoutWidget);
        keyForErase->setObjectName(QString::fromUtf8("keyForErase"));
        keyForErase->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(keyForErase);

        erase = new QPushButton(layoutWidget);
        erase->setObjectName(QString::fromUtf8("erase"));

        verticalLayout->addWidget(erase);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(41, 40, 271, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(spinBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaxLength(40);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        insert = new QPushButton(layoutWidget1);
        insert->setObjectName(QString::fromUtf8("insert"));

        verticalLayout_4->addWidget(insert);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(310, 40, 311, 251));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_5->addWidget(textEdit);

        show_map = new QPushButton(layoutWidget2);
        show_map->setObjectName(QString::fromUtf8("show_map"));

        verticalLayout_5->addWidget(show_map);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(180, 150, 121, 91));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        size = new QPushButton(layoutWidget3);
        size->setObjectName(QString::fromUtf8("size"));

        verticalLayout_6->addWidget(size);

        empty = new QPushButton(layoutWidget3);
        empty->setObjectName(QString::fromUtf8("empty"));

        verticalLayout_6->addWidget(empty);

        clear = new QPushButton(layoutWidget3);
        clear->setObjectName(QString::fromUtf8("clear"));

        verticalLayout_6->addWidget(clear);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 260, 261, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        end = new QPushButton(layoutWidget4);
        end->setObjectName(QString::fromUtf8("end"));

        horizontalLayout_2->addWidget(end);

        begin = new QPushButton(layoutWidget4);
        begin->setObjectName(QString::fromUtf8("begin"));

        horizontalLayout_2->addWidget(begin);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 628, 25));
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
        label->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        erase->setText(QCoreApplication::translate("MainWindow", "erase", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter value", nullptr));
        insert->setText(QCoreApplication::translate("MainWindow", "insert", nullptr));
        show_map->setText(QCoreApplication::translate("MainWindow", "show_map", nullptr));
        size->setText(QCoreApplication::translate("MainWindow", "size", nullptr));
        empty->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        end->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        begin->setText(QCoreApplication::translate("MainWindow", "begin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
