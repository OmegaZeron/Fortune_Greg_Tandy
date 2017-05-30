QT += network widgets

HEADERS       = server.h \
    combo.h
SOURCES       = server.cpp \
                main.cpp \
    combo.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneserver
INSTALLS += target
