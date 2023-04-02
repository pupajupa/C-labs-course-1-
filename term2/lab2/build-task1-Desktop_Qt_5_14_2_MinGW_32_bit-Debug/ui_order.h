/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *orderNumberTrain;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *timeLable;
    QTimeEdit *orderTimeDepartment;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *freeSeetsLabel;
    QLineEdit *orderfSeets;
    QFrame *frame_4;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *destination;
    QFrame *frame_7;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *dateLabel;
    QDateEdit *orderDateDepartment;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *doOrder;

    void setupUi(QWidget *order)
    {
        if (order->objectName().isEmpty())
            order->setObjectName(QString::fromUtf8("order"));
        order->resize(500, 450);
        order->setMinimumSize(QSize(500, 450));
        order->setMaximumSize(QSize(500, 450));
        order->setBaseSize(QSize(500, 500));
        gridLayout = new QGridLayout(order);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(order);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        orderNumberTrain = new QLineEdit(frame_3);
        orderNumberTrain->setObjectName(QString::fromUtf8("orderNumberTrain"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(orderNumberTrain->sizePolicy().hasHeightForWidth());
        orderNumberTrain->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        orderNumberTrain->setFont(font1);
        orderNumberTrain->setMaxLength(4);
        orderNumberTrain->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(orderNumberTrain);


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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStyleStrategy(QFont::PreferAntialias);
        timeLable->setFont(font2);
        timeLable->setAutoFillBackground(false);
        timeLable->setFrameShape(QFrame::WinPanel);
        timeLable->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(timeLable);

        orderTimeDepartment = new QTimeEdit(frame_5);
        orderTimeDepartment->setObjectName(QString::fromUtf8("orderTimeDepartment"));
        orderTimeDepartment->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(orderTimeDepartment);


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
        freeSeetsLabel->setFont(font2);
        freeSeetsLabel->setAutoFillBackground(false);
        freeSeetsLabel->setFrameShape(QFrame::WinPanel);
        freeSeetsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(freeSeetsLabel);

        orderfSeets = new QLineEdit(frame_6);
        orderfSeets->setObjectName(QString::fromUtf8("orderfSeets"));
        sizePolicy.setHeightForWidth(orderfSeets->sizePolicy().hasHeightForWidth());
        orderfSeets->setSizePolicy(sizePolicy);
        orderfSeets->setFont(font1);
        orderfSeets->setMaxLength(3);
        orderfSeets->setAlignment(Qt::AlignCenter);
        orderfSeets->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(orderfSeets);


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
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::WinPanel);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        destination = new QLineEdit(frame_4);
        destination->setObjectName(QString::fromUtf8("destination"));
        sizePolicy.setHeightForWidth(destination->sizePolicy().hasHeightForWidth());
        destination->setSizePolicy(sizePolicy);
        destination->setFont(font1);
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
        dateLabel->setFont(font2);
        dateLabel->setAutoFillBackground(false);
        dateLabel->setFrameShape(QFrame::WinPanel);
        dateLabel->setTextFormat(Qt::PlainText);
        dateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(dateLabel);

        orderDateDepartment = new QDateEdit(frame_7);
        orderDateDepartment->setObjectName(QString::fromUtf8("orderDateDepartment"));
        orderDateDepartment->setAlignment(Qt::AlignCenter);
        orderDateDepartment->setDateTime(QDateTime(QDate(2023, 1, 1), QTime(0, 0, 0)));

        horizontalLayout->addWidget(orderDateDepartment);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_7);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_9->setLineWidth(3);
        verticalLayout_5 = new QVBoxLayout(frame_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        doOrder = new QPushButton(frame_9);
        doOrder->setObjectName(QString::fromUtf8("doOrder"));
        doOrder->setFont(font);

        verticalLayout_5->addWidget(doOrder);


        verticalLayout->addWidget(frame_9);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(order);

        QMetaObject::connectSlotsByName(order);
    } // setupUi

    void retranslateUi(QWidget *order)
    {
        order->setWindowTitle(QCoreApplication::translate("order", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("order", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260:", nullptr));
        orderNumberTrain->setPlaceholderText(QCoreApplication::translate("order", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        timeLable->setText(QCoreApplication::translate("order", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217:", nullptr));
        freeSeetsLabel->setText(QCoreApplication::translate("order", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202:", nullptr));
        orderfSeets->setInputMask(QString());
        orderfSeets->setText(QString());
        orderfSeets->setPlaceholderText(QCoreApplication::translate("order", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("order", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:", nullptr));
        destination->setPlaceholderText(QCoreApplication::translate("order", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\265\321\201\321\202\320\276", nullptr));
        dateLabel->setText(QCoreApplication::translate("order", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\265\320\267\320\264\320\260:", nullptr));
        doOrder->setText(QCoreApplication::translate("order", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order: public Ui_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
