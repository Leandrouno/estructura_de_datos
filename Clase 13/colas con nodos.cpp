#include <iostream>
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

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> a;

    while (a != 0)
    {
        nuevo = new Nodo;
        nuevo->dato = a;
        nuevo->siguiente = nullptr;

        if (cola.primero == nullptr)
        {
            cola.primero = nuevo;
            cola.ultimo = nuevo;
        }
        else
        {
            cola.ultimo->siguiente = nuevo;
            cola.ultimo = nuevo;
        }

        cout << "Ingrese un numero (0 para terminar): ";
        cin >> a;
    }

    Aux = cola.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << " ";
        Aux = Aux->siguiente;
    }

    cout << endl;

    Aux = cola.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << " ";
        Aux = Aux->siguiente;
    }

    cout << endl;

    while (cola.primero != nullptr)
    {
        Aux = cola.primero;
        cola.primero = cola.primero->siguiente;
        delete Aux;
    }

    cola.ultimo = nullptr;

    return 0;
}