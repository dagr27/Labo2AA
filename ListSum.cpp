#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct nodo {
    int n;
    struct nodo *sig;
};
//Creacion de clase de la lista
class listaSimple
{
private:
    nodo *pInicio;
    
public:
    listaSimple();
    void InsInicio(int);
    void mostrarLista(void);
    void mostrarListarec(nodo*);
    void sum(void);
};


listaSimple::listaSimple(){
    this->pInicio = NULL;
}
//Insertar al inicio
void listaSimple::InsInicio(int number){
    nodo *nuevo = new nodo;
    nuevo->n = number;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void listaSimple::mostrarLista(void){
    mostrarListarec(pInicio);
}
void listaSimple::mostrarListarec(nodo *p){
    if(p ==NULL){
    
    }else{
        cout<<p->n<<endl;
        mostrarListarec(p->sig);
    }
    
}

void listaSimple::sum(void){
    nodo *p = pInicio;
    int acum = 0;
    int count = 0;
    while (p!=NULL){
        acum += p->n;
        p = p->sig;
        count++;
    }
    p = pInicio;
    int promedio = acum/count;
    while (p!=NULL){
        if(p->n >= promedio){
            cout<<p->n<<endl;
        }
        p = p->sig;
    }
    
    
}
int main(int argc, char** argv) {
    listaSimple lista1;
    lista1.InsInicio(1);
    lista1.InsInicio(2);
    lista1.InsInicio(3);
    lista1.InsInicio(4);
    lista1.InsInicio(5);
    lista1.sum();
    return 0;
}