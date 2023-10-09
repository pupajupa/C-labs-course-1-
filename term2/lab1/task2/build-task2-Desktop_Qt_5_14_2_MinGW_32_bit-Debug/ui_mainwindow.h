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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *femaleList;
    QPushButton *openButton;
    QPushButton *saveButton;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *candidateList;
    QPushButton *deleteButton;
    QLineEdit *lineDelete;
    QPushButton *exitButton;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *maleList;
    QPushButton *addButton;
    QPushButton *showButton;
    QTextEdit *listCandidateText;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *information;
    QGridLayout *gridLayout;
    QLabel *numberText;
    QLabel *hobbyText;
    QLineEdit *name;
    QSpinBox *height;
    QLabel *weightText;
    QSpinBox *age;
    QSpinBox *numCount;
    QSpinBox *weight;
    QLabel *sexText;
    QLabel *nameTxt;
    QLabel *ageText;
    QLabel *heightText;
    QLineEdit *hobby;
    QCheckBox *female;
    QCheckBox *male;
    QVBoxLayout *verticalLayout;
    QLabel *requirements;
    QGridLayout *gridLayout_2;
    QLabel *maxAgeText;
    QSpinBox *minWeight;
    QSpinBox *maxWeight;
    QLabel *minHeightText;
    QSpinBox *maxHeight;
    QLabel *minWeightText;
    QLabel *maxHeightText;
    QLabel *maxWeightText;
    QSpinBox *maxAge;
    QSpinBox *minAge;
    QSpinBox *minHeight;
    QLabel *minAgeText;
    QPushButton *sortButton;
    QTextEdit *listFemaleText;
    QTextEdit *listMaleText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(832, 736);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        femaleList = new QTextEdit(centralwidget);
        femaleList->setObjectName(QString::fromUtf8("femaleList"));

        verticalLayout_3->addWidget(femaleList);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        verticalLayout_3->addWidget(openButton);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout_3->addWidget(saveButton);


        verticalLayout_6->addLayout(verticalLayout_3);


        gridLayout_5->addLayout(verticalLayout_6, 0, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        candidateList = new QTextEdit(centralwidget);
        candidateList->setObjectName(QString::fromUtf8("candidateList"));

        verticalLayout_4->addWidget(candidateList);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout_4->addWidget(deleteButton);

        lineDelete = new QLineEdit(centralwidget);
        lineDelete->setObjectName(QString::fromUtf8("lineDelete"));

        verticalLayout_4->addWidget(lineDelete);


        verticalLayout_7->addLayout(verticalLayout_4);


        gridLayout_5->addLayout(verticalLayout_7, 0, 2, 1, 1);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setAutoDefault(false);

        gridLayout_5->addWidget(exitButton, 1, 0, 1, 3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        maleList = new QTextEdit(centralwidget);
        maleList->setObjectName(QString::fromUtf8("maleList"));

        verticalLayout_2->addWidget(maleList);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setFlat(false);

        verticalLayout_2->addWidget(addButton);

        showButton = new QPushButton(centralwidget);
        showButton->setObjectName(QString::fromUtf8("showButton"));
        showButton->setFlat(false);

        verticalLayout_2->addWidget(showButton);


        verticalLayout_5->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 3);

        listCandidateText = new QTextEdit(centralwidget);
        listCandidateText->setObjectName(QString::fromUtf8("listCandidateText"));
        listCandidateText->setMaximumSize(QSize(16777215, 35));
        listCandidateText->setFrameShape(QFrame::Panel);
        listCandidateText->setFrameShadow(QFrame::Sunken);
        listCandidateText->setReadOnly(true);

        gridLayout_6->addWidget(listCandidateText, 1, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        information = new QLabel(centralwidget);
        information->setObjectName(QString::fromUtf8("information"));
        information->setFrameShape(QFrame::Panel);
        information->setFrameShadow(QFrame::Raised);
        information->setTextFormat(Qt::MarkdownText);
        information->setScaledContents(false);
        information->setAlignment(Qt::AlignCenter);
        information->setWordWrap(false);

        gridLayout_3->addWidget(information, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        numberText = new QLabel(centralwidget);
        numberText->setObjectName(QString::fromUtf8("numberText"));
        numberText->setFrameShape(QFrame::Panel);
        numberText->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(numberText, 0, 0, 1, 5);

        hobbyText = new QLabel(centralwidget);
        hobbyText->setObjectName(QString::fromUtf8("hobbyText"));
        hobbyText->setFrameShape(QFrame::Panel);
        hobbyText->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(hobbyText, 6, 0, 1, 5);

        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 2, 5, 1, 3);

        height = new QSpinBox(centralwidget);
        height->setObjectName(QString::fromUtf8("height"));

        gridLayout->addWidget(height, 4, 5, 1, 3);

        weightText = new QLabel(centralwidget);
        weightText->setObjectName(QString::fromUtf8("weightText"));
        weightText->setFrameShape(QFrame::Panel);
        weightText->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(weightText, 5, 0, 1, 5);

        age = new QSpinBox(centralwidget);
        age->setObjectName(QString::fromUtf8("age"));

        gridLayout->addWidget(age, 3, 5, 1, 3);

        numCount = new QSpinBox(centralwidget);
        numCount->setObjectName(QString::fromUtf8("numCount"));

        gridLayout->addWidget(numCount, 0, 5, 1, 3);

        weight = new QSpinBox(centralwidget);
        weight->setObjectName(QString::fromUtf8("weight"));

        gridLayout->addWidget(weight, 5, 5, 1, 3);

        sexText = new QLabel(centralwidget);
        sexText->setObjectName(QString::fromUtf8("sexText"));
        sexText->setFrameShape(QFrame::Panel);
        sexText->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(sexText, 1, 0, 1, 5);

        nameTxt = new QLabel(centralwidget);
        nameTxt->setObjectName(QString::fromUtf8("nameTxt"));
        nameTxt->setFrameShape(QFrame::Panel);
        nameTxt->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(nameTxt, 2, 0, 1, 5);

        ageText = new QLabel(centralwidget);
        ageText->setObjectName(QString::fromUtf8("ageText"));
        ageText->setFrameShape(QFrame::Panel);
        ageText->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(ageText, 3, 0, 1, 5);

        heightText = new QLabel(centralwidget);
        heightText->setObjectName(QString::fromUtf8("heightText"));
        heightText->setFrameShape(QFrame::Panel);
        heightText->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(heightText, 4, 0, 1, 5);

        hobby = new QLineEdit(centralwidget);
        hobby->setObjectName(QString::fromUtf8("hobby"));

        gridLayout->addWidget(hobby, 6, 5, 1, 3);

        female = new QCheckBox(centralwidget);
        female->setObjectName(QString::fromUtf8("female"));

        gridLayout->addWidget(female, 1, 7, 1, 1);

        male = new QCheckBox(centralwidget);
        male->setObjectName(QString::fromUtf8("male"));
        male->setChecked(false);
        male->setAutoRepeat(false);

        gridLayout->addWidget(male, 1, 5, 1, 2);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        requirements = new QLabel(centralwidget);
        requirements->setObjectName(QString::fromUtf8("requirements"));
        requirements->setFrameShape(QFrame::Panel);
        requirements->setFrameShadow(QFrame::Raised);
        requirements->setTextFormat(Qt::MarkdownText);

        verticalLayout->addWidget(requirements);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        maxAgeText = new QLabel(centralwidget);
        maxAgeText->setObjectName(QString::fromUtf8("maxAgeText"));
        maxAgeText->setFrameShape(QFrame::Panel);
        maxAgeText->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(maxAgeText, 1, 0, 1, 2);

        minWeight = new QSpinBox(centralwidget);
        minWeight->setObjectName(QString::fromUtf8("minWeight"));

        gridLayout_2->addWidget(minWeight, 4, 2, 1, 2);

        maxWeight = new QSpinBox(centralwidget);
        maxWeight->setObjectName(QString::fromUtf8("maxWeight"));

        gridLayout_2->addWidget(maxWeight, 5, 2, 1, 2);

        minHeightText = new QLabel(centralwidget);
        minHeightText->setObjectName(QString::fromUtf8("minHeightText"));
        minHeightText->setFrameShape(QFrame::Panel);
        minHeightText->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(minHeightText, 2, 0, 1, 2);

        maxHeight = new QSpinBox(centralwidget);
        maxHeight->setObjectName(QString::fromUtf8("maxHeight"));

        gridLayout_2->addWidget(maxHeight, 3, 2, 1, 2);

        minWeightText = new QLabel(centralwidget);
        minWeightText->setObjectName(QString::fromUtf8("minWeightText"));
        minWeightText->setFrameShape(QFrame::Panel);
        minWeightText->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(minWeightText, 4, 0, 1, 2);

        maxHeightText = new QLabel(centralwidget);
        maxHeightText->setObjectName(QString::fromUtf8("maxHeightText"));
        maxHeightText->setFrameShape(QFrame::Panel);
        maxHeightText->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(maxHeightText, 3, 0, 1, 2);

        maxWeightText = new QLabel(centralwidget);
        maxWeightText->setObjectName(QString::fromUtf8("maxWeightText"));
        maxWeightText->setFrameShape(QFrame::Panel);
        maxWeightText->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(maxWeightText, 5, 0, 1, 2);

        maxAge = new QSpinBox(centralwidget);
        maxAge->setObjectName(QString::fromUtf8("maxAge"));

        gridLayout_2->addWidget(maxAge, 1, 2, 1, 2);

        minAge = new QSpinBox(centralwidget);
        minAge->setObjectName(QString::fromUtf8("minAge"));

        gridLayout_2->addWidget(minAge, 0, 2, 1, 2);

        minHeight = new QSpinBox(centralwidget);
        minHeight->setObjectName(QString::fromUtf8("minHeight"));

        gridLayout_2->addWidget(minHeight, 2, 2, 1, 2);

        minAgeText = new QLabel(centralwidget);
        minAgeText->setObjectName(QString::fromUtf8("minAgeText"));
        minAgeText->setFrameShape(QFrame::Panel);
        minAgeText->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(minAgeText, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_2);

        sortButton = new QPushButton(centralwidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setAutoDefault(false);

        verticalLayout->addWidget(sortButton);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 3);

        listFemaleText = new QTextEdit(centralwidget);
        listFemaleText->setObjectName(QString::fromUtf8("listFemaleText"));
        listFemaleText->setMaximumSize(QSize(16777215, 35));
        listFemaleText->setFrameShape(QFrame::Panel);
        listFemaleText->setFrameShadow(QFrame::Sunken);
        listFemaleText->setReadOnly(true);

        gridLayout_6->addWidget(listFemaleText, 1, 1, 1, 1);

        listMaleText = new QTextEdit(centralwidget);
        listMaleText->setObjectName(QString::fromUtf8("listMaleText"));
        listMaleText->setMinimumSize(QSize(0, 0));
        listMaleText->setMaximumSize(QSize(16777215, 35));
        listMaleText->setFrameShape(QFrame::Panel);
        listMaleText->setFrameShadow(QFrame::Sunken);
        listMaleText->setReadOnly(true);

        gridLayout_6->addWidget(listMaleText, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 832, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        openButton->setDefault(true);
        saveButton->setDefault(true);
        deleteButton->setDefault(true);
        exitButton->setDefault(true);
        addButton->setDefault(true);
        showButton->setDefault(true);
        sortButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tinder 2.0", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\320\260", nullptr));
        lineDelete->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\320\260 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\320\260", nullptr));
        showButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265\321\205", nullptr));
        listCandidateText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#3e3e3e;\">\320\237\320\276\320\264\321\205\320\276\320\264\321\217\321\211\320\270\320\265 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\321\213:</span></p></body></html>", nullptr));
        information->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#424242;\">\320\224\320\260\320\275\320\275\321\213\320\265 \320\276 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\320\265:</span></p></body></html>", nullptr));
        numberText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\237\320\276\321\200\321\217\320\264\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200:</span></p></body></html>", nullptr));
        hobbyText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\245\320\276\320\261\320\261\320\270:</span></p></body></html>", nullptr));
        weightText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\222\320\265\321\201(\320\272\320\263):</span></p></body></html>", nullptr));
        sexText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\237\320\276\320\273 \320\272\320\276\320\275\320\264\320\270\320\264\320\260\321\202\320\260:</span></p></body></html>", nullptr));
        nameTxt->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\230\320\274\321\217:</span></p></body></html>", nullptr));
        ageText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\222\320\276\320\267\321\200\320\260\321\201\321\202:</span></p></body></html>", nullptr));
        heightText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\240\320\276\321\201\321\202(\321\201\320\274):</span></p></body></html>", nullptr));
        female->setText(QCoreApplication::translate("MainWindow", "\320\226", nullptr));
        male->setText(QCoreApplication::translate("MainWindow", "\320\234", nullptr));
        requirements->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#3e3e3e;\">\320\242\321\200\320\265\320\261\320\276\320\262\320\260\320\275\320\270\321\217 \320\272 \320\272\320\260\320\275\320\264\320\270\320\264\320\260\321\202\321\203:</span></p></body></html>", nullptr));
        maxAgeText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\262\320\276\320\267\321\200\320\260\321\201\321\202:</span></p></body></html>", nullptr));
        minHeightText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\276\321\201\321\202(\321\201\320\274):</span></p></body></html>", nullptr));
        minWeightText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\262\320\265\321\201(\320\272\320\263):</span></p></body></html>", nullptr));
        maxHeightText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\276\321\201\321\202(\321\201\320\274):</span></p></body></html>", nullptr));
        maxWeightText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\262\320\265\321\201(\320\272\320\263):</span></p></body></html>", nullptr));
        minAgeText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-style:italic;\">\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\262\320\276\320\267\321\200\320\260\321\201\321\202:</span></p></body></html>", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        listFemaleText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#303030;\">\320\241\320\277\320\270\321\201\320\276\320\272 \320\275\320\265\320\262\320\265\321\201\321\202:</span></p></body></html>", nullptr));
        listMaleText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#3d3d3d;\">\320\241\320\277\320\270\321\201\320\276\320\272 \320\266\320\265\320\275\320\270\321\205\320\276\320\262:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
