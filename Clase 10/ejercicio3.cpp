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
    // queue<int> cola;
    structcola cola; // Creo la estructura que representa la cola
    cola.primero = nullptr;
    cola.ultimo = nullptr;


    Nodo *nuevo;


    // Creo un puntero auxiliar para recorrer la cola
    Nodo *Aux;


    // cola.push(10);
    nuevo = new Nodo; // Asigno un espacio de memoria
    nuevo->dato = 10;
    nuevo->siguiente = nullptr;


    cola.primero = nuevo;
    cola.ultimo = nuevo;


    // cola.push(20);
    nuevo = new Nodo; // Asigno un espacio de memoria
    nuevo->dato = 20;
    nuevo->siguiente = nullptr;
    cola.ultimo->siguiente = nuevo;
    cola.ultimo = nuevo;
    // cola.push(30);
    nuevo = new Nodo; // Asigno un espacio de memoria
    nuevo->dato = 30;
    nuevo->siguiente = nullptr;
    cola.ultimo->siguiente = nuevo; // al segundo nodo le asigno el tercero,el nuevo nodo es el siguiente del ultimo nodo
    cola.ultimo = nuevo;


    // Mostramos lo que hay en la cola
    Aux = cola.primero;
    while (Aux != nullptr) // Mientras el puntero Aux no sea nulo, es decir, mientras haya nodos en la cola
    {
        cout << Aux->dato << endl; // Muestro el dato del nodo al que apunta el puntero Aux
        Aux = Aux->siguiente;      // Asigno el puntero Aux al puntero siguiente del nodo al que apunta el puntero Aux, es decir, al siguiente nodo de la cola
    }
    return 0;
}



