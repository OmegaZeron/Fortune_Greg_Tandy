#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QTcpSocket>
#include <QDataStream>
#include <QTcpServer>

class QComboBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QNetworkSession;

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = Q_NULLPTR);

private slots:
    void requestNewFortune();
    void setNewFortune();
    void addNewFortune();
    void readFortune();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableGetFortuneButton();
    void enableAddButton();
    void sessionOpened();

private:
    QComboBox *hostCombo;
    QLineEdit *portLineEdit;
    QLineEdit *addLineEdit;
    QPushButton *addButton;
    QLabel *statusLabel;
    QLabel *successLabel;
    QPushButton *getFortuneButton;
    QString newFortune;

    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
    QDataStream in;
    QDataStream out;
    QString currentFortune;

    QNetworkSession *networkSession;
};

#endif
