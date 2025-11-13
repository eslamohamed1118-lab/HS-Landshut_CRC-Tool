/********************************************************************************
** Form generated from reading UI file 'crc_main.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRC_MAIN_H
#define UI_CRC_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crc_main
{
public:
    QWidget *centralwidget;
    QPushButton *btnEthCalc_2;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *canTab;
    QLineEdit *lineEditCAN_Identifier;
    QLabel *labelCAN_Identifier;
    QLabel *labelCAN_Identifier_EingabeNOK;
    QLabel *labelCAN_DLC;
    QLineEdit *lineEditCAN_DLC;
    QLabel *labelCAN_DLC_EingabeNOK;
    QLabel *labelCAN_Payload;
    QLineEdit *lineEditCAN_Payload;
    QLabel *labelCAN_Payload_EingabeNOK;
    QWidget *canfdTab;
    QWidget *canxlTab;
    QWidget *linTab;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioLinClassic;
    QRadioButton *radioLinEnh;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioLin1_3;
    QRadioButton *radioLin2_X;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *LabelLinIdent;
    QLineEdit *lineEditLinID;
    QLabel *LabelLinData;
    QLineEdit *lineEditLinData;
    QLabel *LS_LinID;
    QLabel *LS_LinData;
    QWidget *frTab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelFrSteuerbits;
    QCheckBox *checkBoxFrPayloadPreambleIndi;
    QCheckBox *checkBoxFrNullFrameIndi;
    QCheckBox *checkBoxFrSyncFrameIndi;
    QCheckBox *checkBoxFrStartupFrameIndi;
    QSpacerItem *verticalSpacer_4;
    QWidget *verticalLayoutWidget_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEditFrFrameID;
    QLineEdit *lineEditFrCycleCount;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelFrIDEingabeNOK;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *labelFrCycleCount;
    QLineEdit *lineEditFrPayloadlaenge;
    QLabel *labelFrID;
    QLabel *labelFrPayloadlaengeEingabeNOK;
    QLabel *labelFrCycleCountEingabeNOK;
    QLabel *labelFrPayloadlaenge;
    QSpacerItem *verticalSpacer_5;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelFrDaten;
    QPlainTextEdit *plainTextEditFR;
    QLabel *labelFrDataEingabeNOK;
    QWidget *ethTab;
    QLineEdit *lineEthOutBin;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelEthPayload;
    QPushButton *btnEthCalc;
    QLineEdit *plainEthPayload;
    QPushButton *btnEthExample;
    QLabel *labelEthOutBin;
    QLineEdit *labelEthOutHex;
    QLineEdit *labelEthOutBin_2;
    QLineEdit *lineEthOutHex;
    QWidget *infoTab;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ButtonFillOnes;
    QPushButton *ButtonFillZeros;
    QPushButton *ButtonFillRandom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAutoFillCnt;
    QSpinBox *SpinBoxAutofillBytes;
    QLabel *LabelGenerateData;
    QCheckBox *checkBoxCAN_Extended;
    QCheckBox *checkBoxCAN_RTR;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *crc_main)
    {
        if (crc_main->objectName().isEmpty())
            crc_main->setObjectName("crc_main");
        crc_main->resize(939, 701);
        centralwidget = new QWidget(crc_main);
        centralwidget->setObjectName("centralwidget");
        btnEthCalc_2 = new QPushButton(centralwidget);
        btnEthCalc_2->setObjectName("btnEthCalc_2");
        btnEthCalc_2->setGeometry(QRect(200, 300, 251, 61));
        QFont font;
        font.setBold(true);
        btnEthCalc_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 211, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 40, 791, 261));
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tabWidget->setTabBarAutoHide(false);
        canTab = new QWidget();
        canTab->setObjectName("canTab");
        lineEditCAN_Identifier = new QLineEdit(canTab);
        lineEditCAN_Identifier->setObjectName("lineEditCAN_Identifier");
        lineEditCAN_Identifier->setGeometry(QRect(220, 30, 187, 24));
        labelCAN_Identifier = new QLabel(canTab);
        labelCAN_Identifier->setObjectName("labelCAN_Identifier");
        labelCAN_Identifier->setGeometry(QRect(220, 10, 187, 20));
        labelCAN_Identifier->setFont(font);
        labelCAN_Identifier_EingabeNOK = new QLabel(canTab);
        labelCAN_Identifier_EingabeNOK->setObjectName("labelCAN_Identifier_EingabeNOK");
        labelCAN_Identifier_EingabeNOK->setGeometry(QRect(420, 30, 186, 24));
        labelCAN_DLC = new QLabel(canTab);
        labelCAN_DLC->setObjectName("labelCAN_DLC");
        labelCAN_DLC->setGeometry(QRect(220, 70, 187, 20));
        labelCAN_DLC->setFont(font);
        lineEditCAN_DLC = new QLineEdit(canTab);
        lineEditCAN_DLC->setObjectName("lineEditCAN_DLC");
        lineEditCAN_DLC->setGeometry(QRect(220, 90, 187, 24));
        labelCAN_DLC_EingabeNOK = new QLabel(canTab);
        labelCAN_DLC_EingabeNOK->setObjectName("labelCAN_DLC_EingabeNOK");
        labelCAN_DLC_EingabeNOK->setGeometry(QRect(420, 90, 186, 24));
        labelCAN_Payload = new QLabel(canTab);
        labelCAN_Payload->setObjectName("labelCAN_Payload");
        labelCAN_Payload->setGeometry(QRect(220, 130, 187, 20));
        labelCAN_Payload->setFont(font);
        lineEditCAN_Payload = new QLineEdit(canTab);
        lineEditCAN_Payload->setObjectName("lineEditCAN_Payload");
        lineEditCAN_Payload->setGeometry(QRect(220, 150, 187, 48));
        labelCAN_Payload_EingabeNOK = new QLabel(canTab);
        labelCAN_Payload_EingabeNOK->setObjectName("labelCAN_Payload_EingabeNOK");
        labelCAN_Payload_EingabeNOK->setGeometry(QRect(420, 150, 186, 24));
        tabWidget->addTab(canTab, QString());
        canfdTab = new QWidget();
        canfdTab->setObjectName("canfdTab");
        tabWidget->addTab(canfdTab, QString());
        canxlTab = new QWidget();
        canxlTab->setObjectName("canxlTab");
        tabWidget->addTab(canxlTab, QString());
        linTab = new QWidget();
        linTab->setObjectName("linTab");
        horizontalLayoutWidget = new QWidget(linTab);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 70, 331, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioLinClassic = new QRadioButton(horizontalLayoutWidget);
        radioLinClassic->setObjectName("radioLinClassic");
        radioLinClassic->setChecked(true);

        horizontalLayout->addWidget(radioLinClassic);

        radioLinEnh = new QRadioButton(horizontalLayoutWidget);
        radioLinEnh->setObjectName("radioLinEnh");
        radioLinEnh->setCheckable(false);

        horizontalLayout->addWidget(radioLinEnh);

        horizontalLayoutWidget_2 = new QWidget(linTab);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(80, 20, 331, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioLin1_3 = new QRadioButton(horizontalLayoutWidget_2);
        radioLin1_3->setObjectName("radioLin1_3");
        radioLin1_3->setChecked(true);

        horizontalLayout_2->addWidget(radioLin1_3);

        radioLin2_X = new QRadioButton(horizontalLayoutWidget_2);
        radioLin2_X->setObjectName("radioLin2_X");

        horizontalLayout_2->addWidget(radioLin2_X);

        verticalLayoutWidget = new QWidget(linTab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 160, 361, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LabelLinIdent = new QLabel(verticalLayoutWidget);
        LabelLinIdent->setObjectName("LabelLinIdent");
        LabelLinIdent->setFont(font);

        verticalLayout->addWidget(LabelLinIdent);

        lineEditLinID = new QLineEdit(verticalLayoutWidget);
        lineEditLinID->setObjectName("lineEditLinID");
        lineEditLinID->setEnabled(false);
        lineEditLinID->setMinimumSize(QSize(0, 0));
        lineEditLinID->setMaximumSize(QSize(16777215, 16777215));
        lineEditLinID->setBaseSize(QSize(0, 0));
        lineEditLinID->setAutoFillBackground(false);

        verticalLayout->addWidget(lineEditLinID);

        LabelLinData = new QLabel(verticalLayoutWidget);
        LabelLinData->setObjectName("LabelLinData");
        LabelLinData->setFont(font);

        verticalLayout->addWidget(LabelLinData);

        lineEditLinData = new QLineEdit(verticalLayoutWidget);
        lineEditLinData->setObjectName("lineEditLinData");

        verticalLayout->addWidget(lineEditLinData);

        LS_LinID = new QLabel(linTab);
        LS_LinID->setObjectName("LS_LinID");
        LS_LinID->setEnabled(false);
        LS_LinID->setGeometry(QRect(450, 200, 231, 21));
        LS_LinData = new QLabel(linTab);
        LS_LinData->setObjectName("LS_LinData");
        LS_LinData->setGeometry(QRect(450, 330, 231, 21));
        tabWidget->addTab(linTab, QString());
        frTab = new QWidget();
        frTab->setObjectName("frTab");
        verticalLayoutWidget_3 = new QWidget(frTab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 211, 191));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelFrSteuerbits = new QLabel(verticalLayoutWidget_3);
        labelFrSteuerbits->setObjectName("labelFrSteuerbits");
        labelFrSteuerbits->setFont(font);

        verticalLayout_3->addWidget(labelFrSteuerbits);

        checkBoxFrPayloadPreambleIndi = new QCheckBox(verticalLayoutWidget_3);
        checkBoxFrPayloadPreambleIndi->setObjectName("checkBoxFrPayloadPreambleIndi");

        verticalLayout_3->addWidget(checkBoxFrPayloadPreambleIndi);

        checkBoxFrNullFrameIndi = new QCheckBox(verticalLayoutWidget_3);
        checkBoxFrNullFrameIndi->setObjectName("checkBoxFrNullFrameIndi");

        verticalLayout_3->addWidget(checkBoxFrNullFrameIndi);

        checkBoxFrSyncFrameIndi = new QCheckBox(verticalLayoutWidget_3);
        checkBoxFrSyncFrameIndi->setObjectName("checkBoxFrSyncFrameIndi");

        verticalLayout_3->addWidget(checkBoxFrSyncFrameIndi);

        checkBoxFrStartupFrameIndi = new QCheckBox(verticalLayoutWidget_3);
        checkBoxFrStartupFrameIndi->setObjectName("checkBoxFrStartupFrameIndi");

        verticalLayout_3->addWidget(checkBoxFrStartupFrameIndi);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayoutWidget_4 = new QWidget(frTab);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(230, 10, 381, 197));
        gridLayout = new QGridLayout(verticalLayoutWidget_4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditFrFrameID = new QLineEdit(verticalLayoutWidget_4);
        lineEditFrFrameID->setObjectName("lineEditFrFrameID");

        gridLayout->addWidget(lineEditFrFrameID, 1, 0, 1, 1);

        lineEditFrCycleCount = new QLineEdit(verticalLayoutWidget_4);
        lineEditFrCycleCount->setObjectName("lineEditFrCycleCount");

        gridLayout->addWidget(lineEditFrCycleCount, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        labelFrIDEingabeNOK = new QLabel(verticalLayoutWidget_4);
        labelFrIDEingabeNOK->setObjectName("labelFrIDEingabeNOK");

        gridLayout->addWidget(labelFrIDEingabeNOK, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        labelFrCycleCount = new QLabel(verticalLayoutWidget_4);
        labelFrCycleCount->setObjectName("labelFrCycleCount");
        labelFrCycleCount->setFont(font);

        gridLayout->addWidget(labelFrCycleCount, 6, 0, 1, 1);

        lineEditFrPayloadlaenge = new QLineEdit(verticalLayoutWidget_4);
        lineEditFrPayloadlaenge->setObjectName("lineEditFrPayloadlaenge");
        lineEditFrPayloadlaenge->setToolTipDuration(-1);

        gridLayout->addWidget(lineEditFrPayloadlaenge, 4, 0, 1, 1);

        labelFrID = new QLabel(verticalLayoutWidget_4);
        labelFrID->setObjectName("labelFrID");
        labelFrID->setFont(font);

        gridLayout->addWidget(labelFrID, 0, 0, 1, 1);

        labelFrPayloadlaengeEingabeNOK = new QLabel(verticalLayoutWidget_4);
        labelFrPayloadlaengeEingabeNOK->setObjectName("labelFrPayloadlaengeEingabeNOK");

        gridLayout->addWidget(labelFrPayloadlaengeEingabeNOK, 4, 1, 1, 1);

        labelFrCycleCountEingabeNOK = new QLabel(verticalLayoutWidget_4);
        labelFrCycleCountEingabeNOK->setObjectName("labelFrCycleCountEingabeNOK");

        gridLayout->addWidget(labelFrCycleCountEingabeNOK, 7, 1, 1, 1);

        labelFrPayloadlaenge = new QLabel(verticalLayoutWidget_4);
        labelFrPayloadlaenge->setObjectName("labelFrPayloadlaenge");
        labelFrPayloadlaenge->setFont(font);

        gridLayout->addWidget(labelFrPayloadlaenge, 3, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 0, 1, 1);

        verticalLayoutWidget_5 = new QWidget(frTab);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(10, 210, 501, 161));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelFrDaten = new QLabel(verticalLayoutWidget_5);
        labelFrDaten->setObjectName("labelFrDaten");
        labelFrDaten->setFont(font);

        verticalLayout_5->addWidget(labelFrDaten);

        plainTextEditFR = new QPlainTextEdit(verticalLayoutWidget_5);
        plainTextEditFR->setObjectName("plainTextEditFR");

        verticalLayout_5->addWidget(plainTextEditFR);

        labelFrDataEingabeNOK = new QLabel(frTab);
        labelFrDataEingabeNOK->setObjectName("labelFrDataEingabeNOK");
        labelFrDataEingabeNOK->setGeometry(QRect(520, 250, 171, 20));
        tabWidget->addTab(frTab, QString());
        ethTab = new QWidget();
        ethTab->setObjectName("ethTab");
        lineEthOutBin = new QLineEdit(ethTab);
        lineEthOutBin->setObjectName("lineEthOutBin");
        lineEthOutBin->setGeometry(QRect(250, 230, 113, 26));
        verticalLayout_4 = new QVBoxLayout(ethTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelEthPayload = new QLabel(ethTab);
        labelEthPayload->setObjectName("labelEthPayload");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier")});
        font2.setPointSize(10);
        labelEthPayload->setFont(font2);

        verticalLayout_4->addWidget(labelEthPayload);

        btnEthCalc = new QPushButton(ethTab);
        btnEthCalc->setObjectName("btnEthCalc");
        btnEthCalc->setFont(font);

        verticalLayout_4->addWidget(btnEthCalc);

        plainEthPayload = new QLineEdit(ethTab);
        plainEthPayload->setObjectName("plainEthPayload");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Courier New")});
        font3.setPointSize(10);
        plainEthPayload->setFont(font3);

        verticalLayout_4->addWidget(plainEthPayload);

        btnEthExample = new QPushButton(ethTab);
        btnEthExample->setObjectName("btnEthExample");

        verticalLayout_4->addWidget(btnEthExample);

        labelEthOutBin = new QLabel(ethTab);
        labelEthOutBin->setObjectName("labelEthOutBin");

        verticalLayout_4->addWidget(labelEthOutBin);

        labelEthOutHex = new QLineEdit(ethTab);
        labelEthOutHex->setObjectName("labelEthOutHex");

        verticalLayout_4->addWidget(labelEthOutHex);

        labelEthOutBin_2 = new QLineEdit(ethTab);
        labelEthOutBin_2->setObjectName("labelEthOutBin_2");
        labelEthOutBin_2->setReadOnly(true);

        verticalLayout_4->addWidget(labelEthOutBin_2);

        lineEthOutHex = new QLineEdit(ethTab);
        lineEthOutHex->setObjectName("lineEthOutHex");

        verticalLayout_4->addWidget(lineEthOutHex);

        tabWidget->addTab(ethTab, QString());
        infoTab = new QWidget();
        infoTab->setObjectName("infoTab");
        textBrowser = new QTextBrowser(infoTab);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 40, 631, 301));
        tabWidget->addTab(infoTab, QString());
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 410, 204, 165));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ButtonFillOnes = new QPushButton(verticalLayoutWidget_2);
        ButtonFillOnes->setObjectName("ButtonFillOnes");

        verticalLayout_2->addWidget(ButtonFillOnes);

        ButtonFillZeros = new QPushButton(verticalLayoutWidget_2);
        ButtonFillZeros->setObjectName("ButtonFillZeros");

        verticalLayout_2->addWidget(ButtonFillZeros);

        ButtonFillRandom = new QPushButton(verticalLayoutWidget_2);
        ButtonFillRandom->setObjectName("ButtonFillRandom");

        verticalLayout_2->addWidget(ButtonFillRandom);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelAutoFillCnt = new QLabel(verticalLayoutWidget_2);
        labelAutoFillCnt->setObjectName("labelAutoFillCnt");

        horizontalLayout_4->addWidget(labelAutoFillCnt);

        SpinBoxAutofillBytes = new QSpinBox(verticalLayoutWidget_2);
        SpinBoxAutofillBytes->setObjectName("SpinBoxAutofillBytes");
        SpinBoxAutofillBytes->setMinimumSize(QSize(96, 0));
        SpinBoxAutofillBytes->setMinimum(1);
        SpinBoxAutofillBytes->setMaximum(16);
        SpinBoxAutofillBytes->setValue(4);

        horizontalLayout_4->addWidget(SpinBoxAutofillBytes);


        verticalLayout_2->addLayout(horizontalLayout_4);

        LabelGenerateData = new QLabel(centralwidget);
        LabelGenerateData->setObjectName("LabelGenerateData");
        LabelGenerateData->setGeometry(QRect(10, 380, 202, 20));
        LabelGenerateData->setFont(font);
        checkBoxCAN_Extended = new QCheckBox(centralwidget);
        checkBoxCAN_Extended->setObjectName("checkBoxCAN_Extended");
        checkBoxCAN_Extended->setGeometry(QRect(390, 410, 161, 24));
        checkBoxCAN_RTR = new QCheckBox(centralwidget);
        checkBoxCAN_RTR->setObjectName("checkBoxCAN_RTR");
        checkBoxCAN_RTR->setGeometry(QRect(390, 470, 221, 24));
        crc_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(crc_main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 939, 26));
        crc_main->setMenuBar(menubar);
        statusbar = new QStatusBar(crc_main);
        statusbar->setObjectName("statusbar");
        crc_main->setStatusBar(statusbar);

        retranslateUi(crc_main);
        QObject::connect(btnEthCalc_2, SIGNAL(clicked()), crc_main, SLOT(clicked_buttonCalcCRC()));
        QObject::connect(radioLin2_X, SIGNAL(clicked()), crc_main, SLOT(lin_updateClickableRadioBtn()));
        QObject::connect(radioLin1_3, SIGNAL(clicked()), crc_main, SLOT(lin_updateClickableRadioBtn()));
        QObject::connect(lineEditLinData, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(radioLinEnh, SIGNAL(clicked()), crc_main, SLOT(lin_update_LineEditID()));
        QObject::connect(ButtonFillOnes, SIGNAL(clicked()), crc_main, SLOT(autofill_fields()));
        QObject::connect(ButtonFillZeros, SIGNAL(clicked()), crc_main, SLOT(autofill_fields()));
        QObject::connect(ButtonFillRandom, SIGNAL(clicked()), crc_main, SLOT(autofill_fields()));
        QObject::connect(radioLinClassic, SIGNAL(clicked()), crc_main, SLOT(lin_update_LineEditID()));
        QObject::connect(lineEditFrFrameID, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(lineEditFrPayloadlaenge, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(lineEditFrCycleCount, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(plainTextEditFR, SIGNAL(textChanged()), crc_main, SLOT(preliminary_parse()));
        QObject::connect(lineEditLinID, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(lineEditCAN_Identifier, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(lineEditCAN_DLC, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));
        QObject::connect(lineEditCAN_Payload, SIGNAL(textChanged(QString)), crc_main, SLOT(preliminary_parse()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(crc_main);
    } // setupUi

    void retranslateUi(QMainWindow *crc_main)
    {
        crc_main->setWindowTitle(QCoreApplication::translate("crc_main", "CRC-Rechner", nullptr));
#if QT_CONFIG(tooltip)
        btnEthCalc_2->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Falls die Eingabe der Daten in Ordnung ist, klicken Sie hier, um die CRC-Summe zu berechnen.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEthCalc_2->setText(QCoreApplication::translate("crc_main", "CRC Summe berechnen", nullptr));
        label->setText(QCoreApplication::translate("crc_main", "CRC Tool v1.0", nullptr));
#if QT_CONFIG(tooltip)
        lineEditCAN_Identifier->setToolTip(QCoreApplication::translate("crc_main", "11-Bit Identifier", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditCAN_Identifier->setText(QString());
        lineEditCAN_Identifier->setPlaceholderText(QCoreApplication::translate("crc_main", "11-Bit Identifier", nullptr));
        labelCAN_Identifier->setText(QCoreApplication::translate("crc_main", "Identifier (11-Bit)", nullptr));
        labelCAN_Identifier_EingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        labelCAN_DLC->setText(QCoreApplication::translate("crc_main", "DLC (4-Bit)", nullptr));
#if QT_CONFIG(tooltip)
        lineEditCAN_DLC->setToolTip(QCoreApplication::translate("crc_main", "4-Bit Data Length Code (DLC)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditCAN_DLC->setText(QString());
        lineEditCAN_DLC->setPlaceholderText(QCoreApplication::translate("crc_main", "4-Bit DLC", nullptr));
        labelCAN_DLC_EingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        labelCAN_Payload->setText(QCoreApplication::translate("crc_main", "Payload (0 bis 8 Byte)", nullptr));
#if QT_CONFIG(tooltip)
        lineEditCAN_Payload->setToolTip(QCoreApplication::translate("crc_main", "Payload: 0 bis 8 Bytes", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditCAN_Payload->setText(QString());
        lineEditCAN_Payload->setPlaceholderText(QCoreApplication::translate("crc_main", "Payload", nullptr));
        labelCAN_Payload_EingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(canTab), QCoreApplication::translate("crc_main", "CAN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(canfdTab), QCoreApplication::translate("crc_main", "CAN FD", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(canxlTab), QCoreApplication::translate("crc_main", "CAN XL", nullptr));
#if QT_CONFIG(tooltip)
        radioLinClassic->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Einfache Checksumme: Die Checksumme wird nur \303\274ber die Daten des Datenfeldes berechnet. </span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        radioLinClassic->setText(QCoreApplication::translate("crc_main", "Classic Checksum", nullptr));
#if QT_CONFIG(tooltip)
        radioLinEnh->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Verbesserte Checksumme: Diese Checksumme ist nur bei LIN 2.X m\303\266glich und berechnet die Checksumme sowohl \303\274ber das Datenfeld als auch \303\274ber das Identifier-Feld.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        radioLinEnh->setText(QCoreApplication::translate("crc_main", "Enhanced Checksum", nullptr));
#if QT_CONFIG(tooltip)
        radioLin1_3->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Erstes (veraltetes) LIN(Local Interconnect Network)-Protokoll. Bietet nur die Classic Checksum, nicht die Enhanced Checksum.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        radioLin1_3->setText(QCoreApplication::translate("crc_main", "Protocol 1.3", nullptr));
#if QT_CONFIG(tooltip)
        radioLin2_X->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Aktuelles LIN(Local Interconnect Network)-Protokoll. Bietet die Auswahl zwischen Classic Checksum und Enhanced Checksum.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        radioLin2_X->setText(QCoreApplication::translate("crc_main", "Protocol 2.X", nullptr));
        LabelLinIdent->setText(QCoreApplication::translate("crc_main", "Identifier (6 Bits):", nullptr));
#if QT_CONFIG(tooltip)
        lineEditLinID->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Geben Sie hier bin\303\244re (0x...) oder hexadezimale (0b...) Daten ein. 6 Bits sind erlaubt. Falls Sie hexadezimal eingeben, geben sie 8 Bit ein, aber bis maximal 0x3B.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEditLinID->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lineEditLinID->setPlaceholderText(QCoreApplication::translate("crc_main", "0x00 - 0x3B", nullptr));
        LabelLinData->setText(QCoreApplication::translate("crc_main", "Daten (1 - 8 Byte):", nullptr));
#if QT_CONFIG(tooltip)
        lineEditLinData->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Geben Sie hier bin\303\244re (0x...) oder hexadezimale (0b...) Daten ein. Die Anzahl der Bytes wird erkannt.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditLinData->setPlaceholderText(QCoreApplication::translate("crc_main", "0x6A9F", nullptr));
#if QT_CONFIG(tooltip)
        LS_LinID->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Zeigt an, ob die Eingabe in Ordnung ist und wie viele Bytes erkannt wurden.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LS_LinID->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
#if QT_CONFIG(tooltip)
        LS_LinData->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:18pt;\">Zeigt an, ob die Eingabe in Ordnung ist und wie viele Bytes erkannt wurden.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LS_LinData->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(linTab), QCoreApplication::translate("crc_main", "LIN", nullptr));
#if QT_CONFIG(tooltip)
        labelFrSteuerbits->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:10pt;\">Einen Haken setzen, wenn das entsprechende Bit gesetzt ist.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelFrSteuerbits->setText(QCoreApplication::translate("crc_main", "Steuerbits", nullptr));
        checkBoxFrPayloadPreambleIndi->setText(QCoreApplication::translate("crc_main", "Payload Preamble Indicator", nullptr));
        checkBoxFrNullFrameIndi->setText(QCoreApplication::translate("crc_main", "Null Frame Indicator", nullptr));
        checkBoxFrSyncFrameIndi->setText(QCoreApplication::translate("crc_main", "Sync Frame Indicator", nullptr));
        checkBoxFrStartupFrameIndi->setText(QCoreApplication::translate("crc_main", "Startup Frame Indicator", nullptr));
        lineEditFrFrameID->setPlaceholderText(QCoreApplication::translate("crc_main", "0x000 - 0x7FF", nullptr));
        lineEditFrCycleCount->setPlaceholderText(QCoreApplication::translate("crc_main", "0x00 - 0x3F", nullptr));
        labelFrIDEingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        labelFrCycleCount->setText(QCoreApplication::translate("crc_main", "Cycle Count (6-Bit)", nullptr));
#if QT_CONFIG(tooltip)
        lineEditFrPayloadlaenge->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEditFrPayloadlaenge->setPlaceholderText(QCoreApplication::translate("crc_main", "0x00 - 0x7F", nullptr));
        labelFrID->setText(QCoreApplication::translate("crc_main", "Frame ID (11-Bit)", nullptr));
        labelFrPayloadlaengeEingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        labelFrCycleCountEingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
#if QT_CONFIG(tooltip)
        labelFrPayloadlaenge->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:10pt;\">F\303\274r eine Payloadl\303\244nge von 10Bytes bitte den Wert 5 eingeben.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelFrPayloadlaenge->setText(QCoreApplication::translate("crc_main", "Payloadl\303\244nge (7-Bit)", nullptr));
#if QT_CONFIG(tooltip)
        labelFrDaten->setToolTip(QCoreApplication::translate("crc_main", "<html><head/><body><p><span style=\" font-size:10pt;\">Bei einer Payloadl\303\244nge von 5 bitte 10 Byte eingeben.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelFrDaten->setText(QCoreApplication::translate("crc_main", "Daten (0 - 254 Bytes, nur gerade Anzahl an Bytes)", nullptr));
        plainTextEditFR->setPlainText(QString());
        labelFrDataEingabeNOK->setText(QCoreApplication::translate("crc_main", "Eingabe NOK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(frTab), QCoreApplication::translate("crc_main", "FlexRay", nullptr));
        labelEthPayload->setText(QCoreApplication::translate("crc_main", "Payload (Hex oder Bin\303\244r)", nullptr));
        btnEthCalc->setText(QCoreApplication::translate("crc_main", "CRC Summe berechnen", nullptr));
        plainEthPayload->setPlaceholderText(QCoreApplication::translate("crc_main", "Beispiel: 0x01020304 oder 01 02 03 04", nullptr));
        btnEthExample->setText(QCoreApplication::translate("crc_main", "Beispiel einf\303\274gen", nullptr));
        labelEthOutBin->setText(QCoreApplication::translate("crc_main", "CRC-32 (Bin\303\244r)", nullptr));
        labelEthOutHex->setText(QCoreApplication::translate("crc_main", "CRC-32 (Hex)", nullptr));
        labelEthOutBin_2->setText(QCoreApplication::translate("crc_main", "\342\200\224", nullptr));
        lineEthOutHex->setText(QCoreApplication::translate("crc_main", "\342\200\224", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ethTab), QCoreApplication::translate("crc_main", "Ethernet", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("crc_main", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt;\">CRC-Calculator</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:14pt;\">Entwickelt im Rahmen einer Projektarbeit</span></p>\n"
"<p align=\"center\" style"
                        "=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:14pt; font-weight:700; color:#aa0000;\">Hochschule Landshut</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.haw-landshut.de/\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:14pt; text-decoration: underline; color:#094fd1;\">www.haw-landshut.de</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:14pt;\">Eslam Mohamed</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bo"
                        "ttom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:14pt;\">Nesrine Sassi</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:10pt; color:#aa0000;\">0x45 61 73 74 65 72 21 0A</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(infoTab), QCoreApplication::translate("crc_main", "Info", nullptr));
        ButtonFillOnes->setText(QCoreApplication::translate("crc_main", "Mit 1 f\303\274llen", nullptr));
        ButtonFillZeros->setText(QCoreApplication::translate("crc_main", "Mit 0 f\303\274llen", nullptr));
        ButtonFillRandom->setText(QCoreApplication::translate("crc_main", "Mit Zufallswerten f\303\274llen", nullptr));
        labelAutoFillCnt->setText(QCoreApplication::translate("crc_main", "Bytes:", nullptr));
        LabelGenerateData->setText(QCoreApplication::translate("crc_main", "Felder automatisch ausf\303\274llen", nullptr));
        checkBoxCAN_Extended->setText(QCoreApplication::translate("crc_main", "Extended ID (29-Bit)", nullptr));
        checkBoxCAN_RTR->setText(QCoreApplication::translate("crc_main", "Remote Frame (RTR)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crc_main: public Ui_crc_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRC_MAIN_H
