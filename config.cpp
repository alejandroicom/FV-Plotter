#include "config.h"
#include "ui_config.h"

#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include "ColorDefs.h"

config::config(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);

    loadEnumList();
    loadProfailList();

    mainCan = new MainCanManager();
}

config::~config()
{
    delete ui;
}

void config::loadEnumList(void)
{
    /*MAIN*/
    ui->mainCanBaudRate->addItem("250Kbps"); /*0*/
    ui->mainCanBaudRate->addItem("800Kbps");
    ui->mainCanModule->addItem("SystecCAN"); /*0*/
    ui->mainCanModule->addItem("PeakCAN");
}


void config::on_data1Enable_toggled(bool checked)
{
    emit data1EnableToggled(checked);
}

void config::on_data2Enable_toggled(bool checked)
{
    emit data2EnableToggled(checked);
}

void config::on_data3Enable_toggled(bool checked)
{
    emit data3EnableToggled(checked);
}

void config::on_data4Enable_toggled(bool checked)
{
    emit data4EnableToggled(checked);
}

void config::on_data1Name_textChanged(const QString &arg1)
{
    emit data1NameTextChanged(arg1);
}

void config::on_data2Name_textChanged(const QString &arg1)
{
    emit data2NameTextChanged(arg1);
}

void config::on_data3Name_textChanged(const QString &arg1)
{
    emit data3NameTextChanged(arg1);
}

void config::on_data4Name_textChanged(const QString &arg1)
{
    emit data4NameTextChanged(arg1);
}

void config::on_data1DataType_currentIndexChanged(int index)
{
    emit data1DataTypeChange(index);
}

void config::on_data2DataType_currentIndexChanged(int index)
{
    emit data2DataTypeChange(index);
}

void config::on_data3DataType_currentIndexChanged(int index)
{
    emit data3DataTypeChange(index);
}

void config::on_data4DataType_currentIndexChanged(int index)
{
    emit data4DataTypeChange(index);
}

void config::on_data1ScaleFactorType_currentIndexChanged(int index)
{
    emit data1ScaleFactorTypeChange(index);
    if (index == SF_Custom)
    {
        ui->Q1->setVisible(false);
    }
    else
    {
        ui->Q1->setVisible(true);
    }
}

void config::on_data2ScaleFactorType_currentIndexChanged(int index)
{
    emit data2ScaleFactorTypeChange(index);
    if (index == SF_Custom)
    {
        ui->Q2->setVisible(false);
    }
    else
    {
        ui->Q2->setVisible(true);
    }
}

void config::on_data3ScaleFactorType_currentIndexChanged(int index)
{
    emit data3ScaleFactorTypeChange(index);
    if (index == SF_Custom)
    {
        ui->Q3->setVisible(false);
    }
    else
    {
        ui->Q3->setVisible(true);
    }
}

void config::on_data4ScaleFactorType_currentIndexChanged(int index)
{
    emit data4ScaleFactorTypeChange(index);
    if (index == SF_Custom)
    {
        ui->Q4->setVisible(false);
    }
    else
    {
        ui->Q4->setVisible(true);
    }
}

void config::on_data1ScaleFactor_textChanged(const QString &arg1)
{
    emit data1ScaleFactorChange(arg1);
}

void config::on_data2ScaleFactor_textChanged(const QString &arg1)
{
    emit data2ScaleFactorChange(arg1);
}

void config::on_data3ScaleFactor_textChanged(const QString &arg1)
{
    emit data3ScaleFactorChange(arg1);
}

void config::on_data4ScaleFactor_textChanged(const QString &arg1)
{
    emit data4ScaleFactorChange(arg1);
}

void config::on_data1Unit_textChanged(const QString &arg1)
{
    emit data1UnitChange(arg1);
}

void config::on_data2Unit_textChanged(const QString &arg1)
{
    emit data2UnitChange(arg1);
}

void config::on_data3Unit_textChanged(const QString &arg1)
{
    emit data3UnitChange(arg1);
}

void config::on_data4Unit_textChanged(const QString &arg1)
{
   emit data4UnitChange(arg1);
}

void config::on_data1Yaxis_currentIndexChanged(int index)
{
    emit data1YAxisChange(index);
}

void config::on_data2Yaxis_currentIndexChanged(int index)
{
    emit data2YAxisChange(index);
}

void config::on_data3Yaxis_currentIndexChanged(int index)
{
    emit data3YAxisChange(index);
}

void config::on_data4Yaxis_currentIndexChanged(int index)
{
    emit data4YAxisChange(index);
}

void config::on_data1Color_currentIndexChanged(int index)
{

    emit  data1ColorChange(index,ui->data1Size->value());
}

void config::on_data2Color_currentIndexChanged(int index)
{
    emit  data2ColorChange(index,ui->data2Size->value());
}

void config::on_data3Color_currentIndexChanged(int index)
{
    emit  data3ColorChange(index,ui->data3Size->value());
}

void config::on_data4Color_currentIndexChanged(int index)
{
    emit  data4ColorChange(index,ui->data4Size->value());
}

void config::on_y1Min_valueChanged(double arg1)
{
    emit y1RangeChange(arg1,ui->y1Max->value());
}

void config::on_y2Min_valueChanged(double arg1)
{
    emit y2RangeChange(arg1,ui->y2Max->value());
}

void config::on_y1Max_valueChanged(double arg1)
{
    emit y1RangeChange(ui->y1Min->value(),arg1);
}

void config::on_y2Max_valueChanged(double arg1)
{
    emit y2RangeChange(ui->y2Min->value(),arg1);
}

void config::on_y1legend_textChanged(const QString &arg1)
{
    emit y1legendChange(arg1);
}

void config::on_y2legend_textChanged(const QString &arg1)
{
    emit y2legendChange(arg1);
}


void config::saveConfig(QString fileName)
{
    QFile file (fileName);


      if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
      {
            qDebug() << fileName;
            QMessageBox msgBox;
            msgBox.setText("Error saveConfig: "+file.errorString());
            msgBox.exec();
      }
      else
      {

          QString data1Config =
                  QString::number(ui->data1Enable->isChecked()) + ";"+
                  ui->data1Name->text() + ";"+
                  ui->data1ScaleFactor->text() + ";" +
                  ui->data1Unit->text() + ";" +
                  QString::number(ui->data1ScaleFactorType->currentIndex()) + ";" +
                  QString::number(ui->data1DataType->currentIndex()) + ";"+
                  QString::number(ui->data1Color->currentIndex()) + ";" +
                  QString::number(ui->data1Yaxis->currentIndex()) + ";\n";


          std::string str = data1Config.toStdString();
          file.write(str.c_str());
          file.flush();

          QString data2Config =
                  QString::number(ui->data2Enable->isChecked()) + ";"+
                  ui->data2Name->text() + ";"+
                  ui->data2ScaleFactor->text() + ";" +
                  ui->data2Unit->text() + ";" +
                  QString::number(ui->data2ScaleFactorType->currentIndex()) + ";" +
                  QString::number(ui->data2DataType->currentIndex()) + ";"+
                  QString::number(ui->data2Color->currentIndex()) + ";" +
                  QString::number(ui->data2Yaxis->currentIndex()) + ";\n";

          std::string str2 = data2Config.toStdString();
          file.write(str2.c_str());
          file.flush();

          QString data3Config =
                  QString::number(ui->data3Enable->isChecked()) + ";"+
                  ui->data3Name->text() + ";"+
                  ui->data3ScaleFactor->text() + ";" +
                  ui->data3Unit->text() + ";" +
                  QString::number(ui->data3ScaleFactorType->currentIndex()) + ";" +
                  QString::number(ui->data3DataType->currentIndex()) + ";"+
                  QString::number(ui->data3Color->currentIndex()) + ";" +
                  QString::number(ui->data3Yaxis->currentIndex()) + ";\n";


          std::string str3 = data3Config.toStdString();
          file.write(str3.c_str());
          file.flush();

          QString data4Config =
                  QString::number(ui->data4Enable->isChecked()) + ";"+
                  ui->data4Name->text() + ";"+
                  ui->data4ScaleFactor->text() + ";" +
                  ui->data4Unit->text() + ";" +
                  QString::number(ui->data4ScaleFactorType->currentIndex()) + ";" +
                  QString::number(ui->data4DataType->currentIndex()) + ";"+
                  QString::number(ui->data4Color->currentIndex()) + ";" +
                  QString::number(ui->data4Yaxis->currentIndex()) + ";\n";

          std::string str4 = data4Config.toStdString();
          file.write(str4.c_str());
          file.flush();

          QMessageBox msgBox;
          msgBox.setIcon(QMessageBox::Information);
          msgBox.setText("Perfil guardado con éxito");
          msgBox.exec();

          file.close();
      }
}
void config::on_saveProfile_clicked()
{
    saveConfig(ui->profileNameList->currentText());
}

void config::on_saveNewProfile_clicked()
{
    saveConfig(ui->newProfileName->text());
    addNewProfileToList(ui->newProfileName->text());
    ui->profileNameList->addItem(ui->newProfileName->text());


}

void config::addNewProfileToList(QString profileName)
{
    QFile file ("profileList.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
    {
          QMessageBox msgBox;
          msgBox.setText("Error addNewProfileToList: "+file.errorString());
          msgBox.exec();
    }
    else
    {
        file.write((profileName+"\n").toStdString().c_str());
        file.flush();
        file.close();
    }
}

void config::loadProfailList(void)
{
    ui->profileNameList->clear();
    QFile file ("profileList.txt");

      if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
      {
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setText("Error loadProfailList : "+file.errorString());
            msgBox.exec();
      }
      else
      {
          while (!file.atEnd()) {
                  QByteArray line = file.readLine();
                  line.remove(line.size()-1,1);
                  ui->profileNameList->addItem(QString(line));
              }
        file.close();
      }
}

void config::on_profileNameList_currentIndexChanged(const QString &arg1)
{

  QFile file (arg1);
  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
  {
        QMessageBox msgBox;
        msgBox.setText("Error: "+file.errorString());
        msgBox.exec();
  }
  else
  {
      int i = 0;
      while (!file.atEnd())
      {
             QByteArray line = file.readLine();
             line.remove(line.size()-1,1);
             QString lineStr = QString(line);

             switch(i)
             {
                case 0:
                    condigureData1(lineStr);
                    break;
                 case 1:
                    condigureData2(lineStr);
                     break;
                 case 2:
                    condigureData3(lineStr);
                     break;
                 case 3:
                    condigureData4(lineStr);
                     break;
                 default:
                    break;
             }
             i++;
          }
    file.close();
  }
}
void config::condigureData1(QString lineStr)
{
    QStringList elements = lineStr.split(";");
    ui->data1Enable->setChecked((bool)elements[0].toInt());
    ui->data1Name->setText(elements[1]);
    ui->data1ScaleFactor->setText(elements[2]);
    ui->data1Unit->setText(elements[3]);
    ui->data1ScaleFactorType->setCurrentIndex(elements[4].toInt());
    ui->data1DataType->setCurrentIndex(elements[5].toInt());
    ui->data1Color->setCurrentIndex(elements[6].toInt());
    ui->data1Yaxis->setCurrentIndex(elements[7].toInt());

    emit  data1EnableToggled(ui->data1Enable->isChecked());
    emit  data1NameTextChanged(ui->data1Name->text());
    emit  data1DataTypeChange(ui->data1DataType->currentIndex());
    emit  data1ScaleFactorTypeChange(ui->data1ScaleFactorType->currentIndex());
    emit  data1ScaleFactorChange(ui->data1ScaleFactor->text());
    emit  data1UnitChange(ui->data1Unit->text());
    emit  data1YAxisChange(ui->data1Yaxis->currentIndex());
    emit  data1ColorChange(ui->data1Color->currentIndex(),ui->data1Size->value());
}

void config::condigureData2(QString lineStr)
{
    QStringList elements = lineStr.split(";");
    ui->data2Enable->setChecked((bool)elements[0].toInt());
    ui->data2Name->setText(elements[1]);
    ui->data2ScaleFactor->setText(elements[2]);
    ui->data2Unit->setText(elements[3]);
    ui->data2ScaleFactorType->setCurrentIndex(elements[4].toInt());
    ui->data2DataType->setCurrentIndex(elements[5].toInt());
    ui->data2Color->setCurrentIndex(elements[6].toInt());
    ui->data2Yaxis->setCurrentIndex(elements[7].toInt());

    emit  data2EnableToggled(ui->data2Enable->isChecked());
    emit  data2NameTextChanged(ui->data2Name->text());
    emit  data2DataTypeChange(ui->data2DataType->currentIndex());
    emit  data2ScaleFactorTypeChange(ui->data2ScaleFactorType->currentIndex());
    emit  data2ScaleFactorChange(ui->data2ScaleFactor->text());
    emit  data2UnitChange(ui->data2Unit->text());
    emit  data2YAxisChange(ui->data2Yaxis->currentIndex());
    emit  data2ColorChange(ui->data2Color->currentIndex(),ui->data4Size->value());
}
void config::condigureData3(QString lineStr)
{
    QStringList elements = lineStr.split(";");
    ui->data3Enable->setChecked((bool)elements[0].toInt());
    ui->data3Name->setText(elements[1]);
    ui->data3ScaleFactor->setText(elements[2]);
    ui->data3Unit->setText(elements[3]);
    ui->data3ScaleFactorType->setCurrentIndex(elements[4].toInt());
    ui->data3DataType->setCurrentIndex(elements[5].toInt());
    ui->data3Color->setCurrentIndex(elements[6].toInt());
    ui->data3Yaxis->setCurrentIndex(elements[7].toInt());

    emit  data3EnableToggled(ui->data3Enable->isChecked());
    emit  data3NameTextChanged(ui->data3Name->text());
    emit  data3DataTypeChange(ui->data3DataType->currentIndex());
    emit  data3ScaleFactorTypeChange(ui->data3ScaleFactorType->currentIndex());
    emit  data3ScaleFactorChange(ui->data3ScaleFactor->text());
    emit  data3UnitChange(ui->data3Unit->text());
    emit  data3YAxisChange(ui->data3Yaxis->currentIndex());
    emit  data3ColorChange(ui->data3Color->currentIndex(),ui->data4Size->value());

}
void config::condigureData4(QString lineStr)
{
    QStringList elements = lineStr.split(";");
    ui->data4Enable->setChecked((bool)elements[0].toInt());
    ui->data4Name->setText(elements[1]);
    ui->data4ScaleFactor->setText(elements[2]);
    ui->data4Unit->setText(elements[3]);
    ui->data4ScaleFactorType->setCurrentIndex(elements[4].toInt());
    ui->data4DataType->setCurrentIndex(elements[5].toInt());
    ui->data4Color->setCurrentIndex(elements[6].toInt());
    ui->data4Yaxis->setCurrentIndex(elements[7].toInt());

    emit  data4EnableToggled(ui->data4Enable->isChecked());
    emit  data4NameTextChanged(ui->data4Name->text());
    emit  data4DataTypeChange(ui->data4DataType->currentIndex());
    emit  data4ScaleFactorTypeChange(ui->data4ScaleFactorType->currentIndex());
    emit  data4ScaleFactorChange(ui->data4ScaleFactor->text());
    emit  data4UnitChange(ui->data4Unit->text());
    emit  data4YAxisChange(ui->data4Yaxis->currentIndex());
    emit  data4ColorChange(ui->data4Color->currentIndex(),ui->data4Size->value());


}



void config::on_line2Value_valueChanged(double arg1)
{
    emit line2ValueChange(arg1);
}

void config::on_line1Value_valueChanged(double arg1)
{
    qDebug() <<"CONFIG on_line1Value_valueChanged";
    emit line1ValueChange(arg1);
}

void config::on_line1Enable_toggled(bool checked)
{
    emit line1EnableToggled(checked);
}

void config::on_line2Enable_clicked(bool checked)
{
    emit line2EnableToggled(checked);
}

void config::on_line1Yaxis_currentIndexChanged(int index)
{
     emit line1axiChange(index);
}

void config::on_line2Yaxis_3_currentIndexChanged(int index)
{
     emit line2axiChange(index);
}

void config::on_line1Color_currentIndexChanged(int index)
{
     emit line1ColorChanged(index);
}

void config::on_line2Color_currentIndexChanged(int index)
{
     emit line2ColorChanged(index);
}

void config::on_data1Size_valueChanged(int arg1)
{
     emit  data1ColorChange(ui->data1Color->currentIndex(),arg1);
}

void config::on_data2Size_valueChanged(int arg1)
{
  emit  data2ColorChange(ui->data2Color->currentIndex(),arg1);
}

void config::on_data3Size_valueChanged(int arg1)
{
  emit  data3ColorChange(ui->data3Color->currentIndex(),arg1);
}

void config::on_data4Size_valueChanged(int arg1)
{
   emit  data4ColorChange(ui->data4Color->currentIndex(),arg1);
}

void config::on_resetY1Axis_clicked()
{
   emit y1RangeChange(ui->y1Min->value(),ui->y1Max->value());
}

void config::on_resetY2Axis_clicked()
{
    emit y2RangeChange(ui->y2Min->value(),ui->y2Max->value());
}

void config::on_y1AutoStep_toggled(bool checked)
{
    if (checked)
    {
        ui->y1div->setEnabled(false);
        ui->y1SubDiv->setEnabled(false);
    }
    else
    {
        ui->y1div->setEnabled(true);
        ui->y1SubDiv->setEnabled(true);
    }
    emit y1AutoStepChange(checked);
    emit y1DivChanged(ui->y1div->value(),ui->y1SubDiv->value());
}

void config::on_y2AutoStep_toggled(bool checked)
{
    if (checked)
    {
        ui->y2div->setEnabled(false);
        ui->y2SubDiv->setEnabled(false);
    }
    else
    {
        ui->y2div->setEnabled(true);
        ui->y2SubDiv->setEnabled(true);
    }
    emit y2AutoStepChange(checked);
    emit y2DivChanged(ui->y2div->value(),ui->y2SubDiv->value());
}

void config::on_y1div_valueChanged(double arg1)
{
  emit y1DivChanged(arg1,ui->y1SubDiv->value());
}

void config::on_y1SubDiv_valueChanged(int arg1)
{
   emit y1DivChanged(ui->y1div->value(),arg1);
}

void config::on_y2div_valueChanged(double arg1)
{
  emit y2DivChanged(arg1,ui->y2SubDiv->value());
}

void config::on_y2SubDiv_valueChanged(int arg1)
{
  emit y2DivChanged(ui->y2div->value(),arg1);
}

void config::on_setDataIDBtn_clicked()
{

}

void config::on_setDataFreqBtn_clicked()
{

}

void config::on_initMainCANBtn_clicked()
{
    mainCan->setBaudRate((CANBaudRates)ui->mainCanBaudRate->currentIndex());
    mainCan->setCANidDevice(ui->mainCanID->value());
    mainCan->setModule((CANModuleType) ui->mainCanModule->currentIndex());

    if (mainCan->init())
    {
       mainCan->start();
       ui->mainCANStatus->setText("CONNECTED");
       setTextColor(ui->mainCANStatus,TEXT_COLOR_GREEN);
    }
    else
    {
       ui->mainCANStatus->setText("ERROR");
       setTextColor(ui->mainCANStatus,TEXT_COLOR_RED);
    }
}

MainCanManager* config::getCanManager(void)
{
    return this->mainCan;
}

