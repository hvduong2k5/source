#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>
#include "registerwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    LoginWindow login;
    login.show();
    RegisterWindow signup;
    signup.show();
    return a.exec();
}
