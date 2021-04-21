#include "pindialog.h"
#include "ui_pindialog.h"

PINDialog::PINDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PINDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setMaxLength(4);
}



PINDialog::~PINDialog()
{
    qDebug() << "PINCode dialog suljettu ja UI tuhottu";
    delete ui;
}

QString PINDialog::returnPIN()
{
    return valuePIN;
}


void PINDialog::on_pushButton_1_clicked()
{
    valuePIN = valuePIN + "1";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_2_clicked()
{
    valuePIN = valuePIN + "2";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_3_clicked()
{
    valuePIN = valuePIN + "3";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_4_clicked()
{
    valuePIN = valuePIN + "4";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_5_clicked()
{
    valuePIN = valuePIN + "5";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_6_clicked()
{
    valuePIN = valuePIN + "6";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_7_clicked()
{
    valuePIN = valuePIN + "7";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_8_clicked()
{
    valuePIN = valuePIN + "8";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_9_clicked()
{
    valuePIN = valuePIN + "9";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_0_clicked()
{
    valuePIN = valuePIN + "0";
    ui->lineEdit->setText(valuePIN);
}

void PINDialog::on_pushButton_OK_clicked()
{
    this->close();
}

void PINDialog::on_pushButton_Peruuta_clicked()
{
    this->close();
}
