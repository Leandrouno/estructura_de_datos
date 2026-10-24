#include <iostream>
#include <stack>
using namespace std;


struct Nodo
{
    int dato;
    Nodo *siguiente;
};
struct structcola
{
    Nodo *primero;
    Nodo *ultimo;
};
int main()
{
    int a;
    structcola cola;
    cola.primero = nullptr;
    cola.ultimo = nullptr;


    Nodo *nuevo;


    Nodo *Aux;


    nuevo = new Nodo;
    nuevo->dato = 10;
    nuevo->siguiente = nullptr;
    cola.primero = nuevo;
    cola.ultimo = nuevo;


    nuevo = new Nodo;
    nuevo->dato = 20;
    nuevo->siguiente = nullptr;
    cola.ultimo->siguiente = nuevo;
    cola.ultimo = nuevo;


    nuevo = new Nodo;
    nuevo->dato = 30;
    nuevo->siguiente = nullptr;
    cola.ultimo->siguiente = nuevo;
    cola.ultimo = nuevo;


    nuevo = new Nodo;
    nuevo->dato = 40;
    nuevo->siguiente = nullptr;
    cola.ultimo->siguiente = nuevo;
    cola.ultimo = nuevo;


    Aux = cola.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }


    cout << "--------------------" << endl;


    Aux = cola.primero;
    cola.primero = cola.primero->siguiente;
    delete Aux;
    Aux = cola.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }


    cout << "--------------------" << endl;


      cout << cola.primero->dato << endl;


    cout << cola.ultimo->dato << endl;


    return 0;
}
