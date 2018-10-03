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
           //cout<<"0";
        }
        else
        {
            this->enteros.insertarCabeza(1);
            //cout<<"1";
        }
        numero=numero/2;
        c++;
    }

}

long Convertidor::binarioToDecimal(ListaEnlazada<int>* lista){
    int exponente=0;
    long numero=0;
    while(lista->isVacia()){
        numero=pow(lista->getCabeza()->getElemento()*2,exponente);
        lista->EliminarPos(0);
    }
     return numero ;
}

void Convertidor::decimalTobinarioDecimales(double numeroFlotante, int nLimite){
    ListaEnlazada<int> listaFloatBi;
    while(nLimite != 0){
        this->decimales.insertarFinal((int)(numeroFlotante*2));
        numeroFlotante = numeroFlotante*2 - (int)(numeroFlotante*2);
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

    std::cout <<lista <<endl;
    return lista;
}
ListaEnlazada<int>* Convertidor::getListaDecimales(){
    return &decimales;
}
ListaEnlazada<int>* Convertidor::getListaEnteros(){
    return &enteros;
}
