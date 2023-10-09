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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *textEdit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Astring;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Bstring;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Astrlen;
    QPushButton *Bstrlen;
    QPushButton *strcmp;
    QPushButton *strcpy;
    QPushButton *strcoll;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *nCount;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QPushButton *memcpy;
    QPushButton *strncmp;
    QPushButton *strncpy;
    QVBoxLayout *verticalLayout_6;
    QPushButton *memove;
    QPushButton *strxfrm;
    QPushButton *memcmp;
    QPushButton *strerror;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(907, 637);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 20, 381, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 20, 411, 91));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        Astring = new QLineEdit(widget1);
        Astring->setObjectName(QString::fromUtf8("Astring"));
        Astring->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Astring);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        Bstring = new QLineEdit(widget1);
        Bstring->setObjectName(QString::fromUtf8("Bstring"));
        Bstring->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Bstring);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 162, 191, 231));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        verticalLayout_4->addWidget(label_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Astrlen = new QPushButton(widget2);
        Astrlen->setObjectName(QString::fromUtf8("Astrlen"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Astrlen->sizePolicy().hasHeightForWidth());
        Astrlen->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Astrlen);

        Bstrlen = new QPushButton(widget2);
        Bstrlen->setObjectName(QString::fromUtf8("Bstrlen"));
        sizePolicy1.setHeightForWidth(Bstrlen->sizePolicy().hasHeightForWidth());
        Bstrlen->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Bstrlen);

        strcmp = new QPushButton(widget2);
        strcmp->setObjectName(QString::fromUtf8("strcmp"));
        sizePolicy1.setHeightForWidth(strcmp->sizePolicy().hasHeightForWidth());
        strcmp->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(strcmp);

        strcpy = new QPushButton(widget2);
        strcpy->setObjectName(QString::fromUtf8("strcpy"));
        sizePolicy1.setHeightForWidth(strcpy->sizePolicy().hasHeightForWidth());
        strcpy->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(strcpy);

        strcoll = new QPushButton(widget2);
        strcoll->setObjectName(QString::fromUtf8("strcoll"));
        sizePolicy1.setHeightForWidth(strcoll->sizePolicy().hasHeightForWidth());
        strcoll->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(strcoll);


        verticalLayout_4->addLayout(verticalLayout_3);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(190, 162, 221, 231));
        verticalLayout_9 = new QVBoxLayout(widget3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(widget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(widget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setPointSize(9);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_7);

        nCount = new QLineEdit(widget3);
        nCount->setObjectName(QString::fromUtf8("nCount"));
        nCount->setMaxLength(10);
        nCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(nCount);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_8->addLayout(verticalLayout_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        memcpy = new QPushButton(widget3);
        memcpy->setObjectName(QString::fromUtf8("memcpy"));
        sizePolicy1.setHeightForWidth(memcpy->sizePolicy().hasHeightForWidth());
        memcpy->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(memcpy);

        strncmp = new QPushButton(widget3);
        strncmp->setObjectName(QString::fromUtf8("strncmp"));
        sizePolicy1.setHeightForWidth(strncmp->sizePolicy().hasHeightForWidth());
        strncmp->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(strncmp);

        strncpy = new QPushButton(widget3);
        strncpy->setObjectName(QString::fromUtf8("strncpy"));
        sizePolicy1.setHeightForWidth(strncpy->sizePolicy().hasHeightForWidth());
        strncpy->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(strncpy);


        horizontalLayout_5->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        memove = new QPushButton(widget3);
        memove->setObjectName(QString::fromUtf8("memove"));
        sizePolicy1.setHeightForWidth(memove->sizePolicy().hasHeightForWidth());
        memove->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(memove);

        strxfrm = new QPushButton(widget3);
        strxfrm->setObjectName(QString::fromUtf8("strxfrm"));
        sizePolicy1.setHeightForWidth(strxfrm->sizePolicy().hasHeightForWidth());
        strxfrm->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(strxfrm);

        memcmp = new QPushButton(widget3);
        memcmp->setObjectName(QString::fromUtf8("memcmp"));
        sizePolicy1.setHeightForWidth(memcmp->sizePolicy().hasHeightForWidth());
        memcmp->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(memcmp);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_9->addLayout(verticalLayout_8);

        strerror = new QPushButton(widget3);
        strerror->setObjectName(QString::fromUtf8("strerror"));

        verticalLayout_9->addWidget(strerror);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 907, 25));
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
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter strings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "string a", nullptr));
        Astring->setPlaceholderText(QCoreApplication::translate("MainWindow", "input string", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "string b", nullptr));
        Bstring->setPlaceholderText(QCoreApplication::translate("MainWindow", "input string", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Functions independent\n"
" of the number <n>", nullptr));
        Astrlen->setText(QCoreApplication::translate("MainWindow", "strlen a", nullptr));
        Bstrlen->setText(QCoreApplication::translate("MainWindow", "strlen b", nullptr));
        strcmp->setText(QCoreApplication::translate("MainWindow", "strcmp", nullptr));
        strcpy->setText(QCoreApplication::translate("MainWindow", "strcpy", nullptr));
        strcoll->setText(QCoreApplication::translate("MainWindow", "strcoll", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Functions with quantity entry", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Input <n>:", nullptr));
        nCount->setPlaceholderText(QCoreApplication::translate("MainWindow", "count", nullptr));
        memcpy->setText(QCoreApplication::translate("MainWindow", "memcpy", nullptr));
        strncmp->setText(QCoreApplication::translate("MainWindow", "strncmp", nullptr));
        strncpy->setText(QCoreApplication::translate("MainWindow", "strncpy", nullptr));
        memove->setText(QCoreApplication::translate("MainWindow", "memmove", nullptr));
        strxfrm->setText(QCoreApplication::translate("MainWindow", "strxfrm", nullptr));
        memcmp->setText(QCoreApplication::translate("MainWindow", "memcmp", nullptr));
        strerror->setText(QCoreApplication::translate("MainWindow", "strerror", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
