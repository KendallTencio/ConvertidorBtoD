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

void MainWindow::on_pushButton_clicked()
{
    double flotante;
    int limite;
    QString valor=ui->Entrada->text();
    QString limiteStr=ui->limite->text();
    flotante = valor.toDouble();
    limite = limiteStr.toInt();

    long enteros = (long)flotante;
    long double decimales = flotante - enteros;

    Convertidor convert;
    convert.decimalTobinario(enteros);
    convert.listaFlotantesBinarios(decimales, limite);


}


