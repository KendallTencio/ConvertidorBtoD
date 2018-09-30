#include "mainwindow.h"
#include <QApplication>
#include "convertidor.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int numero=2;
    ListaEnlazada<int> y;

    for(int i=0;i<y.getTam();i++)
        std::cout << y.getPos(i)->getElemento() << std::endl;


    return a.exec();
}
