#include "convertidor.h"

Convertidor::Convertidor()
{

}

void Convertidor::decimalTobinario(){
   int numero=10;
    while(numero!=0){
        if (numero%2)
           this->enteros.insertarCabeza(1);
        else
            this->enteros.insertarCabeza(0);
        numero=numero/2;

    }
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
