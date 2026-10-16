# Bloque de codigo 07

```cpp
// ingresar nombres y valores hasta ingresar fin mostrando los nombres en el orden ingresado y los valores en orden inverso 
// ejemplo pedro, 10,20,30,0, juan, 15,25,0.  fin
// salida pedro 30,20,10 juan 25,15

#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

struct structPersonaConstructor {
    string nombre;
    stack<int> pilaEdades;
   structPersonaConstructor(stack<int> pe, string n) : nombre(n), pilaEdades(pe) {}
};

int main() {

    queue<structPersonaConstructor> colaPersonas;
    string nombre;
    int edad;
    stack<int> pilaEdades;
    cin >> nombre;
    while (nombre != "FIN") {
        
        while (!pilaEdades.empty()) {
            pilaEdades.pop();
        }
        cin >> edad;
        while (edad != 0) {
            pilaEdades.push(edad);
            cin >> edad;
        }
        colaPersonas.emplace(pilaEdades, nombre);
        cin >> nombre;
    }
   
    while (!colaPersonas.empty()) {
        cout << colaPersonas.front().nombre << endl;
        while (!colaPersonas.front().pilaEdades.empty()) {
            cout << colaPersonas.front().pilaEdades.top() << " ";
            colaPersonas.front().pilaEdades.pop();
        }
        cout << endl;
        colaPersonas.pop();
    }

    return 0;
   
}
```
