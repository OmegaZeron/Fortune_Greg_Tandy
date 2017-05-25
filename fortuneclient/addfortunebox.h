#ifndef ADDFORTUNEBOX_H
#define ADDFORTUNEBOX_H

#include <QWidget>
#include "client.h"

namespace Ui {
class AddFortuneBox;
}

class AddFortuneBox : public QWidget
{
    Q_OBJECT

public:
    explicit AddFortuneBox(QWidget *parent = 0);
    ~AddFortuneBox();
    AddFortuneBox* AddFortuneBox_ptr = NULL;

private slots:
    void on_cancelButton_clicked();

    void on_sendButton_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_returnPressed();

    void on_lineEdit_textEdited(const QString);

signals:
    void enterEntered();
    void sendNewFortune(QString);

private:
    Ui::AddFortuneBox *ui;
    QString addFortune;
};

#endif // ADDFORTUNEBOX_H
