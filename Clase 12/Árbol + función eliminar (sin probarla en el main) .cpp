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


void enOrden(Nodo *raiz) {
    if (raiz != nullptr) {
        enOrden(raiz->izquierda);
        cout << raiz->dato << " ";
        enOrden(raiz->derecha);
    }
}


void eliminar(Nodo *&raiz, int valor) {


    Nodo *actual = raiz;
    Nodo *padre = nullptr;


    // Buscar el nodo
    while (actual != nullptr && actual->dato != valor) {


        padre = actual;


        if (valor < actual->dato)
            actual = actual->izquierda;
        else
            actual = actual->derecha;
    }


    if (actual == nullptr) {
        cout << "No existe el elemento";
        return;
    }


    // Caso 3: tiene dos hijos
    if (actual->izquierda != nullptr && actual->derecha != nullptr) {


        Nodo *aux = actual->derecha;
        Nodo *padreAux = actual;


        while (aux->izquierda != nullptr) {
            padreAux = aux;
            aux = aux->izquierda;
        }


        actual->dato = aux->dato;


        actual = aux;
        padre = padreAux;
    }


    // Caso 1 y 2: cero o un hijo
    Nodo *hijo;


    if (actual->izquierda != nullptr)
        hijo = actual->izquierda;
    else
        hijo = actual->derecha;


    if (padre == nullptr)
        raiz = hijo;
    else if (padre->izquierda == actual)
        padre->izquierda = hijo;
    else
        padre->derecha = hijo;


    delete actual;
}


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


    //Mostramos el arbol en orden
    enOrden(arbol.raiz);


    return 0;
}
