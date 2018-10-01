#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnConvertir_clicked()
{
    double flotante;
    QString valor=ui->Entrada->text();
    flotante=valor.toDouble();
    std::string to_string(int flotante );
    ui->Entrada->setText();



}
