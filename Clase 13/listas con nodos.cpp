#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *anterior;
    Nodo *siguiente;
};

struct structLista
{
    Nodo *primero;
    Nodo *ultimo;
};

int main()
{
    int a;
    structLista lista;
    lista.primero = nullptr;
    lista.ultimo = nullptr;

    Nodo *nuevo;
    Nodo *Aux;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> a;

    while (a != 0)
    {
        nuevo = new Nodo;
        nuevo->dato = a;
        nuevo->anterior = nullptr;
        nuevo->siguiente = nullptr;

        if (lista.primero == nullptr)
        {
            lista.primero = nuevo;
            lista.ultimo = nuevo;
        }
        else
        {
            nuevo->anterior = lista.ultimo;
            lista.ultimo->siguiente = nuevo;
            lista.ultimo = nuevo;
        }

        cout << "Ingrese un numero (0 para terminar): ";
        cin >> a;
    }

    Aux = lista.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << " ";
        Aux = Aux->siguiente;
    }

    cout << endl;

    Aux = lista.ultimo;
    while (Aux != nullptr)
    {
        cout << Aux->dato << " ";
        Aux = Aux->anterior;
    }

    cout << endl;

    Aux = lista.primero;
    while (Aux != nullptr)
    {
        Nodo *borrar;
        borrar = Aux;
        Aux = Aux->siguiente;
        delete borrar;
    }

    lista.primero = nullptr;
    lista.ultimo = nullptr;

    return 0;
}