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

public:
    Convertidor();

    void generarListas();
    void decimalTobinario(int);
    long binarioToDecimal(ListaEnlazada<int>*);
    ListaEnlazada<int>* getListaEnteros();
    ListaEnlazada<int>* getListaDecimales();
};

#endif // CONVERTIDOR_H
