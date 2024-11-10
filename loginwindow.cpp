#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color: #CCFFFF	;");  // Màu lam nhạt

}

LoginWindow::~LoginWindow()
{
    delete ui;
}
