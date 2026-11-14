#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

int main()
{
    int a;
    Nodo *pila = nullptr;
    Nodo *nuevo;
    Nodo *Aux;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> a;

    while (a != 0)
    {
        nuevo = new Nodo;
        nuevo->dato = a;
        nuevo->siguiente = pila;
        pila = nuevo;

        cout << "Ingrese un numero (0 para terminar): ";
        cin >> a;
    }

    Aux = pila;
    while (Aux != nullptr)
    {
        cout << Aux->dato << " ";
        Aux = Aux->siguiente;
    }

    cout << endl;

    Aux = pila;
    while (Aux != nullptr)
    {
        cout << Aux->dato << " ";
        Aux = Aux->siguiente;
    }

    cout << endl;

    while (pila != nullptr)
    {
        Aux = pila;
        pila = pila->siguiente;
        delete Aux;
    }

    return 0;
}