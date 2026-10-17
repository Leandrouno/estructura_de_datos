// Clase parcial
// Ingresar numeros hasta ingresar 0 y luego mostrar los pares en orden inverso
// Ejemplo: 10, 15, 20, 30, 35, 40, 45 y 0
// Salida: 40, 30, 20, 10


#include <iostream>
#include <stack> // Permite usar stack.


using namespace std; // Evita escribir std::.


int main()
{
    int a;           // Variable donde guardo los numeros que ingreso.
    stack<int> pila; // Crea una pila de numeros enteros.


    cin >> a; // Pide el primer numero.


    // Primer bucle: Filtra y guarda solo los pares
    while (a != 0)
    { // Repite el bucle mientras el numero ingresado sea diferente de 0.
        if (a % 2 == 0)
        {                 // Verifica si el numero es par.
            pila.push(a); // Agrega el numero ingresado a la pila si es par.
        }
        cin >> a; // Pide ingresar el siguiente numero.
    }


    // Segundo bucle: Muestra el contenido inverso directamente
    while (!pila.empty())
    {                               // Repite mientras la pila no este vacia (tenga elementos).
        cout << pila.top() << endl; // Muestra el ultimo elemento de la pila.
        pila.pop();                 // Elimina el ultimo elemento de la pila.
    }
    return 0;
}
