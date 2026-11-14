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

void enOrdenAscendente(Nodo *raiz)
{
    if (raiz != nullptr)
    {
        enOrdenAscendente(raiz->izquierda);
        cout << raiz->dato << " ";
        enOrdenAscendente(raiz->derecha);
    }
}

void enOrdenDescendente(Nodo *raiz)
{
    if (raiz != nullptr)
    {
        enOrdenDescendente(raiz->derecha);
        cout << raiz->dato << " ";
        enOrdenDescendente(raiz->izquierda);
    }
}

void liberarArbol(Nodo *raiz)
{
    if (raiz != nullptr)
    {
        liberarArbol(raiz->izquierda);
        liberarArbol(raiz->derecha);
        delete raiz;
    }
}

int main()
{
    int a;

    Nodo *nuevo;
    Nodo *actual;
    Nodo *anterior;

    strucArbol arbol;
    arbol.raiz = nullptr;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> a;

    while (a != 0)
    {
        nuevo = new Nodo;
        nuevo->dato = a;
        nuevo->izquierda = nullptr;
        nuevo->derecha = nullptr;

        if (arbol.raiz == nullptr)
        {
            arbol.raiz = nuevo;
        }
        else
        {
            actual = arbol.raiz;
            anterior = nullptr;

            while (actual != nullptr)
            {
                anterior = actual;

                if (nuevo->dato < actual->dato)
                {
                    actual = actual->izquierda;
                }
                else
                {
                    actual = actual->derecha;
                }
            }

            if (nuevo->dato < anterior->dato)
            {
                anterior->izquierda = nuevo;
            }
            else
            {
                anterior->derecha = nuevo;
            }
        }

        cout << "Ingrese un numero (0 para terminar): ";
        cin >> a;
    }

    enOrdenAscendente(arbol.raiz);
    cout << endl;

    enOrdenDescendente(arbol.raiz);
    cout << endl;

    liberarArbol(arbol.raiz);

    return 0;
}