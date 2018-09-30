#ifndef CONVERTIDOR_H
#define CONVERTIDOR_H

#include "listaenlazada.cpp"
#include <string>
#include <iostream>
class Convertidor
{
private:
    ListaEnlazada<int> enteros;
    ListaEnlazada<int> decimales;
public:
    void generarListas();
    void listaFlotantesBinarios(double, int);
    void decimalTobinario();
    Convertidor();

};

#endif // CONVERTIDOR_H
