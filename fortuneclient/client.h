#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QTcpSocket>
#include <QDataStream>
#include "addfortunebox.h"

class QComboBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QNetworkSession;
class AddFortuneBox; // solved syntax errors, but caused linker errors...

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = Q_NULLPTR);
    AddFortuneBox* AddFortuneBox_ptr = NULL;

public slots:
//    void sendNewFortune(QString);
void sendNewFortune();

private slots:
    void requestNewFortune();
    void readFortune();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableGetFortuneButton();
    void sessionOpened();
    void openFortuneSendBox();


private:
    QComboBox *hostCombo;
    QLineEdit *portLineEdit;
    QLabel *statusLabel;
    QPushButton *addFortuneButton;
    QPushButton *getFortuneButton;

    QTcpSocket *tcpSocket;
    QDataStream in;
    QString currentFortune;

    QNetworkSession *networkSession;
};

#endif
