#include <QApplication>
#include <string.h>
#include "../include/mainWindow.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    mainWindow mainWin;
    mainWin.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    return app.exec();
}