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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *save;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_23;
    QHBoxLayout *horizontalLayout_19;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *informationLabel;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *numberTrain;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *timeLable;
    QTimeEdit *timeDepartment;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *freeSeetsLabel;
    QLineEdit *freeSeets;
    QFrame *frame_4;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *destination;
    QFrame *frame_7;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *dateLabel;
    QDateEdit *dateDepartment;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *addTrain;
    QTextEdit *memo;
    QHBoxLayout *horizontalLayout_21;
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *deleteButton;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *deleteLine;
    QFrame *frame_20;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_21;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *showAll;
    QFrame *frame_22;
    QHBoxLayout *horizontalLayout_24;
    QHBoxLayout *horizontalLayout_22;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *informationLabel_2;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_8;
    QLabel *dateLabel_2;
    QDateEdit *searchDateLine;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_3;
    QLineEdit *searchTrainNumberLine;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *searchNumButton;
    QFrame *frame_14;
    QVBoxLayout *verticalLayout_6;
    QLabel *informationLabel_3;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *searchDestinationLine;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *timeLable_2;
    QTimeEdit *searchTimeLine;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *seachTimeButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(879, 815);
        MainWindow->setStyleSheet(QString::fromUtf8("	background-color:rgb(82, 82, 82);"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        save = new QAction(MainWindow);
        save->setObjectName(QString::fromUtf8("save"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_12 = new QVBoxLayout(centralwidget);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        informationLabel = new QLabel(frame_2);
        informationLabel->setObjectName(QString::fromUtf8("informationLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        informationLabel->setFont(font);
#if QT_CONFIG(statustip)
        informationLabel->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
        informationLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(informationLabel, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        numberTrain = new QLineEdit(frame_3);
        numberTrain->setObjectName(QString::fromUtf8("numberTrain"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numberTrain->sizePolicy().hasHeightForWidth());
        numberTrain->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        numberTrain->setFont(font2);
        numberTrain->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
""));
        numberTrain->setMaxLength(4);
        numberTrain->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(numberTrain);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frame_3);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        timeLable = new QLabel(frame_5);
        timeLable->setObjectName(QString::fromUtf8("timeLable"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setStyleStrategy(QFont::PreferAntialias);
        timeLable->setFont(font3);
        timeLable->setAutoFillBackground(false);
        timeLable->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        timeLable->setFrameShape(QFrame::NoFrame);
        timeLable->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(timeLable);

        timeDepartment = new QTimeEdit(frame_5);
        timeDepartment->setObjectName(QString::fromUtf8("timeDepartment"));
        timeDepartment->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(timeDepartment);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(frame_5);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        freeSeetsLabel = new QLabel(frame_6);
        freeSeetsLabel->setObjectName(QString::fromUtf8("freeSeetsLabel"));
        freeSeetsLabel->setFont(font3);
        freeSeetsLabel->setAutoFillBackground(false);
        freeSeetsLabel->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        freeSeetsLabel->setFrameShape(QFrame::NoFrame);
        freeSeetsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(freeSeetsLabel);

        freeSeets = new QLineEdit(frame_6);
        freeSeets->setObjectName(QString::fromUtf8("freeSeets"));
        sizePolicy.setHeightForWidth(freeSeets->sizePolicy().hasHeightForWidth());
        freeSeets->setSizePolicy(sizePolicy);
        freeSeets->setFont(font2);
        freeSeets->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
""));
        freeSeets->setMaxLength(3);
        freeSeets->setAlignment(Qt::AlignCenter);
        freeSeets->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(freeSeets);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(frame_6);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        destination = new QLineEdit(frame_4);
        destination->setObjectName(QString::fromUtf8("destination"));
        sizePolicy.setHeightForWidth(destination->sizePolicy().hasHeightForWidth());
        destination->setSizePolicy(sizePolicy);
        destination->setFont(font2);
        destination->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
""));
        destination->setMaxLength(25);
        destination->setAlignment(Qt::AlignCenter);
        destination->setReadOnly(false);

        horizontalLayout_5->addWidget(destination);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_4);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_7);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dateLabel = new QLabel(frame_7);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setFont(font3);
        dateLabel->setAutoFillBackground(false);
        dateLabel->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        dateLabel->setFrameShape(QFrame::NoFrame);
        dateLabel->setTextFormat(Qt::PlainText);
        dateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(dateLabel);

        dateDepartment = new QDateEdit(frame_7);
        dateDepartment->setObjectName(QString::fromUtf8("dateDepartment"));
        dateDepartment->setAlignment(Qt::AlignCenter);
        dateDepartment->setDateTime(QDateTime(QDate(2023, 1, 1), QTime(0, 0, 0)));

        horizontalLayout->addWidget(dateDepartment);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_7);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_9->setLineWidth(3);
        verticalLayout_5 = new QVBoxLayout(frame_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        addTrain = new QPushButton(frame_9);
        addTrain->setObjectName(QString::fromUtf8("addTrain"));
        addTrain->setFont(font1);
        addTrain->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255"
                        "));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spr"
                        "ead:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
""
                        "	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}"));

        verticalLayout_5->addWidget(addTrain);


        verticalLayout->addWidget(frame_9);


        horizontalLayout_19->addWidget(frame);


        horizontalLayout_23->addLayout(horizontalLayout_19);

        memo = new QTextEdit(centralwidget);
        memo->setObjectName(QString::fromUtf8("memo"));
        sizePolicy1.setHeightForWidth(memo->sizePolicy().hasHeightForWidth());
        memo->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font4.setPointSize(10);
        memo->setFont(font4);
        memo->setStyleSheet(QString::fromUtf8("	background-color:rgb(42, 42, 42);\n"
"	color: rgb(0, 255, 0);"));
        memo->setReadOnly(true);

        horizontalLayout_23->addWidget(memo);


        verticalLayout_11->addLayout(horizontalLayout_23);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        frame_17 = new QFrame(centralwidget);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setFrameShape(QFrame::Panel);
        frame_17->setFrameShadow(QFrame::Plain);
        frame_17->setLineWidth(1);
        verticalLayout_8 = new QVBoxLayout(frame_17);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        frame_18 = new QFrame(frame_17);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setFrameShape(QFrame::NoFrame);
        frame_18->setFrameShadow(QFrame::Raised);
        frame_18->setLineWidth(3);
        horizontalLayout_9 = new QHBoxLayout(frame_18);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        deleteButton = new QPushButton(frame_18);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setEnabled(false);
        deleteButton->setFont(font1);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255"
                        "));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spr"
                        "ead:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
""
                        "	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}"));

        horizontalLayout_9->addWidget(deleteButton);


        verticalLayout_7->addWidget(frame_18);

        frame_19 = new QFrame(frame_17);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setFrameShape(QFrame::Box);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_19);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        deleteLine = new QLineEdit(frame_19);
        deleteLine->setObjectName(QString::fromUtf8("deleteLine"));
        sizePolicy.setHeightForWidth(deleteLine->sizePolicy().hasHeightForWidth());
        deleteLine->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font5.setPointSize(8);
        deleteLine->setFont(font5);
        deleteLine->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
""));
        deleteLine->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(deleteLine);


        verticalLayout_7->addWidget(frame_19);


        verticalLayout_8->addLayout(verticalLayout_7);


        horizontalLayout_21->addWidget(frame_17);

        frame_20 = new QFrame(centralwidget);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setFrameShape(QFrame::Box);
        frame_20->setFrameShadow(QFrame::Plain);
        frame_20->setLineWidth(1);
        verticalLayout_10 = new QVBoxLayout(frame_20);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        frame_21 = new QFrame(frame_20);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setFrameShape(QFrame::NoFrame);
        frame_21->setFrameShadow(QFrame::Raised);
        frame_21->setLineWidth(3);
        horizontalLayout_20 = new QHBoxLayout(frame_21);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        showAll = new QPushButton(frame_21);
        showAll->setObjectName(QString::fromUtf8("showAll"));
        showAll->setEnabled(false);
        showAll->setFont(font1);
        showAll->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255"
                        "));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spr"
                        "ead:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
""
                        "	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}"));

        horizontalLayout_20->addWidget(showAll);


        verticalLayout_9->addWidget(frame_21);


        verticalLayout_10->addLayout(verticalLayout_9);

        frame_22 = new QFrame(frame_20);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setFrameShape(QFrame::NoFrame);
        frame_22->setFrameShadow(QFrame::Raised);
        frame_22->setLineWidth(3);
        horizontalLayout_24 = new QHBoxLayout(frame_22);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));

        verticalLayout_10->addWidget(frame_22);


        horizontalLayout_21->addWidget(frame_20);


        verticalLayout_11->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        frame_8 = new QFrame(centralwidget);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::Panel);
        frame_8->setFrameShadow(QFrame::Plain);
        frame_8->setLineWidth(1);
        frame_8->setMidLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(frame_8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        informationLabel_2 = new QLabel(frame_8);
        informationLabel_2->setObjectName(QString::fromUtf8("informationLabel_2"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font6.setPointSize(8);
        font6.setBold(true);
        font6.setWeight(75);
        informationLabel_2->setFont(font6);
#if QT_CONFIG(statustip)
        informationLabel_2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
        informationLabel_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        informationLabel_2->setFrameShape(QFrame::Box);
        informationLabel_2->setFrameShadow(QFrame::Raised);
        informationLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(informationLabel_2);

        frame_15 = new QFrame(frame_8);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::Box);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_15);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        dateLabel_2 = new QLabel(frame_15);
        dateLabel_2->setObjectName(QString::fromUtf8("dateLabel_2"));
        dateLabel_2->setFont(font3);
        dateLabel_2->setAutoFillBackground(false);
        dateLabel_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        dateLabel_2->setFrameShape(QFrame::NoFrame);
        dateLabel_2->setTextFormat(Qt::PlainText);
        dateLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(dateLabel_2);

        searchDateLine = new QDateEdit(frame_15);
        searchDateLine->setObjectName(QString::fromUtf8("searchDateLine"));
        searchDateLine->setAlignment(Qt::AlignCenter);
        searchDateLine->setDate(QDate(2023, 1, 1));

        horizontalLayout_8->addWidget(searchDateLine);


        horizontalLayout_15->addLayout(horizontalLayout_8);


        verticalLayout_2->addWidget(frame_15);

        frame_16 = new QFrame(frame_8);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setFrameShape(QFrame::Box);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_16);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_3 = new QLabel(frame_16);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_3);

        searchTrainNumberLine = new QLineEdit(frame_16);
        searchTrainNumberLine->setObjectName(QString::fromUtf8("searchTrainNumberLine"));
        sizePolicy.setHeightForWidth(searchTrainNumberLine->sizePolicy().hasHeightForWidth());
        searchTrainNumberLine->setSizePolicy(sizePolicy);
        searchTrainNumberLine->setFont(font2);
        searchTrainNumberLine->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
""));
        searchTrainNumberLine->setMaxLength(4);
        searchTrainNumberLine->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(searchTrainNumberLine);


        horizontalLayout_17->addLayout(horizontalLayout_16);


        verticalLayout_2->addWidget(frame_16);

        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Raised);
        frame_10->setLineWidth(3);
        horizontalLayout_10 = new QHBoxLayout(frame_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        searchNumButton = new QPushButton(frame_10);
        searchNumButton->setObjectName(QString::fromUtf8("searchNumButton"));
        searchNumButton->setEnabled(false);
        sizePolicy.setHeightForWidth(searchNumButton->sizePolicy().hasHeightForWidth());
        searchNumButton->setSizePolicy(sizePolicy);
        searchNumButton->setFont(font1);
        searchNumButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255"
                        "));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spr"
                        "ead:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
""
                        "	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}"));

        horizontalLayout_10->addWidget(searchNumButton);


        verticalLayout_2->addWidget(frame_10);


        horizontalLayout_22->addWidget(frame_8);

        frame_14 = new QFrame(centralwidget);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::Panel);
        frame_14->setFrameShadow(QFrame::Plain);
        frame_14->setLineWidth(1);
        verticalLayout_6 = new QVBoxLayout(frame_14);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        informationLabel_3 = new QLabel(frame_14);
        informationLabel_3->setObjectName(QString::fromUtf8("informationLabel_3"));
        informationLabel_3->setFont(font6);
#if QT_CONFIG(statustip)
        informationLabel_3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
        informationLabel_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        informationLabel_3->setFrameShape(QFrame::Box);
        informationLabel_3->setFrameShadow(QFrame::Raised);
        informationLabel_3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(informationLabel_3);

        frame_11 = new QFrame(frame_14);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::Box);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(frame_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_4);

        searchDestinationLine = new QLineEdit(frame_11);
        searchDestinationLine->setObjectName(QString::fromUtf8("searchDestinationLine"));
        sizePolicy.setHeightForWidth(searchDestinationLine->sizePolicy().hasHeightForWidth());
        searchDestinationLine->setSizePolicy(sizePolicy);
        searchDestinationLine->setFont(font2);
        searchDestinationLine->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
""));
        searchDestinationLine->setMaxLength(25);
        searchDestinationLine->setAlignment(Qt::AlignCenter);
        searchDestinationLine->setReadOnly(false);

        horizontalLayout_11->addWidget(searchDestinationLine);


        horizontalLayout_14->addLayout(horizontalLayout_11);


        verticalLayout_6->addWidget(frame_11);

        frame_12 = new QFrame(frame_14);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setFrameShape(QFrame::Box);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        timeLable_2 = new QLabel(frame_12);
        timeLable_2->setObjectName(QString::fromUtf8("timeLable_2"));
        timeLable_2->setFont(font3);
        timeLable_2->setAutoFillBackground(false);
        timeLable_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);"));
        timeLable_2->setFrameShape(QFrame::NoFrame);
        timeLable_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(timeLable_2);

        searchTimeLine = new QTimeEdit(frame_12);
        searchTimeLine->setObjectName(QString::fromUtf8("searchTimeLine"));
        searchTimeLine->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(searchTimeLine);


        verticalLayout_4->addLayout(horizontalLayout_12);


        verticalLayout_6->addWidget(frame_12);

        frame_13 = new QFrame(frame_14);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::NoFrame);
        frame_13->setFrameShadow(QFrame::Raised);
        frame_13->setLineWidth(3);
        horizontalLayout_13 = new QHBoxLayout(frame_13);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        seachTimeButton = new QPushButton(frame_13);
        seachTimeButton->setObjectName(QString::fromUtf8("seachTimeButton"));
        seachTimeButton->setEnabled(false);
        sizePolicy.setHeightForWidth(seachTimeButton->sizePolicy().hasHeightForWidth());
        seachTimeButton->setSizePolicy(sizePolicy);
        seachTimeButton->setFont(font1);
        seachTimeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255"
                        "));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spr"
                        "ead:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
""
                        "	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}"));

        horizontalLayout_13->addWidget(seachTimeButton);


        verticalLayout_6->addWidget(frame_13);


        horizontalLayout_22->addWidget(frame_14);


        verticalLayout_11->addLayout(horizontalLayout_22);


        verticalLayout_12->addLayout(verticalLayout_11);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 879, 25));
        menubar->setStyleSheet(QString::fromUtf8("background:rgb(82, 82, 82);"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setStyleSheet(QString::fromUtf8("	background-color:rgb(78,78,78);\n"
""));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(save);
        menu->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", " Railway ticket office", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        informationLabel->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\200\320\265\320\271\321\201\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260:", nullptr));
        numberTrain->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        timeLable->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217:", nullptr));
        freeSeetsLabel->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\274\320\265\321\201\321\202:", nullptr));
        freeSeets->setInputMask(QString());
        freeSeets->setText(QString());
        freeSeets->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:", nullptr));
        destination->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\265\321\201\321\202\320\276", nullptr));
        dateLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\265\320\267\320\264\320\260:", nullptr));
        addTrain->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\271\321\201", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\265\320\271\321\201\321\213 \320\277\320\276 \320\277\321\203\320\275\320\272\321\202\321\203 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        deleteLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\265\321\201\321\202\320\276 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        showAll->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265 \321\200\320\265\320\271\321\201\321\213", nullptr));
        informationLabel_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\200\320\265\320\271\321\201 \320\277\320\276 \320\264\320\260\321\202\320\265 \320\262\321\213\320\265\320\267\320\264\320\260 \320\270 \320\275\320\276\320\274\320\265\321\200\321\203 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        dateLabel_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\265\320\267\320\264\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260:", nullptr));
        searchTrainNumberLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        searchNumButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\200\320\265\320\271\321\201\321\213:", nullptr));
        informationLabel_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\200\320\265\320\271\321\201\321\213 \320\262 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\274 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\270 \n"
"\320\275\320\265 \320\277\320\276\320\267\320\264\320\275\320\265\320\265 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:", nullptr));
        searchDestinationLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\265\321\201\321\202\320\276", nullptr));
        timeLable_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217:", nullptr));
        seachTimeButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\200\320\265\320\271\321\201\321\213:", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
