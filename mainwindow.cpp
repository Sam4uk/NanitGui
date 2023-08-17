#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->SetSerial->setText("Test set testx");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SetSerial_clicked()
{
    ui->textEdit->setText("<b>TEST</b>");
}


void MainWindow::on_Quit_clicked()
{
    MainWindow::close();
}

