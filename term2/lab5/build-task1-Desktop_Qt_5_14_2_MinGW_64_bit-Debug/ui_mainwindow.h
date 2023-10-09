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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *push;
    QSpinBox *valuePush;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pop;
    QPushButton *size;
    QPushButton *empty;
    QVBoxLayout *verticalLayout_2;
    QPushButton *back;
    QPushButton *front;
    QPushButton *sort;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(664, 362);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 80, 601, 211));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);

        verticalLayout_4->addWidget(pushButton);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        push = new QPushButton(widget);
        push->setObjectName(QString::fromUtf8("push"));
        sizePolicy.setHeightForWidth(push->sizePolicy().hasHeightForWidth());
        push->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(push);

        valuePush = new QSpinBox(widget);
        valuePush->setObjectName(QString::fromUtf8("valuePush"));
        sizePolicy.setHeightForWidth(valuePush->sizePolicy().hasHeightForWidth());
        valuePush->setSizePolicy(sizePolicy);
        valuePush->setMinimum(-99);

        horizontalLayout->addWidget(valuePush);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pop = new QPushButton(widget);
        pop->setObjectName(QString::fromUtf8("pop"));
        sizePolicy.setHeightForWidth(pop->sizePolicy().hasHeightForWidth());
        pop->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pop);

        size = new QPushButton(widget);
        size->setObjectName(QString::fromUtf8("size"));
        sizePolicy.setHeightForWidth(size->sizePolicy().hasHeightForWidth());
        size->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(size);

        empty = new QPushButton(widget);
        empty->setObjectName(QString::fromUtf8("empty"));
        sizePolicy.setHeightForWidth(empty->sizePolicy().hasHeightForWidth());
        empty->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(empty);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        back = new QPushButton(widget);
        back->setObjectName(QString::fromUtf8("back"));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(back);

        front = new QPushButton(widget);
        front->setObjectName(QString::fromUtf8("front"));
        sizePolicy.setHeightForWidth(front->sizePolicy().hasHeightForWidth());
        front->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(front);

        sort = new QPushButton(widget);
        sort->setObjectName(QString::fromUtf8("sort"));
        sizePolicy.setHeightForWidth(sort->sizePolicy().hasHeightForWidth());
        sort->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(sort);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_5);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 664, 25));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Generate queue", nullptr));
        push->setText(QCoreApplication::translate("MainWindow", "push", nullptr));
        pop->setText(QCoreApplication::translate("MainWindow", "pop", nullptr));
        size->setText(QCoreApplication::translate("MainWindow", "size", nullptr));
        empty->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        front->setText(QCoreApplication::translate("MainWindow", "front", nullptr));
        sort->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
