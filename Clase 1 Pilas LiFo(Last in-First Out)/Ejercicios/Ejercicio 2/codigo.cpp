#include <iostream>
#include <stack>
// Ingresar numeros hasta ingresar 0 y luego mostrar los numeros mayores al ultimo en orden inverso
// Ejemplo: 50, 20, 10, 60, 35, 0 => 60, 50
using namespace std;

int main() {
    int a;
    int ultimo;
    stack<int> pila;
    cin >> a;

    while (a != 0) {
        pila.push(a);
        cin >> a;
    }

    if(!pila.empty()) {
        ultimo = pila.top();
        pila.pop();
    }

    while (!pila.empty()) {
        if (pila.top() > ultimo) {
            cout << pila.top() << endl;
        } 
        pila.pop();
    }

    return 0;
}
