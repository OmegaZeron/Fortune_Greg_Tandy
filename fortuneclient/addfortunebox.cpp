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
}

void AddFortuneBox::on_lineEdit_editingFinished()
{
    addFortune = ui->lineEdit->text();
}

void AddFortuneBox::on_lineEdit_returnPressed()
{
    //same as sendButton_clicked()
}
