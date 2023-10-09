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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *dataInAdd;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *keyInAdd;
    QPushButton *add;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *keyInSearchOrRemove;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *search;
    QPushButton *remove;
    QTextEdit *memo;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_10;
    QTreeWidget *tree;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_7;
    QPushButton *preord;
    QPushButton *postorder;
    QPushButton *keyup;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_11;
    QTableWidget *table;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *addMassive;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *balanceButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1133, 869);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 340, 361, 111));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        dataInAdd = new QLineEdit(widget);
        dataInAdd->setObjectName(QString::fromUtf8("dataInAdd"));

        verticalLayout->addWidget(dataInAdd);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        keyInAdd = new QLineEdit(widget);
        keyInAdd->setObjectName(QString::fromUtf8("keyInAdd"));

        verticalLayout_2->addWidget(keyInAdd);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_3);

        add = new QPushButton(widget);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout_5->addWidget(add);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(31, 471, 621, 111));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        keyInSearchOrRemove = new QLineEdit(widget1);
        keyInSearchOrRemove->setObjectName(QString::fromUtf8("keyInSearchOrRemove"));

        verticalLayout_4->addWidget(keyInSearchOrRemove);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        search = new QPushButton(widget1);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout_4->addWidget(search);

        remove = new QPushButton(widget1);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout_4->addWidget(remove);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_6);

        memo = new QTextEdit(widget1);
        memo->setObjectName(QString::fromUtf8("memo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(memo->sizePolicy().hasHeightForWidth());
        memo->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(memo);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(480, 40, 571, 411));
        verticalLayout_10 = new QVBoxLayout(widget2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        tree = new QTreeWidget(widget2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setColumnCount(2);
        tree->header()->setDefaultSectionSize(250);

        verticalLayout_10->addWidget(tree);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(widget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);

        label_9 = new QLabel(widget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_9);

        label_10 = new QLabel(widget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_10);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        preord = new QPushButton(widget2);
        preord->setObjectName(QString::fromUtf8("preord"));

        verticalLayout_7->addWidget(preord);

        postorder = new QPushButton(widget2);
        postorder->setObjectName(QString::fromUtf8("postorder"));

        verticalLayout_7->addWidget(postorder);

        keyup = new QPushButton(widget2);
        keyup->setObjectName(QString::fromUtf8("keyup"));

        verticalLayout_7->addWidget(keyup);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_5);


        verticalLayout_10->addLayout(verticalLayout_9);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(30, 40, 351, 281));
        verticalLayout_11 = new QVBoxLayout(widget3);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        table = new QTableWidget(widget3);
        if (table->columnCount() < 2)
            table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (table->rowCount() < 7)
            table->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setItem(0, 1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setItem(2, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setItem(2, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setItem(3, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setItem(3, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setItem(4, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setItem(4, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table->setItem(5, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table->setItem(5, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table->setItem(6, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table->setItem(6, 1, __qtablewidgetitem15);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table->setRowCount(7);
        table->setColumnCount(2);
        table->horizontalHeader()->setDefaultSectionSize(160);
        table->verticalHeader()->setDefaultSectionSize(31);

        verticalLayout_11->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        addMassive = new QPushButton(widget3);
        addMassive->setObjectName(QString::fromUtf8("addMassive"));

        horizontalLayout->addWidget(addMassive);


        verticalLayout_11->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        balanceButton = new QPushButton(widget3);
        balanceButton->setObjectName(QString::fromUtf8("balanceButton"));

        horizontalLayout_2->addWidget(balanceButton);


        verticalLayout_11->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1133, 25));
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
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        dataInAdd->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207", nullptr));
        keyInAdd->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\273\321\216\321\207", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\270\320\273\320\270 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        keyInSearchOrRemove->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\273\321\216\321\207", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\265\321\207\320\260\321\202\320\272\320\260 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\320\271 \320\276\320\261\321\205\320\276\320\264", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\321\213\320\271 \320\276\320\261\321\205\320\276\320\264", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216 \320\272\320\273\321\216\321\207\320\260", nullptr));
        preord->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        postorder->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        keyup->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));

        const bool __sortingEnabled = table->isSortingEnabled();
        table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = table->item(0, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Olivia", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->item(0, 1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "239856", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Samuel", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->item(1, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "387104", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table->item(2, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Emily", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table->item(2, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "184752", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table->item(3, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Jack", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table->item(3, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "158936", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table->item(4, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Connor", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table->item(4, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "493670", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table->item(5, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "George", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table->item(5, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "603841", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table->item(6, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Joseph", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table->item(6, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "103752", nullptr));
        table->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\270\320\267 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        addMassive->setText(QCoreApplication::translate("MainWindow", "Add by table", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\320\260\320\273\320\260\320\275\321\201\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\264\320\265\321\200\320\265\320\262\320\276", nullptr));
        balanceButton->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
