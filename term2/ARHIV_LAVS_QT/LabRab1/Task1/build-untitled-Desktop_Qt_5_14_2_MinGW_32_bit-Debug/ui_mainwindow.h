/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_3;
    QDateEdit *DateAddText;
    QPushButton *addDate;
    QGridLayout *gridLayout_2;
    QDateEdit *DateChangeText;
    QPushButton *changeDate;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QVBoxLayout *verticalLayout_4;
    QDateEdit *DateBirthdayText;
    QLCDNumber *lcdNumber;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *openfile;
    QPushButton *savefile;
    QTableWidget *table;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(822, 623);
        MainWindow->setMaximumSize(QSize(1103, 16777215));
        MainWindow->setIconSize(QSize(30, 30));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 430, 821, 141));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit_3 = new QTextEdit(widget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_3);

        DateAddText = new QDateEdit(widget);
        DateAddText->setObjectName(QString::fromUtf8("DateAddText"));
        DateAddText->setTime(QTime(0, 0, 0));
        DateAddText->setMinimumDateTime(QDateTime(QDate(1752, 9, 14), QTime(0, 0, 0)));
        DateAddText->setMinimumDate(QDate(1752, 9, 14));
        DateAddText->setCalendarPopup(true);
        DateAddText->setDate(QDate(2023, 1, 11));

        verticalLayout_2->addWidget(DateAddText);

        addDate = new QPushButton(widget);
        addDate->setObjectName(QString::fromUtf8("addDate"));

        verticalLayout_2->addWidget(addDate);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        DateChangeText = new QDateEdit(widget);
        DateChangeText->setObjectName(QString::fromUtf8("DateChangeText"));
        DateChangeText->setCalendarPopup(true);

        gridLayout_2->addWidget(DateChangeText, 2, 0, 1, 1);

        changeDate = new QPushButton(widget);
        changeDate->setObjectName(QString::fromUtf8("changeDate"));

        gridLayout_2->addWidget(changeDate, 3, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMouseTracking(true);
        lineEdit->setAutoFillBackground(false);
        lineEdit->setMaxLength(50);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setCursorPosition(28);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_2);

        textEdit_4 = new QTextEdit(widget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_4);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        DateBirthdayText = new QDateEdit(widget);
        DateBirthdayText->setObjectName(QString::fromUtf8("DateBirthdayText"));
        DateBirthdayText->setAutoFillBackground(false);
        DateBirthdayText->setCurrentSection(QDateTimeEdit::DaySection);
        DateBirthdayText->setCalendarPopup(true);

        verticalLayout_4->addWidget(DateBirthdayText);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(4);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_4->addWidget(lcdNumber);


        horizontalLayout->addLayout(verticalLayout_4);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 10, 821, 421));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        openfile = new QPushButton(widget1);
        openfile->setObjectName(QString::fromUtf8("openfile"));

        gridLayout->addWidget(openfile, 0, 0, 1, 1);

        savefile = new QPushButton(widget1);
        savefile->setObjectName(QString::fromUtf8("savefile"));

        gridLayout->addWidget(savefile, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        table = new QTableWidget(widget1);
        if (table->columnCount() < 6)
            table->setColumnCount(6);
        QFont font;
        font.setFamily(QString::fromUtf8("Palatino Linotype"));
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Palatino Linotype"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font1);
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Palatino Linotype"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font2);
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font2);
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMaximumSize(QSize(819, 383));
        table->setLineWidth(2);
        table->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setSelectionBehavior(QAbstractItemView::SelectItems);
        table->setRowCount(0);
        table->horizontalHeader()->setCascadingSectionResizes(true);
        table->horizontalHeader()->setDefaultSectionSize(136);
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        table->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(table);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 822, 26));
        menubar->setDefaultUp(false);
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
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\264\320\273\321\217 <span style=\" font-weight:600;\">\320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217</span></p></body></html>", nullptr));
        addDate->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", nullptr));
        changeDate->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QCoreApplication::translate("MainWindow", " \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\264\320\273\321\217 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\264\320\273\321\217<span style=\" font-weight:600;\"> \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 </span><span style=\" font-size:8pt; font-weight:600; color:#000000;\">\320\264\320\260\321\202\321\203 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217</span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\224\320\276 \320\262\320\260\321\210\320\265\320\263\320\276 \320\264\320\275\321\217 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \320\276\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \321\201\321\202\320\276\320\273\321\214\320\272\320\276 \320\264\320\275\320\265\320\271:</span></p></body></htm"
                        "l>", nullptr));
        openfile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        savefile->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Next Day", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Previous Day", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Is Leap", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Week Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Duration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
