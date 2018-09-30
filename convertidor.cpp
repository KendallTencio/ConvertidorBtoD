#include "convertidor.h"

using namespace std;

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

void Convertidor::listaFlotantesBinarios(double numeroFlotante, int nLimite){
    ListaEnlazada<int> listaFloatBi;
    int nPosicionesASacar = nLimite;
    cout<<"0,"; //Imprime para estética de ver que es la parte decimal
    while(nLimite != 0){
        listaFloatBi.insertarFinal((int)(numeroFlotante*2));
        cout<<(int)(numeroFlotante*2);  //Esto es para ver los que se agregan a la lista
        numeroFlotante = numeroFlotante*2 - (int)(numeroFlotante*2);
        nLimite--;
    }
    int contadorPos = 0;
    while(nPosicionesASacar != contadorPos){
        listaFloatBi.getPos(contadorPos);
        cout<<listaFloatBi.getPos(contadorPos)->getElemento();
        contadorPos--;
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
