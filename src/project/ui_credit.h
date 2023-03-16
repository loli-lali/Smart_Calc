/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QGridLayout *gridLayout;
    QLabel *result_pay_proc;
    QLabel *x_min_10;
    QLabel *x_min_7;
    QLabel *x_min_6;
    QLineEdit *credit_time_line;
    QLabel *x_min_4;
    QLabel *result_pay;
    QLabel *x_min_11;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_OK;
    QLabel *x_min_3;
    QLabel *x_min_12;
    QLabel *x_min_5;
    QLabel *x_min_9;
    QLineEdit *interest_rate_line;
    QLabel *x_min;
    QVBoxLayout *verticalLayout;
    QRadioButton *button_annu;
    QRadioButton *button_diff;
    QLabel *result_proc;
    QLabel *x_min_2;
    QLabel *x_min_13;
    QLineEdit *credit_sum_line;
    QLabel *x_min_8;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(596, 364);
        Credit->setMinimumSize(QSize(0, 0));
        Credit->setMaximumSize(QSize(1000, 1000));
        Credit->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: white; \n"
"	color: black;\n"
"	font-size: 12px;\n"
"}"));
        gridLayout = new QGridLayout(Credit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        result_pay_proc = new QLabel(Credit);
        result_pay_proc->setObjectName(QString::fromUtf8("result_pay_proc"));
        result_pay_proc->setMinimumSize(QSize(350, 30));
        result_pay_proc->setMaximumSize(QSize(350, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(20);
        font.setBold(false);
        result_pay_proc->setFont(font);
        result_pay_proc->setCursor(QCursor(Qt::IBeamCursor));
        result_pay_proc->setMouseTracking(true);
        result_pay_proc->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"color: black;\n"
"font-size: 20pt;\n"
"}"));
        result_pay_proc->setAlignment(Qt::AlignCenter);
        result_pay_proc->setWordWrap(false);

        gridLayout->addWidget(result_pay_proc, 6, 1, 1, 1);

        x_min_10 = new QLabel(Credit);
        x_min_10->setObjectName(QString::fromUtf8("x_min_10"));
        x_min_10->setMinimumSize(QSize(0, 30));
        x_min_10->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        x_min_10->setFont(font1);
        x_min_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_10, 6, 0, 1, 1);

        x_min_7 = new QLabel(Credit);
        x_min_7->setObjectName(QString::fromUtf8("x_min_7"));
        x_min_7->setMinimumSize(QSize(0, 30));
        x_min_7->setMaximumSize(QSize(16777215, 30));
        x_min_7->setFont(font1);
        x_min_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_7, 2, 2, 1, 1);

        x_min_6 = new QLabel(Credit);
        x_min_6->setObjectName(QString::fromUtf8("x_min_6"));
        x_min_6->setMinimumSize(QSize(0, 30));
        x_min_6->setMaximumSize(QSize(16777215, 30));
        x_min_6->setFont(font1);
        x_min_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_6, 1, 2, 1, 1);

        credit_time_line = new QLineEdit(Credit);
        credit_time_line->setObjectName(QString::fromUtf8("credit_time_line"));
        credit_time_line->setMinimumSize(QSize(350, 30));
        credit_time_line->setMaximumSize(QSize(350, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Verdana")});
        font2.setPointSize(21);
        credit_time_line->setFont(font2);
        credit_time_line->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 21pt;\n"
"}"));
        credit_time_line->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(credit_time_line, 1, 1, 1, 1);

        x_min_4 = new QLabel(Credit);
        x_min_4->setObjectName(QString::fromUtf8("x_min_4"));
        x_min_4->setMinimumSize(QSize(0, 30));
        x_min_4->setMaximumSize(QSize(16777215, 60));
        x_min_4->setFont(font1);
        x_min_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        x_min_4->setWordWrap(true);

        gridLayout->addWidget(x_min_4, 3, 0, 1, 1);

        result_pay = new QLabel(Credit);
        result_pay->setObjectName(QString::fromUtf8("result_pay"));
        result_pay->setMinimumSize(QSize(350, 30));
        result_pay->setMaximumSize(QSize(350, 50));
        result_pay->setFont(font);
        result_pay->setCursor(QCursor(Qt::IBeamCursor));
        result_pay->setMouseTracking(true);
        result_pay->setTabletTracking(false);
        result_pay->setFocusPolicy(Qt::NoFocus);
        result_pay->setAcceptDrops(false);
        result_pay->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"color: black;\n"
"font-size: 20pt;\n"
"}"));
        result_pay->setAlignment(Qt::AlignCenter);
        result_pay->setWordWrap(false);

        gridLayout->addWidget(result_pay, 4, 1, 1, 1);

        x_min_11 = new QLabel(Credit);
        x_min_11->setObjectName(QString::fromUtf8("x_min_11"));
        x_min_11->setMinimumSize(QSize(0, 30));
        x_min_11->setMaximumSize(QSize(16777215, 30));
        x_min_11->setFont(font1);
        x_min_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_11, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        button_OK = new QPushButton(Credit);
        button_OK->setObjectName(QString::fromUtf8("button_OK"));
        button_OK->setMinimumSize(QSize(250, 50));
        button_OK->setMaximumSize(QSize(200, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setBold(false);
        button_OK->setFont(font3);
        button_OK->setMouseTracking(true);
        button_OK->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"        background-color: white;\n"
"        border: 2px solid black;\n"
"        border-radius: 5px;\n"
"}\n"
"/*\n"
"QPushButton:hover {\n"
"        background-color: rgb(176, 254, 255)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: rgb(87, 252, 255)\n"
"}*/"));

        horizontalLayout->addWidget(button_OK);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 3);

        x_min_3 = new QLabel(Credit);
        x_min_3->setObjectName(QString::fromUtf8("x_min_3"));
        x_min_3->setMinimumSize(QSize(0, 30));
        x_min_3->setMaximumSize(QSize(16777215, 30));
        x_min_3->setFont(font1);
        x_min_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_3, 2, 0, 1, 1);

        x_min_12 = new QLabel(Credit);
        x_min_12->setObjectName(QString::fromUtf8("x_min_12"));
        x_min_12->setMinimumSize(QSize(0, 30));
        x_min_12->setMaximumSize(QSize(16777215, 30));
        x_min_12->setFont(font1);
        x_min_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_12, 5, 2, 1, 1);

        x_min_5 = new QLabel(Credit);
        x_min_5->setObjectName(QString::fromUtf8("x_min_5"));
        x_min_5->setMinimumSize(QSize(0, 30));
        x_min_5->setMaximumSize(QSize(16777215, 30));
        x_min_5->setFont(font1);
        x_min_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_5, 0, 2, 1, 1);

        x_min_9 = new QLabel(Credit);
        x_min_9->setObjectName(QString::fromUtf8("x_min_9"));
        x_min_9->setMinimumSize(QSize(0, 30));
        x_min_9->setMaximumSize(QSize(16777215, 30));
        x_min_9->setFont(font1);
        x_min_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_9, 5, 0, 1, 1);

        interest_rate_line = new QLineEdit(Credit);
        interest_rate_line->setObjectName(QString::fromUtf8("interest_rate_line"));
        interest_rate_line->setMinimumSize(QSize(350, 30));
        interest_rate_line->setMaximumSize(QSize(350, 50));
        interest_rate_line->setFont(font2);
        interest_rate_line->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 21pt;\n"
"}"));
        interest_rate_line->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(interest_rate_line, 2, 1, 1, 1);

        x_min = new QLabel(Credit);
        x_min->setObjectName(QString::fromUtf8("x_min"));
        x_min->setMinimumSize(QSize(0, 30));
        x_min->setMaximumSize(QSize(16777215, 30));
        x_min->setFont(font1);
        x_min->setStyleSheet(QString::fromUtf8(""));
        x_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        button_annu = new QRadioButton(Credit);
        button_annu->setObjectName(QString::fromUtf8("button_annu"));
        button_annu->setFont(font1);

        verticalLayout->addWidget(button_annu);

        button_diff = new QRadioButton(Credit);
        button_diff->setObjectName(QString::fromUtf8("button_diff"));
        button_diff->setFont(font1);

        verticalLayout->addWidget(button_diff);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        result_proc = new QLabel(Credit);
        result_proc->setObjectName(QString::fromUtf8("result_proc"));
        result_proc->setMinimumSize(QSize(350, 30));
        result_proc->setMaximumSize(QSize(350, 50));
        result_proc->setFont(font);
        result_proc->setCursor(QCursor(Qt::IBeamCursor));
        result_proc->setMouseTracking(true);
        result_proc->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"color: black;\n"
"font-size: 20pt;\n"
"}"));
        result_proc->setAlignment(Qt::AlignCenter);
        result_proc->setWordWrap(false);

        gridLayout->addWidget(result_proc, 5, 1, 1, 1);

        x_min_2 = new QLabel(Credit);
        x_min_2->setObjectName(QString::fromUtf8("x_min_2"));
        x_min_2->setMinimumSize(QSize(0, 30));
        x_min_2->setMaximumSize(QSize(16777215, 30));
        x_min_2->setFont(font1);
        x_min_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_2, 1, 0, 1, 1);

        x_min_13 = new QLabel(Credit);
        x_min_13->setObjectName(QString::fromUtf8("x_min_13"));
        x_min_13->setMinimumSize(QSize(0, 30));
        x_min_13->setMaximumSize(QSize(16777215, 30));
        x_min_13->setFont(font1);
        x_min_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_13, 6, 2, 1, 1);

        credit_sum_line = new QLineEdit(Credit);
        credit_sum_line->setObjectName(QString::fromUtf8("credit_sum_line"));
        credit_sum_line->setMinimumSize(QSize(350, 30));
        credit_sum_line->setMaximumSize(QSize(350, 50));
        credit_sum_line->setFont(font2);
        credit_sum_line->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 21pt;\n"
"}"));
        credit_sum_line->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(credit_sum_line, 0, 1, 1, 1);

        x_min_8 = new QLabel(Credit);
        x_min_8->setObjectName(QString::fromUtf8("x_min_8"));
        x_min_8->setMinimumSize(QSize(0, 30));
        x_min_8->setMaximumSize(QSize(16777215, 30));
        x_min_8->setFont(font1);
        x_min_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_8, 4, 0, 1, 1);


        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit calc", nullptr));
        result_pay_proc->setText(QString());
        x_min_10->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        x_min_7->setText(QCoreApplication::translate("Credit", "%", nullptr));
        x_min_6->setText(QCoreApplication::translate("Credit", "\320\274\320\265\321\201", nullptr));
        x_min_4->setText(QCoreApplication::translate("Credit", "<html><head/><body><p>\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271</p></body></html>", nullptr));
        result_pay->setText(QString());
        x_min_11->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        button_OK->setText(QCoreApplication::translate("Credit", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        x_min_3->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        x_min_12->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        x_min_5->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        x_min_9->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        x_min->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        button_annu->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        button_diff->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        result_proc->setText(QString());
        x_min_2->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        x_min_13->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        x_min_8->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
