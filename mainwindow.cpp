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
    if(!esNumero(valor.toStdString()))
        resultado = QString::fromStdString("Ingrese únicamente números");
    else
    {
        double flotante;
        int limite;
        flotante = valor.toDouble();
        limite = limiteStr.toInt();
        long enteros = (long)flotante;
        long double decimales = flotante - enteros;
        if(this->DecABi)
        {
            if(this->cantdigitos(valor.toStdString()+".")<=9){
                convert.decimalTobinarioEnteros(enteros);
                convert.decimalTobinarioDecimales(decimales, limite);

               resultado = QString::fromStdString(convert.getBinCompleto());
            }
            else
            {
                resultado = QString::fromStdString("OverFlow de Entero");
            }
        }
        else if(this->BiADec)
        {
            string numeroBiADec = valor.toStdString();
            if(esBinario(numeroBiADec)){
                convert.cargarListas(numeroBiADec);
                resultado = QString::fromStdString(std::to_string(convert.getDecimalCompleto()));
            }
            else
                resultado = QString::fromStdString("Error de Base");
            }
        else
        {
            resultado = QString::fromStdString("Seleccione una opcion");
        }
     }
     ui->Resultado->setPlainText(resultado);
}

bool MainWindow::esBinario(string numero){
    for(int indice=0;numero[indice]!='\0';indice++)
        if (numero[indice]!='0' && numero[indice]!='1' &&  numero[indice]!='.')
            return false;
    return true;
}

bool MainWindow::esNumero(string numero){
    for(int indice=0;numero[indice]!='\0';indice++)
        if (numero[indice]!='0' && numero[indice]!='1' &&  numero[indice]!='2' &&  numero[indice]!='3' &&  numero[indice]!='4' &&  numero[indice]!='5' &&  numero[indice]!='6' &&  numero[indice]!='7' &&  numero[indice]!='8' &&  numero[indice]!='9' && numero[indice]!='.')
            return false;
    return true;
}
int MainWindow::cantdigitos(string numero){
    int indice=0;
    for(;numero[indice]!='.';)indice++;
    return indice;
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
