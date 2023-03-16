/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QGridLayout *gridLayout;
    QLabel *x_min_3;
    QLabel *x_min_18;
    QLabel *x_min_19;
    QLineEdit *dep_perLine;
    QLabel *x_min_17;
    QLabel *x_min_13;
    QLabel *x_min_15;
    QLabel *x_min_6;
    QLineEdit *dep_taxLine;
    QLabel *x_min_2;
    QLabel *result_summa_vklad;
    QLabel *x_min_16;
    QLabel *x_min_12;
    QDateEdit *dateEdit;
    QLineEdit *dep_amountLine;
    QLabel *x_min_14;
    QLabel *x_min_8;
    QLabel *result_proc;
    QLineEdit *dep_withdLine;
    QLabel *x_min_7;
    QLineEdit *dep_replenLine;
    QLabel *x_min;
    QComboBox *Box_vyplaty;
    QLabel *x_min_9;
    QLabel *x_min_20;
    QLabel *x_min_22;
    QLabel *x_min_5;
    QLabel *x_min_11;
    QComboBox *Box_snyat;
    QLabel *result_nalog;
    QLabel *x_min_10;
    QLineEdit *dep_timeLine;
    QComboBox *Box_popoln;
    QLabel *x_min_23;
    QCheckBox *capitalRadio;
    QLabel *x_min_21;
    QPushButton *button_OK;

    void setupUi(QWidget *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(820, 769);
        Deposit->setMinimumSize(QSize(820, 769));
        Deposit->setMaximumSize(QSize(820, 769));
        Deposit->setStyleSheet(QString::fromUtf8("QWidget {background-color: white; color: black;}"));
        gridLayout = new QGridLayout(Deposit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        x_min_3 = new QLabel(Deposit);
        x_min_3->setObjectName(QString::fromUtf8("x_min_3"));
        x_min_3->setMinimumSize(QSize(0, 30));
        x_min_3->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(12);
        x_min_3->setFont(font);
        x_min_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_3, 3, 0, 1, 1);

        x_min_18 = new QLabel(Deposit);
        x_min_18->setObjectName(QString::fromUtf8("x_min_18"));
        x_min_18->setMinimumSize(QSize(0, 30));
        x_min_18->setMaximumSize(QSize(16777215, 30));
        x_min_18->setFont(font);
        x_min_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_18, 7, 0, 1, 1);

        x_min_19 = new QLabel(Deposit);
        x_min_19->setObjectName(QString::fromUtf8("x_min_19"));
        x_min_19->setMinimumSize(QSize(0, 30));
        x_min_19->setMaximumSize(QSize(16777215, 30));
        x_min_19->setFont(font);
        x_min_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_19, 9, 0, 1, 1);

        dep_perLine = new QLineEdit(Deposit);
        dep_perLine->setObjectName(QString::fromUtf8("dep_perLine"));
        dep_perLine->setMinimumSize(QSize(350, 30));
        dep_perLine->setMaximumSize(QSize(350, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(14);
        dep_perLine->setFont(font1);
        dep_perLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 14pt;\n"
"}"));
        dep_perLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dep_perLine, 3, 2, 1, 1);

        x_min_17 = new QLabel(Deposit);
        x_min_17->setObjectName(QString::fromUtf8("x_min_17"));
        x_min_17->setMinimumSize(QSize(0, 30));
        x_min_17->setMaximumSize(QSize(16777215, 30));
        x_min_17->setFont(font);
        x_min_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_17, 5, 0, 1, 1);

        x_min_13 = new QLabel(Deposit);
        x_min_13->setObjectName(QString::fromUtf8("x_min_13"));
        x_min_13->setMinimumSize(QSize(0, 30));
        x_min_13->setMaximumSize(QSize(16777215, 30));
        x_min_13->setFont(font1);
        x_min_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_13, 10, 3, 1, 1);

        x_min_15 = new QLabel(Deposit);
        x_min_15->setObjectName(QString::fromUtf8("x_min_15"));
        x_min_15->setMinimumSize(QSize(0, 30));
        x_min_15->setMaximumSize(QSize(16777215, 30));
        x_min_15->setFont(font1);
        x_min_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_15, 11, 3, 1, 1);

        x_min_6 = new QLabel(Deposit);
        x_min_6->setObjectName(QString::fromUtf8("x_min_6"));
        x_min_6->setMinimumSize(QSize(0, 30));
        x_min_6->setMaximumSize(QSize(16777215, 30));
        x_min_6->setFont(font1);
        x_min_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_6, 1, 3, 1, 1);

        dep_taxLine = new QLineEdit(Deposit);
        dep_taxLine->setObjectName(QString::fromUtf8("dep_taxLine"));
        dep_taxLine->setMinimumSize(QSize(350, 30));
        dep_taxLine->setMaximumSize(QSize(350, 40));
        dep_taxLine->setFont(font1);
        dep_taxLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 14pt;\n"
"}"));
        dep_taxLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dep_taxLine, 4, 2, 1, 1);

        x_min_2 = new QLabel(Deposit);
        x_min_2->setObjectName(QString::fromUtf8("x_min_2"));
        x_min_2->setMinimumSize(QSize(0, 30));
        x_min_2->setMaximumSize(QSize(16777215, 30));
        x_min_2->setFont(font);
        x_min_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_2, 1, 0, 1, 1);

        result_summa_vklad = new QLabel(Deposit);
        result_summa_vklad->setObjectName(QString::fromUtf8("result_summa_vklad"));
        result_summa_vklad->setMinimumSize(QSize(350, 30));
        result_summa_vklad->setMaximumSize(QSize(350, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Verdana")});
        font2.setPointSize(20);
        font2.setBold(false);
        result_summa_vklad->setFont(font2);
        result_summa_vklad->setCursor(QCursor(Qt::IBeamCursor));
        result_summa_vklad->setMouseTracking(true);
        result_summa_vklad->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"color: black;\n"
"font-size: 20pt;\n"
"}"));
        result_summa_vklad->setAlignment(Qt::AlignCenter);
        result_summa_vklad->setWordWrap(false);
        result_summa_vklad->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(result_summa_vklad, 14, 2, 1, 1);

        x_min_16 = new QLabel(Deposit);
        x_min_16->setObjectName(QString::fromUtf8("x_min_16"));
        x_min_16->setMinimumSize(QSize(0, 30));
        x_min_16->setMaximumSize(QSize(16777215, 30));
        x_min_16->setFont(font);
        x_min_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_16, 2, 0, 1, 1);

        x_min_12 = new QLabel(Deposit);
        x_min_12->setObjectName(QString::fromUtf8("x_min_12"));
        x_min_12->setMinimumSize(QSize(0, 30));
        x_min_12->setMaximumSize(QSize(16777215, 30));
        x_min_12->setFont(font1);
        x_min_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_12, 8, 3, 1, 1);

        dateEdit = new QDateEdit(Deposit);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font1);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setMaximumDateTime(QDateTime(QDate(2029, 12, 31), QTime(15, 0, 0)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2021, 12, 31), QTime(15, 0, 0)));

        gridLayout->addWidget(dateEdit, 2, 2, 1, 1);

        dep_amountLine = new QLineEdit(Deposit);
        dep_amountLine->setObjectName(QString::fromUtf8("dep_amountLine"));
        dep_amountLine->setMinimumSize(QSize(350, 30));
        dep_amountLine->setMaximumSize(QSize(350, 30));
        dep_amountLine->setFont(font1);
        dep_amountLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 14pt;\n"
"}"));
        dep_amountLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dep_amountLine, 0, 2, 1, 1);

        x_min_14 = new QLabel(Deposit);
        x_min_14->setObjectName(QString::fromUtf8("x_min_14"));
        x_min_14->setMinimumSize(QSize(0, 30));
        x_min_14->setMaximumSize(QSize(16777215, 30));
        x_min_14->setFont(font);
        x_min_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_14, 4, 0, 1, 1);

        x_min_8 = new QLabel(Deposit);
        x_min_8->setObjectName(QString::fromUtf8("x_min_8"));
        x_min_8->setMinimumSize(QSize(0, 30));
        x_min_8->setMaximumSize(QSize(16777215, 30));
        x_min_8->setFont(font);
        x_min_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_8, 11, 0, 1, 1);

        result_proc = new QLabel(Deposit);
        result_proc->setObjectName(QString::fromUtf8("result_proc"));
        result_proc->setMinimumSize(QSize(350, 30));
        result_proc->setMaximumSize(QSize(350, 50));
        result_proc->setFont(font2);
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
        result_proc->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(result_proc, 11, 2, 1, 1);

        dep_withdLine = new QLineEdit(Deposit);
        dep_withdLine->setObjectName(QString::fromUtf8("dep_withdLine"));
        dep_withdLine->setEnabled(false);
        dep_withdLine->setMinimumSize(QSize(350, 30));
        dep_withdLine->setMaximumSize(QSize(350, 40));
        dep_withdLine->setFont(font1);
        dep_withdLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(200, 211, 201);\n"
"border: 2px solid black;\n"
"}"));
        dep_withdLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dep_withdLine, 10, 2, 1, 1);

        x_min_7 = new QLabel(Deposit);
        x_min_7->setObjectName(QString::fromUtf8("x_min_7"));
        x_min_7->setMinimumSize(QSize(0, 30));
        x_min_7->setMaximumSize(QSize(16777215, 30));
        x_min_7->setFont(font1);
        x_min_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_7, 3, 3, 1, 1);

        dep_replenLine = new QLineEdit(Deposit);
        dep_replenLine->setObjectName(QString::fromUtf8("dep_replenLine"));
        dep_replenLine->setEnabled(false);
        dep_replenLine->setMinimumSize(QSize(350, 30));
        dep_replenLine->setMaximumSize(QSize(350, 40));
        dep_replenLine->setFont(font1);
        dep_replenLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(200, 211, 201);\n"
"border: 2px solid black;\n"
"}"));
        dep_replenLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dep_replenLine, 8, 2, 1, 1);

        x_min = new QLabel(Deposit);
        x_min->setObjectName(QString::fromUtf8("x_min"));
        x_min->setMinimumSize(QSize(0, 30));
        x_min->setMaximumSize(QSize(16777215, 30));
        x_min->setFont(font);
        x_min->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min, 0, 0, 1, 1);

        Box_vyplaty = new QComboBox(Deposit);
        Box_vyplaty->addItem(QString());
        Box_vyplaty->addItem(QString());
        Box_vyplaty->addItem(QString());
        Box_vyplaty->addItem(QString());
        Box_vyplaty->addItem(QString());
        Box_vyplaty->addItem(QString());
        Box_vyplaty->addItem(QString());
        Box_vyplaty->setObjectName(QString::fromUtf8("Box_vyplaty"));
        Box_vyplaty->setFont(font1);
        Box_vyplaty->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout->addWidget(Box_vyplaty, 5, 2, 1, 1);

        x_min_9 = new QLabel(Deposit);
        x_min_9->setObjectName(QString::fromUtf8("x_min_9"));
        x_min_9->setMinimumSize(QSize(0, 30));
        x_min_9->setMaximumSize(QSize(16777215, 30));
        x_min_9->setFont(font);
        x_min_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_9, 12, 0, 1, 1);

        x_min_20 = new QLabel(Deposit);
        x_min_20->setObjectName(QString::fromUtf8("x_min_20"));
        x_min_20->setMinimumSize(QSize(0, 30));
        x_min_20->setMaximumSize(QSize(16777215, 30));
        x_min_20->setFont(font1);
        x_min_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_20, 12, 3, 1, 1);

        x_min_22 = new QLabel(Deposit);
        x_min_22->setObjectName(QString::fromUtf8("x_min_22"));
        x_min_22->setMinimumSize(QSize(0, 30));
        x_min_22->setMaximumSize(QSize(16777215, 30));
        x_min_22->setFont(font);
        x_min_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_22, 8, 0, 1, 1);

        x_min_5 = new QLabel(Deposit);
        x_min_5->setObjectName(QString::fromUtf8("x_min_5"));
        x_min_5->setMinimumSize(QSize(0, 30));
        x_min_5->setMaximumSize(QSize(16777215, 30));
        x_min_5->setFont(font1);
        x_min_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_5, 0, 3, 1, 1);

        x_min_11 = new QLabel(Deposit);
        x_min_11->setObjectName(QString::fromUtf8("x_min_11"));
        x_min_11->setMinimumSize(QSize(0, 30));
        x_min_11->setMaximumSize(QSize(16777215, 30));
        x_min_11->setFont(font1);
        x_min_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_11, 4, 3, 1, 1);

        Box_snyat = new QComboBox(Deposit);
        Box_snyat->addItem(QString());
        Box_snyat->addItem(QString());
        Box_snyat->addItem(QString());
        Box_snyat->addItem(QString());
        Box_snyat->addItem(QString());
        Box_snyat->addItem(QString());
        Box_snyat->setObjectName(QString::fromUtf8("Box_snyat"));
        Box_snyat->setFont(font1);

        gridLayout->addWidget(Box_snyat, 9, 2, 1, 1);

        result_nalog = new QLabel(Deposit);
        result_nalog->setObjectName(QString::fromUtf8("result_nalog"));
        result_nalog->setMinimumSize(QSize(350, 30));
        result_nalog->setMaximumSize(QSize(350, 50));
        result_nalog->setFont(font2);
        result_nalog->setCursor(QCursor(Qt::IBeamCursor));
        result_nalog->setMouseTracking(true);
        result_nalog->setTabletTracking(false);
        result_nalog->setFocusPolicy(Qt::NoFocus);
        result_nalog->setAcceptDrops(false);
        result_nalog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"color: black;\n"
"font-size: 20pt;\n"
"}"));
        result_nalog->setAlignment(Qt::AlignCenter);
        result_nalog->setWordWrap(false);
        result_nalog->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(result_nalog, 12, 2, 1, 1);

        x_min_10 = new QLabel(Deposit);
        x_min_10->setObjectName(QString::fromUtf8("x_min_10"));
        x_min_10->setMinimumSize(QSize(0, 30));
        x_min_10->setMaximumSize(QSize(16777215, 30));
        x_min_10->setFont(font);
        x_min_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_10, 14, 0, 1, 1);

        dep_timeLine = new QLineEdit(Deposit);
        dep_timeLine->setObjectName(QString::fromUtf8("dep_timeLine"));
        dep_timeLine->setMinimumSize(QSize(350, 30));
        dep_timeLine->setMaximumSize(QSize(350, 40));
        dep_timeLine->setFont(font1);
        dep_timeLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: white;\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"font-size: 14pt;\n"
"}"));
        dep_timeLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dep_timeLine, 1, 2, 1, 1);

        Box_popoln = new QComboBox(Deposit);
        Box_popoln->addItem(QString());
        Box_popoln->addItem(QString());
        Box_popoln->addItem(QString());
        Box_popoln->addItem(QString());
        Box_popoln->addItem(QString());
        Box_popoln->addItem(QString());
        Box_popoln->setObjectName(QString::fromUtf8("Box_popoln"));
        Box_popoln->setFont(font1);

        gridLayout->addWidget(Box_popoln, 7, 2, 1, 1);

        x_min_23 = new QLabel(Deposit);
        x_min_23->setObjectName(QString::fromUtf8("x_min_23"));
        x_min_23->setMinimumSize(QSize(0, 30));
        x_min_23->setMaximumSize(QSize(16777215, 30));
        x_min_23->setFont(font);
        x_min_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_23, 10, 0, 1, 1);

        capitalRadio = new QCheckBox(Deposit);
        capitalRadio->setObjectName(QString::fromUtf8("capitalRadio"));
        capitalRadio->setFont(font);

        gridLayout->addWidget(capitalRadio, 6, 0, 1, 1);

        x_min_21 = new QLabel(Deposit);
        x_min_21->setObjectName(QString::fromUtf8("x_min_21"));
        x_min_21->setMinimumSize(QSize(0, 30));
        x_min_21->setMaximumSize(QSize(16777215, 30));
        x_min_21->setFont(font1);
        x_min_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(x_min_21, 14, 3, 1, 1);

        button_OK = new QPushButton(Deposit);
        button_OK->setObjectName(QString::fromUtf8("button_OK"));
        button_OK->setMinimumSize(QSize(250, 30));
        button_OK->setMaximumSize(QSize(200, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(12);
        font3.setBold(false);
        button_OK->setFont(font3);
        button_OK->setMouseTracking(true);
        button_OK->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"        background-color: white;\n"
"        border: 2px solid black;\n"
"        border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgb(176, 254, 255)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: rgb(87, 252, 255)\n"
"}"));

        gridLayout->addWidget(button_OK, 15, 0, 1, 1);


        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QWidget *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "Deposit calc", nullptr));
        x_min_3->setText(QCoreApplication::translate("Deposit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        x_min_18->setText(QCoreApplication::translate("Deposit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        x_min_19->setText(QCoreApplication::translate("Deposit", "\320\247\320\260\321\201\321\202\320\270\321\207\320\275\321\213\320\265 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        x_min_17->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        x_min_13->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261", nullptr));
        x_min_15->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261", nullptr));
        x_min_6->setText(QCoreApplication::translate("Deposit", "\320\274\320\265\321\201", nullptr));
        x_min_2->setText(QCoreApplication::translate("Deposit", "\320\241\321\200\320\276\320\272 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        result_summa_vklad->setText(QString());
        x_min_16->setText(QCoreApplication::translate("Deposit", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \321\201\321\200\320\276\320\272\320\260", nullptr));
        x_min_12->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261", nullptr));
        x_min_14->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        x_min_8->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        result_proc->setText(QString());
        x_min_7->setText(QCoreApplication::translate("Deposit", "%", nullptr));
        x_min->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        Box_vyplaty->setItemText(0, QCoreApplication::translate("Deposit", "\320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        Box_vyplaty->setItemText(1, QCoreApplication::translate("Deposit", "\320\272\320\260\320\266\320\264\321\203\321\216 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        Box_vyplaty->setItemText(2, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        Box_vyplaty->setItemText(3, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        Box_vyplaty->setItemText(4, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        Box_vyplaty->setItemText(5, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        Box_vyplaty->setItemText(6, QCoreApplication::translate("Deposit", "\320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        x_min_9->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        x_min_20->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261", nullptr));
        x_min_22->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\320\276\320\263\320\276 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        x_min_5->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261", nullptr));
        x_min_11->setText(QCoreApplication::translate("Deposit", "%", nullptr));
        Box_snyat->setItemText(0, QCoreApplication::translate("Deposit", "\320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\321\216\321\202", nullptr));
        Box_snyat->setItemText(1, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        Box_snyat->setItemText(2, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        Box_snyat->setItemText(3, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        Box_snyat->setItemText(4, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        Box_snyat->setItemText(5, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        result_nalog->setText(QString());
        x_min_10->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        Box_popoln->setItemText(0, QCoreApplication::translate("Deposit", "\320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\321\216\321\202", nullptr));
        Box_popoln->setItemText(1, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        Box_popoln->setItemText(2, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        Box_popoln->setItemText(3, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        Box_popoln->setItemText(4, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        Box_popoln->setItemText(5, QCoreApplication::translate("Deposit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        x_min_23->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\320\276\320\263\320\276 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        capitalRadio->setText(QCoreApplication::translate("Deposit", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        x_min_21->setText(QCoreApplication::translate("Deposit", "\321\200\321\203\320\261", nullptr));
        button_OK->setText(QCoreApplication::translate("Deposit", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
