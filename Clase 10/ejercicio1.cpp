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
    // queue<int> cola;
    structcola cola;
    cola.primero = nullptr;
    cola.ultimo = nullptr;

    Nodo *nuevo;

    // Creo un puntero auxiliar
    Nodo *Aux;

    // cola.push(10);
    nuevo = new Nodo; // Asigno un espacio de memoria
    nuevo->dato = 10;
    nuevo->siguiente = nullptr;
    cola.primero = nuevo;
    cola.ultimo = nuevo;

    // pila.push(20);
    nuevo = new Nodo;
    nuevo->dato = 20;
    nuevo->siguiente = nullptr;
    cola.ultimo->siguiente = nuevo;
    cola.ultimo = nuevo;

    // Mostramos lo que hay en la cola
    Aux = cola.primero;
    while (Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }

    cout << "--------------------" << endl;

    /*

        // pila.push(30);
        nuevo = new Nodo;
        nuevo->dato = 30;
        nuevo->siguiente = pila;
        pila = nuevo;

        // Mostramos lo que hay en la pila
        Aux = pila;
        while (Aux != nullptr)
        {
            cout << Aux->dato << endl;
            Aux = Aux->siguiente;
        }

        cout << "--------------------" << endl;

        // pila.pop(), pero del anteúltimo elemento
        Aux = pila->siguiente;            // Apunto al anteúltimo elemento
        pila->siguiente = Aux->siguiente; // Apunto al último elemento
        // Aux->dato = 0; //Borrás el contenido del nodo
        // Aux->siguiente = nullptr; //Liberás el espacio de memoria
        delete Aux;

        // Mostramos lo que hay en la pila
        Aux = pila;
        while (Aux != nullptr)
        {
            cout << Aux->dato << endl;
            Aux = Aux->siguiente;
        }
    */
    return 0;
} 
