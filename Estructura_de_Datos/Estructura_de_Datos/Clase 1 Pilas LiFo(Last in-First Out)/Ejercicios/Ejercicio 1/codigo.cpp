#include <iostream>
#include <stack>
// Ingresar numeros hasta ingresar 0 y luego mostrar los numeros ingresados en orden inverso
// Ejemplo: 10, 20, 30, 0 => 30, 20, 10
using namespace std;

int main() {
    int a;
    stack<int> pila;
    cin >> a;
    
    while (a != 0) {
        pila.push(a);
        cin >> a;
    }
    while (!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

    return 0;
}
