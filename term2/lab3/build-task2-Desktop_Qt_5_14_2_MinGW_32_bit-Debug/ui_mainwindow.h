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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinPair;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTextEdit *matrix;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextEdit *secMatrix;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(354, 481);
        MainWindow->setMinimumSize(QSize(354, 481));
        MainWindow->setMaximumSize(QSize(354, 481));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:#000000;\n"
"}\n"
"QMessengBox::critical\n"
"{\n"
"	background:#000000;\n"
" color: white;\n"
"}\n"
"QMessengBox::information\n"
"{\n"
"	background:#000000'; \n"
"color: white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:rgb(255,255,255);	\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        spinPair = new QSpinBox(centralwidget);
        spinPair->setObjectName(QString::fromUtf8("spinPair"));
        spinPair->setAlignment(Qt::AlignCenter);
        spinPair->setMinimum(1);
        spinPair->setMaximum(50);

        verticalLayout->addWidget(spinPair);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:rgb(255,255,255);	\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        matrix = new QTextEdit(centralwidget);
        matrix->setObjectName(QString::fromUtf8("matrix"));
        QFont font1;
        font1.setPointSize(9);
        matrix->setFont(font1);
        matrix->setLayoutDirection(Qt::LeftToRight);
        matrix->setStyleSheet(QString::fromUtf8("	background-color:#000000;\n"
"	color: #a9b7c6;"));
        matrix->setTabChangesFocus(false);
        matrix->setLineWrapMode(QTextEdit::WidgetWidth);
        matrix->setReadOnly(true);

        verticalLayout_3->addWidget(matrix);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:rgb(255,255,255);	\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        secMatrix = new QTextEdit(centralwidget);
        secMatrix->setObjectName(QString::fromUtf8("secMatrix"));
        secMatrix->setFont(font1);
        secMatrix->setLayoutDirection(Qt::LeftToRight);
        secMatrix->setStyleSheet(QString::fromUtf8("	background-color:#000000;\n"
"	color: #a9b7c6;"));
        secMatrix->setLineWrapMode(QTextEdit::WidgetWidth);
        secMatrix->setReadOnly(true);

        verticalLayout_2->addWidget(secMatrix);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setPointSize(10);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #100E19;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #FFFFFF;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #C0DB50, stop:0.4 #C0DB50, stop:0.5 #100E19, stop:1 #100E19);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #100E19, stop:0.5 #100E19, stop:0.6 #C0DB50, stop:1 #C0DB50);\n"
"    border-left-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #C0DB50, stop:0.3 #C0DB50, stop:0.7 #100E19, stop:1 #100E19);\n"
"    border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #C0DB50, stop:0.3 #C0DB50, stop:0.7 #100E19, s"
                        "top:1 #100E19);\n"
"	border-width: 2px;\n"
"    border-radius: 1px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #d33af1, stop:0.4 #d33af1, stop:0.5 #100E19, stop:1 #100E19);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 #100E19, stop:0.5 #100E19, stop:0.6 #d33af1, stop:1 #d33af1);\n"
"    border-left-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #d33af1, stop:0.3 #d33af1, stop:0.7 #100E19, stop:1 #100E19);\n"
"    border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #d33af1, stop:0.3 #d33af1, stop:0.7 #100E19, stop:1 #100E19);\n"
"	border-width: 2px;\n"
"    border-radius: 1px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"}"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 354, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pair System", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\260\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\260\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\260\321\217 \320\274\320\260\321\202\321\200\320\270\321\206\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
