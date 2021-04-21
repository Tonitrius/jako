#ifndef PINDIALOG_H
#define PINDIALOG_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class PINDialog;
}

class PINDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PINDialog(QWidget *parent = 0);
    ~PINDialog();
    QString returnPIN();

private slots:


    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_OK_clicked();

    void on_pushButton_Peruuta_clicked();

private:
    Ui::PINDialog *ui;
    QString valuePIN;
};

#endif // PINDIALOG_H
