/********************************************************************************
** Form generated from reading UI file 'smartcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTCALC_H
#define UI_SMARTCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartCalc
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *SmartCalc)
    {
        if (SmartCalc->objectName().isEmpty())
            SmartCalc->setObjectName(QString::fromUtf8("SmartCalc"));
        SmartCalc->resize(16, 16);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartCalc->sizePolicy().hasHeightForWidth());
        SmartCalc->setSizePolicy(sizePolicy);
        SmartCalc->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(SmartCalc);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 125, 26));
        SmartCalc->setCentralWidget(centralWidget);

        retranslateUi(SmartCalc);

        QMetaObject::connectSlotsByName(SmartCalc);
    } // setupUi

    void retranslateUi(QMainWindow *SmartCalc)
    {
        (void)SmartCalc;
    } // retranslateUi

};

namespace Ui {
    class SmartCalc: public Ui_SmartCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTCALC_H
