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
    Convertidor convert;
    QString valor=ui->Entrada->text();
    QString limiteStr=ui->limite->text();
    QString resultado;
    if(this->DecABi==true)
    {
        double flotante;
        int limite;
        flotante = valor.toDouble();
        limite = limiteStr.toInt();
        long enteros = (long)flotante;
        long double decimales = flotante - enteros;

        convert.decimalTobinarioEnteros(enteros);
        convert.decimalTobinarioDecimales(decimales, limite);

        resultado = QString::fromStdString(convert.getBinCompleto());
        ui->Resultado->setPlainText(resultado);
    }
    if(this->BiADec==true)
    {

    }

    else
    {
        //Mensaje error
    }

}

void MainWindow::on_DtoB_clicked(bool checked)
{
    if(checked)
    {
    DecABi = true;
    BiADec = false;
    }
}

void MainWindow::on_BtoD_clicked(bool checked)
{
    if(checked)
    {
    DecABi = false;
    BiADec = true;
    }
}
