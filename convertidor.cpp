#include "convertidor.h"

Convertidor::Convertidor()
{

}

void Convertidor::decimalTobinario(int numero){
    while(numero!=0){
        if (numero%2)
           this->enteros.insertarCabeza(1);
        else
            this->enteros.insertarCabeza(0);
        numero=numero/2;
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

void Convertidor::generarListas()
{
   /*
    bool ispunto=false;
    int indice=0;
    std::string caracter;
    while(caracter!="\0"){
        caracter=(Valores->substr(indice,indice+1));
        if(caracter=="." ||caracter==","){
            ispunto=true;
            indice++;
        }
        if (ispunto)
            this->enteros.insertarFinal(std::stoi(caracter));
        else
            this->decimales.insertarFinal(std::stoi(caracter));
         }
        */


}
ListaEnlazada<int>* Convertidor::getListaDecimales(){
    return &decimales;
}
ListaEnlazada<int>* Convertidor::getListaEnteros(){
    return &enteros;
}
