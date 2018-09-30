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

    //Esta parte es para el flotante, solo probar que funciona
    //Cabe recalcar que como es solo para probar en consola, se pega aquí al ser ventana xD

  /*  Convertidor convertidorPrueba;
    double numeroFlotante;
         int nLimite;
         cout << "Ingrese el flotante: ";
         cin >> numeroFlotante;
         cout << "\nIngrese el límite: ";
         cin >> nLimite;
         convertidorPrueba.listaFlotantesBinarios(numeroFlotante, nLimite);*/



    return a.exec();
}
