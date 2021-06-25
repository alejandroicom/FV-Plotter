#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>
#include <QString>
#include "MainCanManager.h"
#define YAXIS1 0
#define YAXIS2 1


#define ROJO 0
#define VERDE 1
#define AMARILLO 2
#define CYAN 3
#define AZUL 4
#define MAGENTA 5



typedef enum
{
    SF_FP,
    SF_Custom
}ScaleFactorType;

typedef enum
{
    DT_int8,
    DT_uint8,
    DT_int16,
    DT_uint16,
    DT_int32,
    DT_uint32,

}DataType;


namespace Ui {
class config;
}

class config : public QDialog
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = 0);
    ~config();
    void loadProfailList(void);
    MainCanManager* getCanManager(void);

signals:
    void data1EnableToggled(bool);
    void data2EnableToggled(bool);
    void data3EnableToggled(bool);
    void data4EnableToggled(bool);
    void data1NameTextChanged(QString);
    void data2NameTextChanged(QString);
    void data3NameTextChanged(QString);
    void data4NameTextChanged(QString);
    void data1DataTypeChange(int);
    void data2DataTypeChange(int);
    void data3DataTypeChange(int);
    void data4DataTypeChange(int);
    void data1ScaleFactorTypeChange(int);
    void data2ScaleFactorTypeChange(int);
    void data3ScaleFactorTypeChange(int);
    void data4ScaleFactorTypeChange(int);
    void data1ScaleFactorChange(QString);
    void data2ScaleFactorChange(QString);
    void data3ScaleFactorChange(QString);
    void data4ScaleFactorChange(QString);
    void data1UnitChange(QString);
    void data2UnitChange(QString);
    void data3UnitChange(QString);
    void data4UnitChange(QString);
    void data1YAxisChange(int);
    void data2YAxisChange(int);
    void data3YAxisChange(int);
    void data4YAxisChange(int);
    void  data1ColorChange(int,int);
    void  data2ColorChange(int,int);
    void  data3ColorChange(int,int);
    void  data4ColorChange(int,int);
    void y1RangeChange(double,double);
    void y2RangeChange(double,double);
    void y1legendChange(QString);
    void y2legendChange(QString);
    void y1EnableToggled(bool);
    void y2EnableToggled(bool);
    void line1ValueChange(double);
    void line2ValueChange(double);
    void line1EnableToggled(bool);
    void line2EnableToggled(bool);
    void line1axiChange(int);
    void line2axiChange(int);
    void line1ColorChanged(int);
    void line2ColorChanged(int);
    void y1AutoStepChange(bool);
    void y2AutoStepChange(bool);
    void y1DivChanged(double,int);
    void y2DivChanged(double,int);

private slots:

    void on_data1Enable_toggled(bool checked);
    void on_data2Enable_toggled(bool checked);
    void on_data3Enable_toggled(bool checked);
    void on_data4Enable_toggled(bool checked);
    void on_data1Name_textChanged(const QString &arg1);
    void on_data2Name_textChanged(const QString &arg1);
    void on_data3Name_textChanged(const QString &arg1);
    void on_data4Name_textChanged(const QString &arg1);
    void on_data4DataType_currentIndexChanged(int index);
    void on_data1DataType_currentIndexChanged(int index);
    void on_data2DataType_currentIndexChanged(int index);
    void on_data3DataType_currentIndexChanged(int index);
    void on_data1ScaleFactorType_currentIndexChanged(int index);
    void on_data2ScaleFactorType_currentIndexChanged(int index);
    void on_data3ScaleFactorType_currentIndexChanged(int index);
    void on_data4ScaleFactorType_currentIndexChanged(int index);
    void on_data1ScaleFactor_textChanged(const QString &arg1);
    void on_data2ScaleFactor_textChanged(const QString &arg1);
    void on_data3ScaleFactor_textChanged(const QString &arg1);
    void on_data4ScaleFactor_textChanged(const QString &arg1);
    void on_data1Unit_textChanged(const QString &arg1);
    void on_data2Unit_textChanged(const QString &arg1);
    void on_data3Unit_textChanged(const QString &arg1);
    void on_data4Unit_textChanged(const QString &arg1);
    void on_data1Yaxis_currentIndexChanged(int index);
    void on_data2Yaxis_currentIndexChanged(int index);
    void on_data3Yaxis_currentIndexChanged(int index);
    void on_data4Yaxis_currentIndexChanged(int index);
    void on_data1Color_currentIndexChanged(int index);
    void on_data2Color_currentIndexChanged(int index);
    void on_data3Color_currentIndexChanged(int index);
    void on_data4Color_currentIndexChanged(int index);
    void on_y1Min_valueChanged(double arg1);
    void on_y2Min_valueChanged(double arg1);
    void on_y1Max_valueChanged(double arg1);
    void on_y2Max_valueChanged(double arg1);
    void on_y1legend_textChanged(const QString &arg1);
    void on_y2legend_textChanged(const QString &arg1);
    void on_saveNewProfile_clicked();
    void on_profileNameList_currentIndexChanged(const QString &arg1);
    void on_line2Value_valueChanged(double arg1);
    void on_line1Value_valueChanged(double arg1);
    void on_line1Enable_toggled(bool checked);
    void on_line2Enable_clicked(bool checked);
    void on_line1Yaxis_currentIndexChanged(int index);
    void on_line2Yaxis_3_currentIndexChanged(int index);
    void on_line1Color_currentIndexChanged(int index);
    void on_line2Color_currentIndexChanged(int index);
    void on_data1Size_valueChanged(int arg1);
    void on_data2Size_valueChanged(int arg1);
    void on_data3Size_valueChanged(int arg1);
    void on_data4Size_valueChanged(int arg1);
    void on_resetY1Axis_clicked();
    void on_resetY2Axis_clicked();
    void on_saveProfile_clicked();
    void on_y1AutoStep_toggled(bool checked);
    void on_y2AutoStep_toggled(bool checked);
    void on_y1div_valueChanged(double arg1);
    void on_y1SubDiv_valueChanged(int arg1);
    void on_y2div_valueChanged(double arg1);
    void on_y2SubDiv_valueChanged(int arg1);
    void on_setDataIDBtn_clicked();
    void on_setDataFreqBtn_clicked();

    void on_initMainCANBtn_clicked();

private:

    void loadEnumList(void);
    void addNewProfileToList(QString profileName);
    void saveConfig(QString fileName);
    void condigureData1(QString lineStr);
    void condigureData2(QString lineStr);
    void condigureData3(QString lineStr);
    void condigureData4(QString lineStr);

    Ui::config *ui;
    MainCanManager* mainCan;
};

#endif // CONFIG_H
