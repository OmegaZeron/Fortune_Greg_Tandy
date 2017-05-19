QT += network widgets

HEADERS       = client.h \
    addfortunebox.h
SOURCES       = client.cpp \
                main.cpp \
    addfortunebox.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target

FORMS += \
    addfortunebox.ui
