#include <QApplication>
#include "client.h"
#include "addfortunebox.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGuiApplication::setApplicationDisplayName(Client::tr("Fortune Client"));
    Client client;
    AddFortuneBox addFortuneBox;
//    QObject::connect(&addFortuneBox, SIGNAL(enterEntered()), &addFortuneBox, SLOT(on_sendButton_clicked()));
    client.AddFortuneBox_ptr = &addFortuneBox;
    client.show();
    return app.exec();
}
