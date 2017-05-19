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
