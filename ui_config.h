/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QCheckBox *y2AutoStep;
    QDoubleSpinBox *y2div;
    QSpinBox *y1SubDiv;
    QLabel *label_26;
    QCheckBox *y1AutoStep;
    QLineEdit *y2legend;
    QDoubleSpinBox *y2Max;
    QDoubleSpinBox *y1Max;
    QLineEdit *y1legend;
    QLabel *label_19;
    QLabel *label_12;
    QDoubleSpinBox *y1Min;
    QDoubleSpinBox *y2Min;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_4;
    QPushButton *resetY1Axis;
    QPushButton *resetY2Axis;
    QLabel *label_25;
    QSpinBox *y2SubDiv;
    QLabel *label_24;
    QDoubleSpinBox *y1div;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_5;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_3;
    QCheckBox *line1Enable;
    QComboBox *line2Yaxis_3;
    QComboBox *line1Color;
    QDoubleSpinBox *line2Value;
    QComboBox *line1Yaxis;
    QDoubleSpinBox *line1Value;
    QCheckBox *line2Enable;
    QComboBox *line2Color;
    QLabel *label_5;
    QLabel *label_21;
    QLabel *label_22;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QPushButton *saveProfile;
    QComboBox *profileNameList;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *newProfileName;
    QPushButton *saveNewProfile;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *Q4;
    QLineEdit *data4ScaleFactor;
    QLineEdit *data3ScaleFactor;
    QLineEdit *data2ScaleFactor;
    QLabel *Q2;
    QComboBox *data4Yaxis;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *data2Yaxis;
    QLabel *Q3;
    QComboBox *data3Yaxis;
    QComboBox *data2ScaleFactorType;
    QComboBox *data1Color;
    QLabel *label_10;
    QComboBox *data3ScaleFactorType;
    QComboBox *data4ScaleFactorType;
    QComboBox *data1Yaxis;
    QLineEdit *data3Unit;
    QLabel *label_18;
    QLabel *Q1;
    QComboBox *data1ScaleFactorType;
    QLineEdit *data4Unit;
    QComboBox *data1DataType;
    QLineEdit *data2Unit;
    QComboBox *data3Color;
    QLineEdit *data1Unit;
    QComboBox *data4Color;
    QLineEdit *data2Name;
    QComboBox *data2Color;
    QCheckBox *data4Enable;
    QCheckBox *data3Enable;
    QLabel *label_3;
    QLineEdit *data3Name;
    QLabel *label_2;
    QLineEdit *data4Name;
    QLineEdit *data1Name;
    QCheckBox *data2Enable;
    QSpinBox *data1Size;
    QCheckBox *data1Enable;
    QLabel *label_23;
    QSpinBox *data2Size;
    QLineEdit *data1ScaleFactor;
    QComboBox *data4DataType;
    QSpinBox *data3Size;
    QComboBox *data2DataType;
    QSpinBox *data4Size;
    QComboBox *data3DataType;
    QLabel *label_27;
    QSpinBox *data1Pres;
    QSpinBox *data2Pres;
    QSpinBox *data3Pres;
    QSpinBox *data4Pres;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *dataID;
    QPushButton *setDataIDBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLineEdit *dataFreq;
    QLabel *label_28;
    QPushButton *setDataFreqBtn;
    QGroupBox *groupBox_6;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QComboBox *mainCanModule;
    QSpinBox *mainCanID;
    QComboBox *mainCanBaudRate;
    QPushButton *initMainCANBtn;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *mainCANStatus;

    void setupUi(QDialog *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(791, 535);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/icon/Gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        config->setWindowIcon(icon);
        groupBox_4 = new QGroupBox(config);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 410, 531, 101));
        gridLayoutWidget_3 = new QWidget(groupBox_4);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 20, 511, 76));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        y2AutoStep = new QCheckBox(gridLayoutWidget_3);
        y2AutoStep->setObjectName(QStringLiteral("y2AutoStep"));
        y2AutoStep->setMinimumSize(QSize(20, 20));
        y2AutoStep->setMaximumSize(QSize(20, 20));
        y2AutoStep->setChecked(true);

        gridLayout_4->addWidget(y2AutoStep, 2, 7, 1, 1);

        y2div = new QDoubleSpinBox(gridLayoutWidget_3);
        y2div->setObjectName(QStringLiteral("y2div"));
        y2div->setEnabled(false);
        y2div->setDecimals(3);
        y2div->setSingleStep(0.001);
        y2div->setValue(0.1);

        gridLayout_4->addWidget(y2div, 2, 8, 1, 1);

        y1SubDiv = new QSpinBox(gridLayoutWidget_3);
        y1SubDiv->setObjectName(QStringLiteral("y1SubDiv"));
        y1SubDiv->setEnabled(false);
        y1SubDiv->setValue(3);

        gridLayout_4->addWidget(y1SubDiv, 1, 9, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_26->setFont(font);

        gridLayout_4->addWidget(label_26, 0, 9, 1, 1);

        y1AutoStep = new QCheckBox(gridLayoutWidget_3);
        y1AutoStep->setObjectName(QStringLiteral("y1AutoStep"));
        y1AutoStep->setMinimumSize(QSize(20, 20));
        y1AutoStep->setMaximumSize(QSize(20, 20));
        y1AutoStep->setChecked(true);

        gridLayout_4->addWidget(y1AutoStep, 1, 7, 1, 1);

        y2legend = new QLineEdit(gridLayoutWidget_3);
        y2legend->setObjectName(QStringLiteral("y2legend"));

        gridLayout_4->addWidget(y2legend, 2, 4, 1, 1);

        y2Max = new QDoubleSpinBox(gridLayoutWidget_3);
        y2Max->setObjectName(QStringLiteral("y2Max"));
        y2Max->setMinimumSize(QSize(70, 0));
        y2Max->setMaximumSize(QSize(70, 16777215));
        y2Max->setMinimum(-1e+8);
        y2Max->setMaximum(1e+8);
        y2Max->setSingleStep(0.5);
        y2Max->setValue(10);

        gridLayout_4->addWidget(y2Max, 2, 3, 1, 1);

        y1Max = new QDoubleSpinBox(gridLayoutWidget_3);
        y1Max->setObjectName(QStringLiteral("y1Max"));
        y1Max->setMinimumSize(QSize(70, 0));
        y1Max->setMaximumSize(QSize(70, 16777215));
        y1Max->setMinimum(-1e+8);
        y1Max->setMaximum(1e+8);
        y1Max->setSingleStep(0.5);
        y1Max->setValue(10);

        gridLayout_4->addWidget(y1Max, 1, 3, 1, 1);

        y1legend = new QLineEdit(gridLayoutWidget_3);
        y1legend->setObjectName(QStringLiteral("y1legend"));

        gridLayout_4->addWidget(y1legend, 1, 4, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);

        gridLayout_4->addWidget(label_19, 0, 4, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_12, 0, 2, 1, 1);

        y1Min = new QDoubleSpinBox(gridLayoutWidget_3);
        y1Min->setObjectName(QStringLiteral("y1Min"));
        y1Min->setMinimumSize(QSize(70, 0));
        y1Min->setMaximumSize(QSize(70, 16777215));
        y1Min->setMinimum(-100000);
        y1Min->setMaximum(100000);
        y1Min->setSingleStep(0.5);
        y1Min->setValue(-10);

        gridLayout_4->addWidget(y1Min, 1, 2, 1, 1);

        y2Min = new QDoubleSpinBox(gridLayoutWidget_3);
        y2Min->setObjectName(QStringLiteral("y2Min"));
        y2Min->setMinimumSize(QSize(70, 0));
        y2Min->setMaximumSize(QSize(70, 16777215));
        y2Min->setMinimum(-100000);
        y2Min->setMaximum(100000);
        y2Min->setSingleStep(0.5);
        y2Min->setValue(-10);

        gridLayout_4->addWidget(y2Min, 2, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_13, 0, 3, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(40, 0));
        label_11->setMaximumSize(QSize(80, 16777215));
        QFont font1;
        font1.setItalic(true);
        font1.setStrikeOut(false);
        label_11->setFont(font1);

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(80, 16777215));
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        resetY1Axis = new QPushButton(gridLayoutWidget_3);
        resetY1Axis->setObjectName(QStringLiteral("resetY1Axis"));
        resetY1Axis->setMaximumSize(QSize(50, 16777215));
        resetY1Axis->setAutoDefault(false);

        gridLayout_4->addWidget(resetY1Axis, 1, 5, 1, 1);

        resetY2Axis = new QPushButton(gridLayoutWidget_3);
        resetY2Axis->setObjectName(QStringLiteral("resetY2Axis"));
        resetY2Axis->setMaximumSize(QSize(50, 16777215));
        resetY2Axis->setAutoDefault(false);

        gridLayout_4->addWidget(resetY2Axis, 2, 5, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font);

        gridLayout_4->addWidget(label_25, 0, 8, 1, 1);

        y2SubDiv = new QSpinBox(gridLayoutWidget_3);
        y2SubDiv->setObjectName(QStringLiteral("y2SubDiv"));
        y2SubDiv->setEnabled(false);
        y2SubDiv->setValue(3);

        gridLayout_4->addWidget(y2SubDiv, 2, 9, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font);

        gridLayout_4->addWidget(label_24, 0, 7, 1, 1);

        y1div = new QDoubleSpinBox(gridLayoutWidget_3);
        y1div->setObjectName(QStringLiteral("y1div"));
        y1div->setEnabled(false);
        y1div->setDecimals(3);
        y1div->setSingleStep(0.001);
        y1div->setValue(0.1);

        gridLayout_4->addWidget(y1div, 1, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 6, 1, 1);

        groupBox_5 = new QGroupBox(config);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 300, 311, 101));
        gridLayoutWidget_5 = new QWidget(groupBox_5);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 20, 291, 70));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        line1Enable = new QCheckBox(gridLayoutWidget_5);
        line1Enable->setObjectName(QStringLiteral("line1Enable"));
        line1Enable->setMinimumSize(QSize(40, 0));
        line1Enable->setMaximumSize(QSize(80, 16777215));
        line1Enable->setFont(font1);
        line1Enable->setChecked(false);

        gridLayout_3->addWidget(line1Enable, 1, 0, 1, 1);

        line2Yaxis_3 = new QComboBox(gridLayoutWidget_5);
        line2Yaxis_3->setObjectName(QStringLiteral("line2Yaxis_3"));

        gridLayout_3->addWidget(line2Yaxis_3, 2, 2, 1, 1);

        line1Color = new QComboBox(gridLayoutWidget_5);
        line1Color->setObjectName(QStringLiteral("line1Color"));

        gridLayout_3->addWidget(line1Color, 1, 3, 1, 1);

        line2Value = new QDoubleSpinBox(gridLayoutWidget_5);
        line2Value->setObjectName(QStringLiteral("line2Value"));
        line2Value->setMinimumSize(QSize(70, 0));
        line2Value->setMaximumSize(QSize(80, 16777215));
        line2Value->setMinimum(-1000);
        line2Value->setMaximum(1000);
        line2Value->setSingleStep(0.5);
        line2Value->setValue(0);

        gridLayout_3->addWidget(line2Value, 2, 1, 1, 1);

        line1Yaxis = new QComboBox(gridLayoutWidget_5);
        line1Yaxis->setObjectName(QStringLiteral("line1Yaxis"));

        gridLayout_3->addWidget(line1Yaxis, 1, 2, 1, 1);

        line1Value = new QDoubleSpinBox(gridLayoutWidget_5);
        line1Value->setObjectName(QStringLiteral("line1Value"));
        line1Value->setMinimumSize(QSize(70, 0));
        line1Value->setMaximumSize(QSize(80, 16777215));
        line1Value->setMinimum(-1000);
        line1Value->setMaximum(1000);
        line1Value->setSingleStep(0.5);
        line1Value->setValue(0);

        gridLayout_3->addWidget(line1Value, 1, 1, 1, 1);

        line2Enable = new QCheckBox(gridLayoutWidget_5);
        line2Enable->setObjectName(QStringLiteral("line2Enable"));
        line2Enable->setMinimumSize(QSize(40, 0));
        line2Enable->setMaximumSize(QSize(80, 16777215));
        line2Enable->setFont(font1);
        line2Enable->setChecked(false);

        gridLayout_3->addWidget(line2Enable, 2, 0, 1, 1);

        line2Color = new QComboBox(gridLayoutWidget_5);
        line2Color->setObjectName(QStringLiteral("line2Color"));

        gridLayout_3->addWidget(line2Color, 2, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font);

        gridLayout_3->addWidget(label_21, 0, 2, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);

        gridLayout_3->addWidget(label_22, 0, 3, 1, 1);

        groupBox_2 = new QGroupBox(config);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(500, 10, 281, 81));
        gridLayoutWidget_4 = new QWidget(groupBox_2);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 20, 261, 54));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        saveProfile = new QPushButton(gridLayoutWidget_4);
        saveProfile->setObjectName(QStringLiteral("saveProfile"));
        saveProfile->setMaximumSize(QSize(75, 16777215));
        saveProfile->setAutoDefault(false);

        gridLayout_5->addWidget(saveProfile, 0, 2, 1, 1);

        profileNameList = new QComboBox(gridLayoutWidget_4);
        profileNameList->setObjectName(QStringLiteral("profileNameList"));
        profileNameList->setMaximumSize(QSize(182, 16777215));

        gridLayout_5->addWidget(profileNameList, 0, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setMaximumSize(QSize(80, 16777215));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(80, 0));
        label_15->setMaximumSize(QSize(80, 16777215));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        newProfileName = new QLineEdit(gridLayoutWidget_4);
        newProfileName->setObjectName(QStringLiteral("newProfileName"));
        newProfileName->setMaximumSize(QSize(182, 16777215));

        gridLayout_5->addWidget(newProfileName, 1, 1, 1, 1);

        saveNewProfile = new QPushButton(gridLayoutWidget_4);
        saveNewProfile->setObjectName(QStringLiteral("saveNewProfile"));
        saveNewProfile->setMaximumSize(QSize(75, 16777215));
        saveNewProfile->setAutoDefault(false);

        gridLayout_5->addWidget(saveNewProfile, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(config);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 90, 771, 201));
        gridLayoutWidget_2 = new QWidget(groupBox_3);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 50, 751, 138));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Q4 = new QLabel(gridLayoutWidget_2);
        Q4->setObjectName(QStringLiteral("Q4"));
        Q4->setMinimumSize(QSize(10, 0));
        Q4->setMaximumSize(QSize(15, 16777215));
        Q4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(Q4, 4, 4, 1, 1);

        data4ScaleFactor = new QLineEdit(gridLayoutWidget_2);
        data4ScaleFactor->setObjectName(QStringLiteral("data4ScaleFactor"));
        data4ScaleFactor->setMaximumSize(QSize(25, 100));

        gridLayout_2->addWidget(data4ScaleFactor, 4, 5, 1, 1);

        data3ScaleFactor = new QLineEdit(gridLayoutWidget_2);
        data3ScaleFactor->setObjectName(QStringLiteral("data3ScaleFactor"));
        data3ScaleFactor->setMaximumSize(QSize(25, 100));

        gridLayout_2->addWidget(data3ScaleFactor, 3, 5, 1, 1);

        data2ScaleFactor = new QLineEdit(gridLayoutWidget_2);
        data2ScaleFactor->setObjectName(QStringLiteral("data2ScaleFactor"));
        data2ScaleFactor->setMaximumSize(QSize(25, 100));

        gridLayout_2->addWidget(data2ScaleFactor, 2, 5, 1, 1);

        Q2 = new QLabel(gridLayoutWidget_2);
        Q2->setObjectName(QStringLiteral("Q2"));
        Q2->setMinimumSize(QSize(10, 0));
        Q2->setMaximumSize(QSize(15, 16777215));
        Q2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(Q2, 2, 4, 1, 1);

        data4Yaxis = new QComboBox(gridLayoutWidget_2);
        data4Yaxis->setObjectName(QStringLiteral("data4Yaxis"));

        gridLayout_2->addWidget(data4Yaxis, 4, 8, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 0, 9, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 0, 3, 1, 1);

        data2Yaxis = new QComboBox(gridLayoutWidget_2);
        data2Yaxis->setObjectName(QStringLiteral("data2Yaxis"));

        gridLayout_2->addWidget(data2Yaxis, 2, 8, 1, 1);

        Q3 = new QLabel(gridLayoutWidget_2);
        Q3->setObjectName(QStringLiteral("Q3"));
        Q3->setMinimumSize(QSize(10, 0));
        Q3->setMaximumSize(QSize(15, 16777215));
        Q3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(Q3, 3, 4, 1, 1);

        data3Yaxis = new QComboBox(gridLayoutWidget_2);
        data3Yaxis->setObjectName(QStringLiteral("data3Yaxis"));

        gridLayout_2->addWidget(data3Yaxis, 3, 8, 1, 1);

        data2ScaleFactorType = new QComboBox(gridLayoutWidget_2);
        data2ScaleFactorType->setObjectName(QStringLiteral("data2ScaleFactorType"));
        data2ScaleFactorType->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(data2ScaleFactorType, 2, 3, 1, 1);

        data1Color = new QComboBox(gridLayoutWidget_2);
        data1Color->setObjectName(QStringLiteral("data1Color"));

        gridLayout_2->addWidget(data1Color, 1, 9, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 0, 8, 1, 1);

        data3ScaleFactorType = new QComboBox(gridLayoutWidget_2);
        data3ScaleFactorType->setObjectName(QStringLiteral("data3ScaleFactorType"));
        data3ScaleFactorType->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(data3ScaleFactorType, 3, 3, 1, 1);

        data4ScaleFactorType = new QComboBox(gridLayoutWidget_2);
        data4ScaleFactorType->setObjectName(QStringLiteral("data4ScaleFactorType"));
        data4ScaleFactorType->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(data4ScaleFactorType, 4, 3, 1, 1);

        data1Yaxis = new QComboBox(gridLayoutWidget_2);
        data1Yaxis->setObjectName(QStringLiteral("data1Yaxis"));

        gridLayout_2->addWidget(data1Yaxis, 1, 8, 1, 1);

        data3Unit = new QLineEdit(gridLayoutWidget_2);
        data3Unit->setObjectName(QStringLiteral("data3Unit"));
        data3Unit->setMaximumSize(QSize(50, 100));

        gridLayout_2->addWidget(data3Unit, 3, 7, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);

        gridLayout_2->addWidget(label_18, 0, 7, 1, 1);

        Q1 = new QLabel(gridLayoutWidget_2);
        Q1->setObjectName(QStringLiteral("Q1"));
        Q1->setMinimumSize(QSize(10, 0));
        Q1->setMaximumSize(QSize(15, 16777215));
        Q1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(Q1, 1, 4, 1, 1);

        data1ScaleFactorType = new QComboBox(gridLayoutWidget_2);
        data1ScaleFactorType->setObjectName(QStringLiteral("data1ScaleFactorType"));
        data1ScaleFactorType->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(data1ScaleFactorType, 1, 3, 1, 1);

        data4Unit = new QLineEdit(gridLayoutWidget_2);
        data4Unit->setObjectName(QStringLiteral("data4Unit"));
        data4Unit->setMaximumSize(QSize(50, 100));

        gridLayout_2->addWidget(data4Unit, 4, 7, 1, 1);

        data1DataType = new QComboBox(gridLayoutWidget_2);
        data1DataType->setObjectName(QStringLiteral("data1DataType"));

        gridLayout_2->addWidget(data1DataType, 1, 2, 1, 1);

        data2Unit = new QLineEdit(gridLayoutWidget_2);
        data2Unit->setObjectName(QStringLiteral("data2Unit"));
        data2Unit->setMaximumSize(QSize(50, 100));

        gridLayout_2->addWidget(data2Unit, 2, 7, 1, 1);

        data3Color = new QComboBox(gridLayoutWidget_2);
        data3Color->setObjectName(QStringLiteral("data3Color"));

        gridLayout_2->addWidget(data3Color, 3, 9, 1, 1);

        data1Unit = new QLineEdit(gridLayoutWidget_2);
        data1Unit->setObjectName(QStringLiteral("data1Unit"));
        data1Unit->setMaximumSize(QSize(50, 100));

        gridLayout_2->addWidget(data1Unit, 1, 7, 1, 1);

        data4Color = new QComboBox(gridLayoutWidget_2);
        data4Color->setObjectName(QStringLiteral("data4Color"));

        gridLayout_2->addWidget(data4Color, 4, 9, 1, 1);

        data2Name = new QLineEdit(gridLayoutWidget_2);
        data2Name->setObjectName(QStringLiteral("data2Name"));
        data2Name->setMaximumSize(QSize(100, 20));

        gridLayout_2->addWidget(data2Name, 2, 1, 1, 1);

        data2Color = new QComboBox(gridLayoutWidget_2);
        data2Color->setObjectName(QStringLiteral("data2Color"));

        gridLayout_2->addWidget(data2Color, 2, 9, 1, 1);

        data4Enable = new QCheckBox(gridLayoutWidget_2);
        data4Enable->setObjectName(QStringLiteral("data4Enable"));
        data4Enable->setMinimumSize(QSize(70, 0));
        data4Enable->setMaximumSize(QSize(80, 16777215));
        data4Enable->setFont(font1);
        data4Enable->setChecked(true);

        gridLayout_2->addWidget(data4Enable, 4, 0, 1, 1);

        data3Enable = new QCheckBox(gridLayoutWidget_2);
        data3Enable->setObjectName(QStringLiteral("data3Enable"));
        data3Enable->setMinimumSize(QSize(70, 0));
        data3Enable->setMaximumSize(QSize(80, 16777215));
        data3Enable->setFont(font1);
        data3Enable->setChecked(true);

        gridLayout_2->addWidget(data3Enable, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        data3Name = new QLineEdit(gridLayoutWidget_2);
        data3Name->setObjectName(QStringLiteral("data3Name"));
        data3Name->setMaximumSize(QSize(100, 20));

        gridLayout_2->addWidget(data3Name, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        data4Name = new QLineEdit(gridLayoutWidget_2);
        data4Name->setObjectName(QStringLiteral("data4Name"));
        data4Name->setMaximumSize(QSize(100, 20));

        gridLayout_2->addWidget(data4Name, 4, 1, 1, 1);

        data1Name = new QLineEdit(gridLayoutWidget_2);
        data1Name->setObjectName(QStringLiteral("data1Name"));
        data1Name->setMinimumSize(QSize(100, 0));
        data1Name->setMaximumSize(QSize(100, 20));

        gridLayout_2->addWidget(data1Name, 1, 1, 1, 1);

        data2Enable = new QCheckBox(gridLayoutWidget_2);
        data2Enable->setObjectName(QStringLiteral("data2Enable"));
        data2Enable->setMinimumSize(QSize(70, 0));
        data2Enable->setMaximumSize(QSize(80, 16777215));
        data2Enable->setFont(font1);
        data2Enable->setChecked(true);

        gridLayout_2->addWidget(data2Enable, 2, 0, 1, 1);

        data1Size = new QSpinBox(gridLayoutWidget_2);
        data1Size->setObjectName(QStringLiteral("data1Size"));
        data1Size->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(data1Size, 1, 10, 1, 1);

        data1Enable = new QCheckBox(gridLayoutWidget_2);
        data1Enable->setObjectName(QStringLiteral("data1Enable"));
        data1Enable->setMinimumSize(QSize(70, 0));
        data1Enable->setMaximumSize(QSize(80, 16777215));
        data1Enable->setFont(font1);
        data1Enable->setChecked(true);

        gridLayout_2->addWidget(data1Enable, 1, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);

        gridLayout_2->addWidget(label_23, 0, 10, 1, 1);

        data2Size = new QSpinBox(gridLayoutWidget_2);
        data2Size->setObjectName(QStringLiteral("data2Size"));
        data2Size->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(data2Size, 2, 10, 1, 1);

        data1ScaleFactor = new QLineEdit(gridLayoutWidget_2);
        data1ScaleFactor->setObjectName(QStringLiteral("data1ScaleFactor"));
        data1ScaleFactor->setMaximumSize(QSize(25, 100));

        gridLayout_2->addWidget(data1ScaleFactor, 1, 5, 1, 1);

        data4DataType = new QComboBox(gridLayoutWidget_2);
        data4DataType->setObjectName(QStringLiteral("data4DataType"));

        gridLayout_2->addWidget(data4DataType, 4, 2, 1, 1);

        data3Size = new QSpinBox(gridLayoutWidget_2);
        data3Size->setObjectName(QStringLiteral("data3Size"));
        data3Size->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(data3Size, 3, 10, 1, 1);

        data2DataType = new QComboBox(gridLayoutWidget_2);
        data2DataType->setObjectName(QStringLiteral("data2DataType"));

        gridLayout_2->addWidget(data2DataType, 2, 2, 1, 1);

        data4Size = new QSpinBox(gridLayoutWidget_2);
        data4Size->setObjectName(QStringLiteral("data4Size"));
        data4Size->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(data4Size, 4, 10, 1, 1);

        data3DataType = new QComboBox(gridLayoutWidget_2);
        data3DataType->setObjectName(QStringLiteral("data3DataType"));

        gridLayout_2->addWidget(data3DataType, 3, 2, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font);

        gridLayout_2->addWidget(label_27, 0, 6, 1, 1);

        data1Pres = new QSpinBox(gridLayoutWidget_2);
        data1Pres->setObjectName(QStringLiteral("data1Pres"));
        data1Pres->setMaximumSize(QSize(40, 16777215));
        data1Pres->setMaximum(6);
        data1Pres->setValue(2);

        gridLayout_2->addWidget(data1Pres, 1, 6, 1, 1);

        data2Pres = new QSpinBox(gridLayoutWidget_2);
        data2Pres->setObjectName(QStringLiteral("data2Pres"));
        data2Pres->setMaximumSize(QSize(40, 16777215));
        data2Pres->setMaximum(6);
        data2Pres->setValue(2);

        gridLayout_2->addWidget(data2Pres, 2, 6, 1, 1);

        data3Pres = new QSpinBox(gridLayoutWidget_2);
        data3Pres->setObjectName(QStringLiteral("data3Pres"));
        data3Pres->setMaximumSize(QSize(40, 16777215));
        data3Pres->setMaximum(6);
        data3Pres->setValue(2);

        gridLayout_2->addWidget(data3Pres, 3, 6, 1, 1);

        data4Pres = new QSpinBox(gridLayoutWidget_2);
        data4Pres->setObjectName(QStringLiteral("data4Pres"));
        data4Pres->setMaximumSize(QSize(40, 16777215));
        data4Pres->setValue(2);

        gridLayout_2->addWidget(data4Pres, 4, 6, 1, 1);

        horizontalLayoutWidget = new QWidget(groupBox_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 181, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dataID = new QLineEdit(horizontalLayoutWidget);
        dataID->setObjectName(QStringLiteral("dataID"));
        dataID->setMaximumSize(QSize(100, 20));

        horizontalLayout->addWidget(dataID);

        setDataIDBtn = new QPushButton(horizontalLayoutWidget);
        setDataIDBtn->setObjectName(QStringLiteral("setDataIDBtn"));
        setDataIDBtn->setMaximumSize(QSize(50, 16777215));
        setDataIDBtn->setAutoDefault(false);

        horizontalLayout->addWidget(setDataIDBtn);

        horizontalLayoutWidget_2 = new QWidget(groupBox_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(240, 20, 195, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(horizontalLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        dataFreq = new QLineEdit(horizontalLayoutWidget_2);
        dataFreq->setObjectName(QStringLiteral("dataFreq"));

        horizontalLayout_2->addWidget(dataFreq);

        label_28 = new QLabel(horizontalLayoutWidget_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_2->addWidget(label_28);

        setDataFreqBtn = new QPushButton(horizontalLayoutWidget_2);
        setDataFreqBtn->setObjectName(QStringLiteral("setDataFreqBtn"));
        setDataFreqBtn->setMaximumSize(QSize(50, 16777215));
        setDataFreqBtn->setAutoDefault(false);

        horizontalLayout_2->addWidget(setDataFreqBtn);

        groupBox_6 = new QGroupBox(config);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 401, 71));
        gridLayoutWidget_6 = new QWidget(groupBox_6);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 20, 381, 31));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(20, 16777215));

        gridLayout_6->addWidget(label_6, 0, 1, 1, 1);

        mainCanModule = new QComboBox(gridLayoutWidget_6);
        mainCanModule->setObjectName(QStringLiteral("mainCanModule"));

        gridLayout_6->addWidget(mainCanModule, 0, 0, 1, 1);

        mainCanID = new QSpinBox(gridLayoutWidget_6);
        mainCanID->setObjectName(QStringLiteral("mainCanID"));
        mainCanID->setMaximumSize(QSize(35, 16777215));

        gridLayout_6->addWidget(mainCanID, 0, 2, 1, 1);

        mainCanBaudRate = new QComboBox(gridLayoutWidget_6);
        mainCanBaudRate->setObjectName(QStringLiteral("mainCanBaudRate"));

        gridLayout_6->addWidget(mainCanBaudRate, 0, 3, 1, 1);

        initMainCANBtn = new QPushButton(gridLayoutWidget_6);
        initMainCANBtn->setObjectName(QStringLiteral("initMainCANBtn"));
        initMainCANBtn->setMaximumSize(QSize(75, 16777215));
        initMainCANBtn->setAutoDefault(false);

        gridLayout_6->addWidget(initMainCANBtn, 0, 4, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(groupBox_6);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 50, 141, 16));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        mainCANStatus = new QLabel(horizontalLayoutWidget_3);
        mainCANStatus->setObjectName(QStringLiteral("mainCANStatus"));
        mainCANStatus->setStyleSheet(QStringLiteral("color : rgb(255, 0, 0)"));

        horizontalLayout_3->addWidget(mainCANStatus);


        retranslateUi(config);

        resetY1Axis->setDefault(false);
        line1Color->setCurrentIndex(5);
        line2Color->setCurrentIndex(5);
        data1ScaleFactorType->setCurrentIndex(0);
        data3Color->setCurrentIndex(0);
        data4Color->setCurrentIndex(0);
        data2Color->setCurrentIndex(0);
        initMainCANBtn->setDefault(true);


        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QDialog *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Configuraci\303\263n", 0));
        groupBox_4->setTitle(QApplication::translate("config", "Eje Y", 0));
        y2AutoStep->setText(QString());
        label_26->setText(QApplication::translate("config", "Sub div.", 0));
        y1AutoStep->setText(QString());
        label_19->setText(QApplication::translate("config", "Leyenda", 0));
        label_12->setText(QApplication::translate("config", "Min", 0));
        label_13->setText(QApplication::translate("config", "Max", 0));
        label_11->setText(QApplication::translate("config", "Eje Y2", 0));
        label_4->setText(QApplication::translate("config", "Eje Y1", 0));
        resetY1Axis->setText(QApplication::translate("config", "Set", 0));
        resetY2Axis->setText(QApplication::translate("config", "Set", 0));
        label_25->setText(QApplication::translate("config", "Div", 0));
        label_24->setText(QApplication::translate("config", "Auto", 0));
        groupBox_5->setTitle(QApplication::translate("config", "Indicadores", 0));
        line1Enable->setText(QApplication::translate("config", "L\303\255nea 1", 0));
        line2Yaxis_3->clear();
        line2Yaxis_3->insertItems(0, QStringList()
         << QApplication::translate("config", "Eje Y1", 0)
         << QApplication::translate("config", "Eje Y2", 0)
        );
        line1Color->clear();
        line1Color->insertItems(0, QStringList()
         << QApplication::translate("config", "Rojo", 0)
         << QApplication::translate("config", "Verde", 0)
         << QApplication::translate("config", "Amarillo", 0)
         << QApplication::translate("config", "Cyan", 0)
         << QApplication::translate("config", "Azul", 0)
         << QApplication::translate("config", "Magenta", 0)
        );
        line1Yaxis->clear();
        line1Yaxis->insertItems(0, QStringList()
         << QApplication::translate("config", "Eje Y1", 0)
         << QApplication::translate("config", "Eje Y2", 0)
        );
        line2Enable->setText(QApplication::translate("config", "L\303\255nea2", 0));
        line2Color->clear();
        line2Color->insertItems(0, QStringList()
         << QApplication::translate("config", "Rojo", 0)
         << QApplication::translate("config", "Verde", 0)
         << QApplication::translate("config", "Amarillo", 0)
         << QApplication::translate("config", "Cyan", 0)
         << QApplication::translate("config", "Azul", 0)
         << QApplication::translate("config", "Magenta", 0)
        );
        label_5->setText(QApplication::translate("config", "Valor", 0));
        label_21->setText(QApplication::translate("config", "Eje Y", 0));
        label_22->setText(QApplication::translate("config", "Color", 0));
        groupBox_2->setTitle(QApplication::translate("config", "Perfiles", 0));
        saveProfile->setText(QApplication::translate("config", "Guardar", 0));
        label_14->setText(QApplication::translate("config", "Perfiles", 0));
        label_15->setText(QApplication::translate("config", "Nuevo Perfil", 0));
        saveNewProfile->setText(QApplication::translate("config", "Crear", 0));
        groupBox_3->setTitle(QApplication::translate("config", "Datos", 0));
        Q4->setText(QApplication::translate("config", "Q", 0));
        Q2->setText(QApplication::translate("config", "Q", 0));
        data4Yaxis->clear();
        data4Yaxis->insertItems(0, QStringList()
         << QApplication::translate("config", "Eje Y1", 0)
         << QApplication::translate("config", "Eje Y2", 0)
        );
        label_9->setText(QApplication::translate("config", "Color", 0));
        label_8->setText(QApplication::translate("config", "Factor", 0));
        data2Yaxis->clear();
        data2Yaxis->insertItems(0, QStringList()
         << QApplication::translate("config", "Eje Y1", 0)
         << QApplication::translate("config", "Eje Y2", 0)
        );
        Q3->setText(QApplication::translate("config", "Q", 0));
        data3Yaxis->clear();
        data3Yaxis->insertItems(0, QStringList()
         << QApplication::translate("config", "Eje Y1", 0)
         << QApplication::translate("config", "Eje Y2", 0)
        );
        data2ScaleFactorType->clear();
        data2ScaleFactorType->insertItems(0, QStringList()
         << QApplication::translate("config", "FP", 0)
         << QApplication::translate("config", "Personalizado", 0)
        );
        data1Color->clear();
        data1Color->insertItems(0, QStringList()
         << QApplication::translate("config", "Rojo", 0)
         << QApplication::translate("config", "Verde", 0)
         << QApplication::translate("config", "Amarillo", 0)
         << QApplication::translate("config", "Cyan", 0)
         << QApplication::translate("config", "Azul", 0)
         << QApplication::translate("config", "Magenta", 0)
        );
        label_10->setText(QApplication::translate("config", "Eje Y", 0));
        data3ScaleFactorType->clear();
        data3ScaleFactorType->insertItems(0, QStringList()
         << QApplication::translate("config", "FP", 0)
         << QApplication::translate("config", "Personalizado", 0)
        );
        data4ScaleFactorType->clear();
        data4ScaleFactorType->insertItems(0, QStringList()
         << QApplication::translate("config", "FP", 0)
         << QApplication::translate("config", "Personalizado", 0)
        );
        data1Yaxis->clear();
        data1Yaxis->insertItems(0, QStringList()
         << QApplication::translate("config", "Eje Y1", 0)
         << QApplication::translate("config", "Eje Y2", 0)
        );
        label_18->setText(QApplication::translate("config", "Unidad", 0));
        Q1->setText(QApplication::translate("config", "Q", 0));
        data1ScaleFactorType->clear();
        data1ScaleFactorType->insertItems(0, QStringList()
         << QApplication::translate("config", "FP", 0)
         << QApplication::translate("config", "Const.", 0)
        );
        data1DataType->clear();
        data1DataType->insertItems(0, QStringList()
         << QApplication::translate("config", "INT8", 0)
         << QApplication::translate("config", "UINT8", 0)
         << QApplication::translate("config", "INT16", 0)
         << QApplication::translate("config", "UINT16", 0)
         << QApplication::translate("config", "INT32", 0)
         << QApplication::translate("config", "UINT32", 0)
        );
        data3Color->clear();
        data3Color->insertItems(0, QStringList()
         << QApplication::translate("config", "Rojo", 0)
         << QApplication::translate("config", "Verde", 0)
         << QApplication::translate("config", "Amarillo", 0)
         << QApplication::translate("config", "Cyan", 0)
         << QApplication::translate("config", "Azul", 0)
         << QApplication::translate("config", "Magenta", 0)
        );
        data4Color->clear();
        data4Color->insertItems(0, QStringList()
         << QApplication::translate("config", "Rojo", 0)
         << QApplication::translate("config", "Verde", 0)
         << QApplication::translate("config", "Amarillo", 0)
         << QApplication::translate("config", "Cyan", 0)
         << QApplication::translate("config", "Azul", 0)
         << QApplication::translate("config", "Magenta", 0)
        );
        data2Name->setText(QString());
        data2Color->clear();
        data2Color->insertItems(0, QStringList()
         << QApplication::translate("config", "Rojo", 0)
         << QApplication::translate("config", "Verde", 0)
         << QApplication::translate("config", "Amarillo", 0)
         << QApplication::translate("config", "Cyan", 0)
         << QApplication::translate("config", "Azul", 0)
         << QApplication::translate("config", "Magenta", 0)
        );
        data4Enable->setText(QApplication::translate("config", "Data 4", 0));
        data3Enable->setText(QApplication::translate("config", "Data 3", 0));
        label_3->setText(QApplication::translate("config", "Tipo", 0));
        data3Name->setText(QString());
        label_2->setText(QApplication::translate("config", "Nombre", 0));
        data4Name->setText(QString());
        data1Name->setText(QString());
        data2Enable->setText(QApplication::translate("config", "Dato 2", 0));
        data1Enable->setText(QApplication::translate("config", "Dato 1", 0));
        label_23->setText(QApplication::translate("config", "Grosor", 0));
        data4DataType->clear();
        data4DataType->insertItems(0, QStringList()
         << QApplication::translate("config", "INT8", 0)
         << QApplication::translate("config", "UINT8", 0)
         << QApplication::translate("config", "INT16", 0)
         << QApplication::translate("config", "UINT16", 0)
         << QApplication::translate("config", "INT32", 0)
         << QApplication::translate("config", "UINT32", 0)
        );
        data2DataType->clear();
        data2DataType->insertItems(0, QStringList()
         << QApplication::translate("config", "INT8", 0)
         << QApplication::translate("config", "UINT8", 0)
         << QApplication::translate("config", "INT16", 0)
         << QApplication::translate("config", "UINT16", 0)
         << QApplication::translate("config", "INT32", 0)
         << QApplication::translate("config", "UINT32", 0)
        );
        data3DataType->clear();
        data3DataType->insertItems(0, QStringList()
         << QApplication::translate("config", "INT8", 0)
         << QApplication::translate("config", "UINT8", 0)
         << QApplication::translate("config", "INT16", 0)
         << QApplication::translate("config", "UINT16", 0)
         << QApplication::translate("config", "INT32", 0)
         << QApplication::translate("config", "UINT32", 0)
        );
        label_27->setText(QApplication::translate("config", "Presici\303\263n", 0));
        label->setText(QApplication::translate("config", "CAN ID", 0));
        dataID->setText(QApplication::translate("config", "0x181", 0));
        setDataIDBtn->setText(QApplication::translate("config", "SET", 0));
        setDataIDBtn->setShortcut(QApplication::translate("config", "Ctrl+S", 0));
        label_16->setText(QApplication::translate("config", "Freq", 0));
        dataFreq->setText(QApplication::translate("config", "1000", 0));
        label_28->setText(QApplication::translate("config", "Datos/seg", 0));
        setDataFreqBtn->setText(QApplication::translate("config", "SET", 0));
        setDataFreqBtn->setShortcut(QApplication::translate("config", "Ctrl+S", 0));
        groupBox_6->setTitle(QApplication::translate("config", "CAN Adapter", 0));
        label_6->setText(QApplication::translate("config", "ID", 0));
        initMainCANBtn->setText(QApplication::translate("config", "Init CAN", 0));
        label_7->setText(QApplication::translate("config", "STATUS:", 0));
        mainCANStatus->setText(QApplication::translate("config", "DISCONNECT", 0));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
