#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    double flotante;
    int limite;
    flotante = valor.toDouble();
    limite = limiteStr.toInt();
    long enteros = (long)flotante;
    long double decimales = flotante - enteros;
    if(this->DecABi){
        convert.decimalTobinarioEnteros(enteros);
        convert.decimalTobinarioDecimales(decimales, limite);

        resultado = QString::fromStdString(convert.getBinCompleto());

    }else if(this->BiADec){
        string numeroBiADec = valor.toStdString();
        if(esBinario(numeroBiADec)){
            convert.cargarListas(numeroBiADec);
            resultado = QString::fromStdString(std::to_string(convert.getDecimalCompleto()));
        }
        else
            resultado = QString::fromStdString("Error de Base");

    }else{
         resultado = QString::fromStdString("Seleccione una opcion");
    }
    ui->Resultado->setPlainText(resultado);
}

bool MainWindow::esBinario(string numero){
    for(int indice=0;numero[indice]!='\0';indice++)
        if (numero[indice]!='0' && numero[indice]!='1' &&  numero[indice]!='.')
            return false;
    return true;
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
