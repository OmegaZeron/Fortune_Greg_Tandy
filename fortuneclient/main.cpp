#include <QApplication>
#include "client.h"
#include "addfortunebox.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGuiApplication::setApplicationDisplayName(Client::tr("Fortune Client"));
    Client client;
    Client* client_ptr = &client;
    AddFortuneBox addFortuneBox;
    AddFortuneBox* addFortuneBox_ptr = &addFortuneBox;
    QObject::connect(addFortuneBox_ptr, SIGNAL(&sendNewFortune(QString)), client_ptr, SLOT(&sendNewFortune(QString)));
    client.AddFortuneBox_ptr = &addFortuneBox;
    client.show();
    return app.exec();
}
