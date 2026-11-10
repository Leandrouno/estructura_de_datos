#include <iostream>
using namespace std;


struct Nodo {
    int dato;
    Nodo *izq;
    Nodo *der;
};


void enOrden(Nodo *raiz) {
    if (raiz != nullptr) {
        enOrden(raiz->izq);
        cout << raiz->dato << " ";
        enOrden(raiz->der);
    }
}
