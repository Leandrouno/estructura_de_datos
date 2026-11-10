#include <iostream>
#include <stack>
using namespace std;


struct Nodo {
    int dato;
    Nodo *izq;
    Nodo *der;
};


void mostrarEnOrden(Nodo *raiz) {
    stack<Nodo*> pila;
    Nodo *actual = raiz;


    while (actual != nullptr || !pila.empty()) {


        // Avanzar por la izquierda
        while (actual != nullptr) {
            pila.push(actual);
            actual = actual->izq;
        }


        // Mostrar el nodo
        actual = pila.top();
        pila.pop();
        cout << actual->dato << " ";


        // Avanzar por la derecha
        actual = actual->der;
    }
}
