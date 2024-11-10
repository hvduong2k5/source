#include "registerwindow.h"
#include "ui_registerwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #CCFFFF	;");  // Màu lam nhạt

}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
