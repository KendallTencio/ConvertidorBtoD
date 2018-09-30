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
    void generarListas();
    void decimalTobinario();
public:
    Convertidor();

};

#endif // CONVERTIDOR_H
