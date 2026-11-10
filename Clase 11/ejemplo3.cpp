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
    structLista lista;
    lista.primero = nullptr;
    lista.ultimo = nullptr;

    Nodo *nuevo;

    Nodo *Aux;
    // Creo un puntero auxiliar

    // lista.push_front(10);
    nuevo = new Nodo; // Asigno un espacio de memoria
    nuevo->dato = 10;
    nuevo->anterior = nullptr;
    nuevo->siguiente = nullptr;
    lista.primero = nuevo;
    lista.ultimo = nuevo;

    // lista.push_back(20);
    nuevo = new Nodo; // Asigno un nuevo espacio de memoria
    nuevo->dato = 20;
    nuevo->anterior = lista.ultimo;
    nuevo->siguiente = nullptr;
    lista.ultimo->siguiente = nuevo;
    lista.ultimo = nuevo;

    Aux = lista.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }

    cout << "--------------------" << endl;


    // lista.push_front(5);
    nuevo = new Nodo;
    nuevo->dato = 5;
    nuevo->anterior = nullptr;
    nuevo->siguiente = lista.primero;
    lista.primero->anterior = nuevo; // Enlazamos el -anterior- del 10, al 5
    lista.primero = nuevo;

    Aux = lista.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }

    cout << "--------------------" << endl;

    // Insertamos num 15 luego del 10
    // Buscamos donde está el 10
    Aux = lista.primero;
    while (Aux != nullptr and Aux->dato != 10)
    {
        Aux = Aux->siguiente;
    }

    // Insertamos a continuación del 10
    if (Aux != nullptr)
    {
        nuevo = new Nodo;
        nuevo->dato = 15;
        nuevo->anterior = Aux;
        nuevo->siguiente = Aux->siguiente;

        // Modificamos -anterior- del 20
        Aux->siguiente->anterior = nuevo;

        // Modificamos -siguiente- del 10
        Aux->siguiente = nuevo;
    }

    Aux = lista.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }

    cout << "---------Muestro al revés-----------" << endl;


    //Mostrar la lista en orden inverso
    Aux = lista.ultimo;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->anterior;
    }

    return 0;
}