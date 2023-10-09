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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonForClear;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *line;
    QLabel *label;
    QFrame *line_2;
    QLineEdit *lineEditForKeyInsert;
    QVBoxLayout *verticalLayout;
    QFrame *line_4;
    QLabel *label_2;
    QFrame *line_3;
    QLineEdit *lineEditForValueInsert;
    QPushButton *pushButtonForInsert;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEditForShow;
    QPushButton *pushButtonForShow;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_6;
    QLabel *label_3;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditForContainsEnter;
    QLabel *label_4;
    QLineEdit *lineEditForContains_2;
    QPushButton *pushButtonForContains;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 360);
        MainWindow->setMinimumSize(QSize(630, 323));
        MainWindow->setMaximumSize(QSize(630, 360));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonForClear = new QPushButton(centralwidget);
        pushButtonForClear->setObjectName(QString::fromUtf8("pushButtonForClear"));
        pushButtonForClear->setGeometry(QRect(280, 260, 121, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 130, 331, 114));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        lineEditForKeyInsert = new QLineEdit(layoutWidget);
        lineEditForKeyInsert->setObjectName(QString::fromUtf8("lineEditForKeyInsert"));

        verticalLayout_2->addWidget(lineEditForKeyInsert);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        lineEditForValueInsert = new QLineEdit(layoutWidget);
        lineEditForValueInsert->setObjectName(QString::fromUtf8("lineEditForValueInsert"));

        verticalLayout->addWidget(lineEditForValueInsert);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButtonForInsert = new QPushButton(layoutWidget);
        pushButtonForInsert->setObjectName(QString::fromUtf8("pushButtonForInsert"));

        verticalLayout_3->addWidget(pushButtonForInsert);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 261, 281));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textEditForShow = new QTextEdit(layoutWidget1);
        textEditForShow->setObjectName(QString::fromUtf8("textEditForShow"));
        textEditForShow->setReadOnly(true);

        verticalLayout_4->addWidget(textEditForShow);

        pushButtonForShow = new QPushButton(layoutWidget1);
        pushButtonForShow->setObjectName(QString::fromUtf8("pushButtonForShow"));

        verticalLayout_4->addWidget(pushButtonForShow);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(280, 10, 332, 112));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        line_6 = new QFrame(layoutWidget2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_6);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        line_5 = new QFrame(layoutWidget2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditForContainsEnter = new QLineEdit(layoutWidget2);
        lineEditForContainsEnter->setObjectName(QString::fromUtf8("lineEditForContainsEnter"));

        horizontalLayout_2->addWidget(lineEditForContainsEnter);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        lineEditForContains_2 = new QLineEdit(layoutWidget2);
        lineEditForContains_2->setObjectName(QString::fromUtf8("lineEditForContains_2"));
        lineEditForContains_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditForContains_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        pushButtonForContains = new QPushButton(layoutWidget2);
        pushButtonForContains->setObjectName(QString::fromUtf8("pushButtonForContains"));

        verticalLayout_5->addWidget(pushButtonForContains);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 25));
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
        pushButtonForClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        pushButtonForInsert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        pushButtonForShow->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Contains by key", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "->", nullptr));
        pushButtonForContains->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
