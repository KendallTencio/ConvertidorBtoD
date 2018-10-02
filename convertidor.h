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
public:
    std::string getBinCompleto();
    void listaFlotantesBinarios(double, int);
    void decimalTobinario();
    Convertidor();

    void decimalTobinario(long);
    long binarioToDecimal(ListaEnlazada<int>*);
    ListaEnlazada<int>* getListaEnteros();
    ListaEnlazada<int>* getListaDecimales();
};

#endif // CONVERTIDOR_H
