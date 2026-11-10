#include <iostream>


using namespace std;


struct Nodo
{
    int dato;
    Nodo *izquierda;
    Nodo *derecha;
};


struct strucArbol
{
    Nodo *raiz;
};


int main()
{
    Nodo *nuevo;
    Nodo *actual;
    Nodo *anterior;


    strucArbol arbol;
    arbol.raiz = nullptr;


    // Inserto el primer dato en el arbol
    nuevo = new Nodo;
    nuevo->dato = 30;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;


    arbol.raiz = nuevo;


    // Inserto un segundo elemento en el arbol
    nuevo = new Nodo;
    nuevo->dato = 50;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;


    if (nuevo->dato < arbol.raiz->dato)
    {
        arbol.raiz->izquierda = nuevo;
    }
    else
    {
        arbol.raiz->derecha = nuevo;
    }


    // Inserto un tercer elemento en el arbol
    nuevo = new Nodo;
    nuevo->dato = 10;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;


    if (nuevo->dato < arbol.raiz->dato)
    {
        arbol.raiz->izquierda = nuevo;
    }
    else
    {
        arbol.raiz->derecha = nuevo;
    }


    // Inserto un cuarto elemento en el arbol
    nuevo = new Nodo;
    nuevo->dato = 20;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;


    actual = arbol.raiz;
    anterior = nullptr;


    while (actual != nullptr)
    {
        anterior = actual;


        if (nuevo->dato < actual->dato)
            actual = actual->izquierda;
        else
            actual = actual->derecha;
    }


    if (nuevo->dato < anterior->dato)
        anterior->izquierda = nuevo;
    else
        anterior->derecha = nuevo;




    //Insertamos un quinto elemento en el arbol
    nuevo = new Nodo;
    nuevo->dato = 40;
    nuevo->izquierda = nullptr;
    nuevo->derecha = nullptr;


    actual = arbol.raiz;
    anterior = nullptr;


    while (actual != nullptr)
    {
        anterior = actual;


        if (nuevo->dato < actual->dato)
            actual = actual->izquierda;
        else
            actual = actual->derecha;
    }


    if (nuevo->dato < anterior->dato)
        anterior->izquierda = nuevo;
    else
        anterior->derecha = nuevo;


    // MOSTRAR ARBOL

    return 0;
}
