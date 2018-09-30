#ifndef CONVERTIDOR_H
#define CONVERTIDOR_H

#include "listaenlazada.cpp"
#include <string>
#include <iostream>
#include <math.h>
class Convertidor
{
private:
    ListaEnlazada<int> enteros;
    ListaEnlazada<int> decimales;
<<<<<<< HEAD

public:
=======
public:
    void generarListas();
    void listaFlotantesBinarios(double, int);
    void decimalTobinario();
>>>>>>> 305f9169371e4c355b5361adeb1af69cadd397a7
    Convertidor();

    void generarListas();
    void decimalTobinario(int);
    long binarioToDecimal(ListaEnlazada<int>*);
    ListaEnlazada<int>* getListaEnteros();
    ListaEnlazada<int>* getListaDecimales();
};

#endif // CONVERTIDOR_H
