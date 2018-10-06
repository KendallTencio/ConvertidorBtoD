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
    void decimalTobinarioEnteros(long numero);
    std::string binarioToDecimal(std::string valor);
    void decimalTobinarioDecimales(double numeroFlotante, int nLimite);
    std::string getBinCompleto();
    double getDecimalCompleto();
    double binarioToDecimalDecimales(ListaEnlazada<int> listaEnlazadaEntrante);
    double binarioToDecimal(ListaEnlazada<int> lista);
    void cargarListas(std::string valor);
    ListaEnlazada<int>* getListaEnteros();
    ListaEnlazada<int>* getListaDecimales();
};

#endif // CONVERTIDOR_H
