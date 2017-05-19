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

private:
    Ui::AddFortuneBox *ui;
};

#endif // ADDFORTUNEBOX_H
