/********************************************************************************
** Form generated from reading UI file 'basic_calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_CALCULATOR_H
#define UI_BASIC_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_basic_calculator
{
public:
    QLabel *label;
    QPushButton *seven_button;
    QPushButton *eight_button;
    QPushButton *nine_button;
    QPushButton *subtract_button;
    QPushButton *six_button;
    QPushButton *add_button;
    QPushButton *four_button;
    QPushButton *five_button;
    QPushButton *three_button;
    QPushButton *multiply_button;
    QPushButton *one_button;
    QPushButton *two_button;
    QPushButton *equals_button;
    QPushButton *divide_button;
    QPushButton *clear_button;
    QPushButton *zero_button;

    void setupUi(QDialog *basic_calculator)
    {
        if (basic_calculator->objectName().isEmpty())
            basic_calculator->setObjectName("basic_calculator");
        basic_calculator->resize(320, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(basic_calculator->sizePolicy().hasHeightForWidth());
        basic_calculator->setSizePolicy(sizePolicy);
        basic_calculator->setMaximumSize(QSize(320, 400));
        basic_calculator->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label = new QLabel(basic_calculator);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 320, 80));
        label->setMaximumSize(QSize(320, 80));
        label->setStyleSheet(QString::fromUtf8("\n"
"/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;\n"
"\n"
"/* End Label Stylesheet */"));
        seven_button = new QPushButton(basic_calculator);
        seven_button->setObjectName("seven_button");
        seven_button->setGeometry(QRect(0, 80, 80, 80));
        seven_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        eight_button = new QPushButton(basic_calculator);
        eight_button->setObjectName("eight_button");
        eight_button->setGeometry(QRect(80, 80, 80, 80));
        eight_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        nine_button = new QPushButton(basic_calculator);
        nine_button->setObjectName("nine_button");
        nine_button->setGeometry(QRect(160, 80, 80, 80));
        nine_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        subtract_button = new QPushButton(basic_calculator);
        subtract_button->setObjectName("subtract_button");
        subtract_button->setGeometry(QRect(240, 80, 80, 80));
        subtract_button->setStyleSheet(QString::fromUtf8("\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        six_button = new QPushButton(basic_calculator);
        six_button->setObjectName("six_button");
        six_button->setGeometry(QRect(160, 160, 80, 80));
        six_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        add_button = new QPushButton(basic_calculator);
        add_button->setObjectName("add_button");
        add_button->setGeometry(QRect(240, 160, 80, 80));
        add_button->setStyleSheet(QString::fromUtf8("\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        four_button = new QPushButton(basic_calculator);
        four_button->setObjectName("four_button");
        four_button->setGeometry(QRect(0, 160, 80, 80));
        four_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        five_button = new QPushButton(basic_calculator);
        five_button->setObjectName("five_button");
        five_button->setGeometry(QRect(80, 160, 80, 80));
        five_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        three_button = new QPushButton(basic_calculator);
        three_button->setObjectName("three_button");
        three_button->setGeometry(QRect(160, 240, 80, 80));
        three_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        multiply_button = new QPushButton(basic_calculator);
        multiply_button->setObjectName("multiply_button");
        multiply_button->setGeometry(QRect(240, 240, 80, 80));
        multiply_button->setStyleSheet(QString::fromUtf8("\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        one_button = new QPushButton(basic_calculator);
        one_button->setObjectName("one_button");
        one_button->setGeometry(QRect(0, 240, 80, 80));
        one_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        two_button = new QPushButton(basic_calculator);
        two_button->setObjectName("two_button");
        two_button->setGeometry(QRect(80, 240, 80, 80));
        two_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));
        equals_button = new QPushButton(basic_calculator);
        equals_button->setObjectName("equals_button");
        equals_button->setGeometry(QRect(160, 320, 80, 80));
        equals_button->setStyleSheet(QString::fromUtf8("\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */"));
        divide_button = new QPushButton(basic_calculator);
        divide_button->setObjectName("divide_button");
        divide_button->setGeometry(QRect(240, 320, 80, 80));
        divide_button->setStyleSheet(QString::fromUtf8("\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        clear_button = new QPushButton(basic_calculator);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(0, 320, 81, 80));
        clear_button->setStyleSheet(QString::fromUtf8("\n"
"/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */"));
        zero_button = new QPushButton(basic_calculator);
        zero_button->setObjectName("zero_button");
        zero_button->setGeometry(QRect(80, 320, 81, 80));
        zero_button->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */\n"
""));

        retranslateUi(basic_calculator);

        QMetaObject::connectSlotsByName(basic_calculator);
    } // setupUi

    void retranslateUi(QDialog *basic_calculator)
    {
        basic_calculator->setWindowTitle(QCoreApplication::translate("basic_calculator", "basic_calculator", nullptr));
        label->setText(QCoreApplication::translate("basic_calculator", "0", nullptr));
        seven_button->setText(QCoreApplication::translate("basic_calculator", "7", nullptr));
        eight_button->setText(QCoreApplication::translate("basic_calculator", "8", nullptr));
        nine_button->setText(QCoreApplication::translate("basic_calculator", "9", nullptr));
        subtract_button->setText(QCoreApplication::translate("basic_calculator", "-", nullptr));
        six_button->setText(QCoreApplication::translate("basic_calculator", "6", nullptr));
        add_button->setText(QCoreApplication::translate("basic_calculator", "+", nullptr));
        four_button->setText(QCoreApplication::translate("basic_calculator", "4", nullptr));
        five_button->setText(QCoreApplication::translate("basic_calculator", "5", nullptr));
        three_button->setText(QCoreApplication::translate("basic_calculator", "3", nullptr));
        multiply_button->setText(QCoreApplication::translate("basic_calculator", "*", nullptr));
        one_button->setText(QCoreApplication::translate("basic_calculator", "1", nullptr));
        two_button->setText(QCoreApplication::translate("basic_calculator", "2", nullptr));
        equals_button->setText(QCoreApplication::translate("basic_calculator", "=", nullptr));
        divide_button->setText(QCoreApplication::translate("basic_calculator", "/", nullptr));
        clear_button->setText(QCoreApplication::translate("basic_calculator", "C", nullptr));
        zero_button->setText(QCoreApplication::translate("basic_calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class basic_calculator: public Ui_basic_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_CALCULATOR_H
