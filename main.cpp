#include "mainwindow.h"
#include <QApplication>
#include "convertidor.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int numero=2;
    ListaEnlazada<int> y;

    for(int i=0;i<y.getTam();i++)
        std::cout << y.getPos(i)->getElemento() << std::endl;

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
