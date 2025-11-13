/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultWindow
{
public:
    QLabel *label_pleaseCloseMe;
    QPushButton *button_op;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ResultWindow)
    {
        if (ResultWindow->objectName().isEmpty())
            ResultWindow->setObjectName("ResultWindow");
        ResultWindow->resize(770, 312);
        label_pleaseCloseMe = new QLabel(ResultWindow);
        label_pleaseCloseMe->setObjectName("label_pleaseCloseMe");
        label_pleaseCloseMe->setGeometry(QRect(320, 260, 281, 31));
        QFont font;
        font.setBold(true);
        label_pleaseCloseMe->setFont(font);
        button_op = new QPushButton(ResultWindow);
        button_op->setObjectName("button_op");
        button_op->setGeometry(QRect(620, 260, 100, 32));
        tableWidget = new QTableWidget(ResultWindow);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 40, 681, 201));
        tableWidget->setRowCount(6);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(300);

        retranslateUi(ResultWindow);
        QObject::connect(button_op, &QPushButton::clicked, ResultWindow, qOverload<>(&QDialog::close));

        button_op->setDefault(true);


        QMetaObject::connectSlotsByName(ResultWindow);
    } // setupUi

    void retranslateUi(QDialog *ResultWindow)
    {
        ResultWindow->setWindowTitle(QCoreApplication::translate("ResultWindow", "Ergebnisse", nullptr));
        label_pleaseCloseMe->setText(QCoreApplication::translate("ResultWindow", "Dieses Fenster schlie\303\237en, um fortzufahren.", nullptr));
        button_op->setText(QCoreApplication::translate("ResultWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultWindow: public Ui_ResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
