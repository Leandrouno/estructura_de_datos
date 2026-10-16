# Ejercicio 3 Cola Impares Ingreso

    - Ejercicio 3 Cola Impares Ingreso
        

```cpp
#include <iostream>
#include <queue>

using namespace std;
// ingresar numeros hasta ingresar 0 y luego mostrar los impares en el orden ingresado
// ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 15, 35, 45

int main()
{
    int a;
    queue<int> cola; // Declara una cola (estructura FIFO: el primero en entrar es el primero en salir)
    cin >> a;

    while (a != 0)
    {
        if (a % 2 != 0)
        {
            cola.push(a); // push(): Agrega un nuevo elemento a la parte superior de la pila
        }
        cin >> a;
    }

    while (!cola.empty())
    {
        cout << cola.front() << endl; // top(): Accede y lee el valor del elemento superior sin eliminarlo
        cola.pop();                   // pop(): Elimina el elemento que está en la parte superior de la pila
    }

    return 0;
}
```
