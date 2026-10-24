#include <iostream>
#include <stack>

using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};

struct estructCola{
    Nodo* primero;
    Nodo* ultimo;
};

int main(){
    int a;
    estructCola cola = new estructCola;
    cola.primero = nullptr;
    cola.ultimo = nullptr;

    Nodo*nuevo;
    Nodo*Aux;

    nuevo = new Nodo;
    nuevo->dato = 10;
    nuevo->siguiente = nullptr;
    cola.primero = nuevo;
    cola.ultimo = nuevo;

    return 0;
}
