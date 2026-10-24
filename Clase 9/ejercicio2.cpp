#include <iostream>
#include <stack>
using namespace std;


struct Nodo {
    int dato;
    Nodo* siguiente;
};


int main()
{
    int a;
    //stack<int> pila;
    Nodo* pila = nullptr;
   
    Nodo* nuevo;
   
    //Creo un puntero auxiliar
    Nodo* Aux;


    //pila.push(10);
    nuevo = new Nodo; //Asigno un espacio de memoria
    nuevo->dato = 10;
    nuevo->siguiente = pila;
    pila= nuevo;


    //pila.push(20);
    nuevo = new Nodo;
    nuevo->dato = 20;
    nuevo->siguiente = pila;
    pila= nuevo;


    //pila.push(30);
    nuevo = new Nodo;
    nuevo->dato = 30;
    nuevo->siguiente = pila;
    pila= nuevo;


    //Mostramos lo que hay en la pila
    Aux= pila;
    while(Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }
   
    cout << "--------------------" << endl;


    //pila.pop(), pero del anteúltimo elemento
    Aux= pila->siguiente; //Apunto al anteúltimo elemento
    pila->siguiente = Aux->siguiente; //Apunto al último elemento
    //Aux->dato = 0; //Borrás el contenido del nodo
    //Aux->siguiente = nullptr; //Liberás el espacio de memoria
    delete Aux;


    //Mostramos lo que hay en la pila
    Aux= pila;
    while(Aux != nullptr)
    {
        cout << Aux->dato << endl;
        Aux = Aux->siguiente;
    }


    return 0;
}
