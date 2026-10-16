#include <iostream>
#include <stack>  
using namespace std;

//ingresar numeros hasta ingresar 0 y luego mostrar los pares en orden inverso
//ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 40, 30, 20, 10 
int main() {
    int a;
    stack<int> pila; // Declara una pila (estructura LIFO: el último en entrar es el primero en salir)
    cin >> a;

    while (a != 0) {
        pila.push(a); // push(): Agrega un nuevo elemento a la parte superior de la pila
        cin >> a;
    }

    while (!pila.empty()) {
        if (pila.top() % 2 == 0) //el %2 indica: para los numeros pares
        {
            cout << pila.top() << endl; // top(): Accede y lee el valor del elemento superior sin eliminarlo
        }
        pila.pop(); // pop(): Elimina el elemento que está en la parte superior de la pila

    }

    return 0;
}
