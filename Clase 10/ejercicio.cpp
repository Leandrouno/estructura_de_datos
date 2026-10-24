#include <iostream>
#include <stack>

using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};

struct estructCola{
    int dato;
    Nodo* siguiente;
};

int main(){
    Nodo* pila = nullptr;

    Nodo* nuevo;

    Nodo* nuevo = new Nodo;
    nuevo->dato = 10;
    nuevo->siguiente = pila;
    pila = nuevo;

    Nodo* nuevo = new Nodo;
    nuevo->dato = 20;
    nuevo->siguiente = pila;
    pila = nuevo;


    return 0;
}
