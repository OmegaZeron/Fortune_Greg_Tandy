#ifndef ADDFORTUNEBOX_H
#define ADDFORTUNEBOX_H

#include <QWidget>

namespace Ui {
class AddFortuneBox;
}

class AddFortuneBox : public QWidget
{
    Q_OBJECT

public:
    explicit AddFortuneBox(QWidget *parent = 0);
    ~AddFortuneBox();

private slots:
    void on_cancelButton_clicked();

    void on_sendButton_clicked();

    void on_lineEdit_editingFinished();

private:
    Ui::AddFortuneBox *ui;
    QString addFortune;
};

#endif // ADDFORTUNEBOX_H
