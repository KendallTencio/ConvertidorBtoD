#include "convertidor.h"

using namespace std;

Convertidor::Convertidor()
{

}

void Convertidor::decimalTobinario(long numero){
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
    int explorador = 0;
    while(c != explorador){
        cout<<this->enteros.getPos(explorador)->getElemento();
        explorador++;
    }
    cout<<",";
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

void Convertidor::listaFlotantesBinarios(double numeroFlotante, int nLimite){
    ListaEnlazada<int> listaFloatBi;
    int nPosicionesASacar = nLimite;
    while(nLimite != 0){
        this->decimales.insertarFinal((int)(numeroFlotante*2));
        cout<<(int)(numeroFlotante*2);  //Esto es para ver los que se agregan a la lista
        numeroFlotante = numeroFlotante*2 - (int)(numeroFlotante*2);
        nLimite--;
    }
    cout<<"\n"<<endl;
    //cout<<"0,"; //Para probar que van bien en la lista
    int contadorPos = 0;
    while(nPosicionesASacar != contadorPos){
        this->decimales.getPos(contadorPos);
        cout<<this->decimales.getPos(contadorPos)->getElemento();
        contadorPos++;
    }
    cout<<"\n"; //Provicional, solo para revisar que todo se imprima bien
}

std::string Convertidor::getBinCompleto()
{
    std::string lista;

    for(int i=0;i<enteros.getTam();i++)
        lista += std::to_string(this->enteros.getPos(i)->getElemento());
    lista+=",";
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
