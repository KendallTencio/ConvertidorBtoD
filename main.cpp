#include "mainwindow.h"
#include <QApplication>
#include "convertidor.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Convertidor g;
    g.decimalTobinario(2);
    std::cout<<g.binarioToDecimal(g.getListaEnteros())<<std::endl;


    return a.exec();
}
