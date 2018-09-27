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
    int v[50],x, i=0;
    bool ok;
    QString y = ui->lineEdit->displayText();
    //x = y.toInt();
    do{
        v[i]=x%2;
        x=x/2;
        i++;
    } while(x!=0);
    for (int t=i;t<50;t++){
        v[t]=9;
    }
    /*for (i=49;i>=0;i--){
        if(v[i]==0) resultado = ""+v[i];
        if(v[i]==1) resultado = ""+v[i];
    }*/
    //string hola = "hola";
   // ui->lineEdit->getText();  ??????????
    ui->label->setText(y);
}

