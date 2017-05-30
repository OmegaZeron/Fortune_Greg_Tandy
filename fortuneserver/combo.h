#ifndef COMBO_H
#define COMBO_H

#include <QDialog>
#include <QTcpSocket>
#include <QDataStream>
#include <QTcpServer>

class QComboBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QTcpServer;
class QNetworkSession;

class Combo : public QDialog
{
    Q_OBJECT

public:
    explicit Combo(QWidget *parent = Q_NULLPTR);

private slots:
    void sessionOpened();
    void sendFortune();
    void addNewFortune();
    void requestNewFortune();
    void setNewFortune();
    void addNewFortune();
    void readFortune();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableGetFortuneButton();
    void enableAddButton();
    void sessionOpened();
private:
    QLabel *statusLabel;
    QTcpServer *tcpServer;
    QStringList fortunes;
    QNetworkSession *networkSession;
    QDataStream in;
    QComboBox *hostCombo;
    QLineEdit *portLineEdit;
    QLineEdit *addLineEdit;
    QPushButton *addButton;
    QLabel *statusLabel;
    QLabel *successLabel;
    QPushButton *getFortuneButton;
    QString newFortune;
    QString tempFortune;

    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
    QDataStream in;
    QDataStream out;
    QString currentFortune;

    QNetworkSession *networkSession;
    int fortuneStop = 0;
};

#endif // COMBO_H
