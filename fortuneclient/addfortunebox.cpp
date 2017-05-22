#include "addfortunebox.h"
#include "ui_addfortunebox.h"

AddFortuneBox::AddFortuneBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddFortuneBox)
{
    ui->setupUi(this);
    ui->sendButton->setEnabled(false);
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
    ui->sendButton->setEnabled(false);
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit->setText("");
    ui->lineEdit->setPlaceholderText(addFortune);

    // need to make this wait until server accepts in case of connection error
    ui->lineEdit->setText("");
    ui->confirmLabel->setText("Fortune Added!");
    ui->lineEdit->setReadOnly(false);
    ui->lineEdit->setPlaceholderText("");

    // in case it fails
    ui->lineEdit->setPlaceholderText("");
    ui->lineEdit->setText(addFortune);
    ui->lineEdit->setReadOnly(false);

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);

    out << addFortune;
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
    ui->sendButton->setEnabled(false);
}

void AddFortuneBox::on_lineEdit_textChanged(const QString &arg1)
{
    ui->confirmLabel->setText("");
    ui->sendButton->setEnabled(true);
}
