#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #FFDDC1;");  // Màu cam nhạt

}

MainWindow::~MainWindow()
{
    delete ui;
}

