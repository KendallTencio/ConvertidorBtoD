#include "convertidor.h"

using namespace std;

Convertidor::Convertidor()
{

}

void Convertidor::decimalTobinarioEnteros(long numero){
    ListaEnlazada<int> listaEnterosBi;
    int c = 0;
    while(numero>0){
        if (numero%2 == 0)
        {
           this->enteros.insertarCabeza(0);

        }
        else
        {
            this->enteros.insertarCabeza(1);
        }
        numero=numero/2;
        c++;
    }

}

void Convertidor::cargarListas(string valor){
    bool banderaComa=false;
    for (int indice=0; valor.length()>indice;indice++){
        char numerochar= valor[indice];

        if (banderaComa)
            decimales.insertarFinal((int) numerochar- '0');
        if (numerochar == '.')
            banderaComa=true;
        if (!banderaComa)
            enteros.insertarFinal((int) numerochar- '0');
    }

}

void Convertidor::decimalTobinarioDecimales(double numeroFlotante, int nLimite){
    ListaEnlazada<int> listaFloatBi;
    while(nLimite != 0){
        this->decimales.insertarFinal((int)(numeroFlotante*2));
        numeroFlotante = (numeroFlotante*2) - (int)(numeroFlotante*2);
        nLimite--;
    }

}

std::string Convertidor::getBinCompleto()
{
    std::string lista;

    for(int i=0;i<enteros.getTam();i++)
        lista += std::to_string(this->enteros.getPos(i)->getElemento());
    lista+=".";
    for(int i=0;i<decimales.getTam();i++)
        lista += std::to_string(this->decimales.getPos(i)->getElemento());

    return lista;
}

double Convertidor::getDecimalCompleto()
{
    double lista;
    lista=(binarioToDecimal(enteros)+binarioToDecimalDecimales(decimales));
    return lista;
}

double Convertidor::binarioToDecimalDecimales(ListaEnlazada<int> listaEnlazadaEntrante)
{

    int indice = listaEnlazadaEntrante.getTam()-1;
    double resultado = 0.0;
    int posicion = -1*(listaEnlazadaEntrante.getTam());
        while(indice != -1)
        {
           int numBinario = listaEnlazadaEntrante.getPos(indice)->getElemento();     //Obteniendo la posicion 0.0, luego 0.00, luego 0.000... 0.0000000
            std::cout << listaEnlazadaEntrante.getPos(indice)->getElemento()<<endl;
                         //numBinario puede ser 0 o 1
           if(numBinario == 1)
               resultado += pow(2,posicion);         //siendo que posicion sea de -1 a infinito

           posicion++;
           indice--;
        }

         return resultado;
}

//1 1 0 0
double Convertidor::binarioToDecimal(ListaEnlazada<int> lista){
    int indice=lista.getTam()-1;
    int exponente = 0;
    double numero=0;
    while(indice >= 0){
        if(lista.getPos(indice)->getElemento() == 1)
            numero+=pow(2 , exponente);

        exponente++;
        indice--;
    }
     return numero ;
}
ListaEnlazada<int>* Convertidor::getListaDecimales(){
    return &decimales;
}
ListaEnlazada<int>* Convertidor::getListaEnteros(){
    return &enteros;
}
