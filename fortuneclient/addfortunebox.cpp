#include "addfortunebox.h"
#include "ui_addfortunebox.h"

AddFortuneBox::AddFortuneBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddFortuneBox)
{
    ui->setupUi(this);
}

AddFortuneBox::~AddFortuneBox()
{
    delete ui;
}

void AddFortuneBox::on_cancelButton_clicked()
{
    close();
}

void AddFortuneBox::on_sendButton_clicked()
{
    //server QDataStream fortunes << addFortune stuff
    ui->lineEdit->setText("");
    ui->confirmLabel->setText("Fortune Added!"); // need to make this wait until server accepts in case of connection error
}

void AddFortuneBox::on_lineEdit_editingFinished()
{
    addFortune = ui->lineEdit->text();
}

void AddFortuneBox::on_lineEdit_returnPressed()
{
    //same as sendButton_clicked()
    ui->lineEdit->setText("");
    ui->confirmLabel->setText("Fortune Added!"); // need to make this wait until server accepts in case of connection error
}

void AddFortuneBox::on_lineEdit_textChanged(const QString &arg1)
{
    ui->confirmLabel->setText("");
}
