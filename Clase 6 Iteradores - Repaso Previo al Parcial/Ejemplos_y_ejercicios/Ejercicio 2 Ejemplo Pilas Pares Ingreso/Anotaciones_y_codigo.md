# Ejercicio 2 Ejemplo Pilas Pares Ingreso

    - Ejercicio 2 Ejemplo Pilas Pares Ingreso
        

```cpp
#include <iostream>
#include <string>
#include <stack>

using namespace std;
// ingresar numeros hasta ingresar 0 y luego mostrar los pares en orden inverso
// ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 40, 30, 20, 10

int main()
{
    int a;
    stack<int> pila; // Declara una pila (estructura LIFO: el último en entrar es el primero en salir)
    cin >> a;

    while (a != 0)
    {
        if (a % 2 == 0)
        {                 // el %2 == 0 indica: para los numeros pares
            pila.push(a); // push(): Agrega un nuevo elemento a la parte superior de la pila
        }
        cin >> a;
    }

    while (!pila.empty())
    {
        cout << pila.top() << endl; // top(): Accede y lee el valor del elemento superior sin eliminarlo
        pila.pop();                 // pop(): Elimina el elemento que está en la parte superior de la pila
    }

    return 0;
}
```
