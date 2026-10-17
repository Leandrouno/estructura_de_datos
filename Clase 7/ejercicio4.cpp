// ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden inverso al  ingresado(usando listas) agregando  y sacando por back
// ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 ->45,40,35,30,20,15,10
/*
    EJERCICIO: LISTA - ORDEN INVERSO
    ¿Qué pide?
    Ingresar números hasta ingresar 0.
    Guardarlos en una lista agregándolos por BACK.
    Después mostrarlos en orden inverso al ingresado,
    sacándolos también por BACK.
    Ejemplo:
    Entrada:
    10, 15, 20, 30, 35, 40, 45, 0
    Salida:  45, 40, 35,30,20,15,10
*/


#include <iostream> // Permite usar cin, cout y endl.
#include <list>     // Permite usar la estructura list.


using namespace std; // Evita escribir std::.


int main()
{
    int a;           // Variable donde guardamos cada número ingresado.
    list<int> lista; // Crea una lista de números enteros.


    cin >> a;
    // Ingresa el primer número.


    while (a != 0)
    {
        // Repite mientras el número sea diferente de 0.
        // El 0 indica que terminó el ingreso.


        lista.push_back(a);
        // Agrega el número al BACK (final) de la lista.


        cin >> a;
        // Ingresa el siguiente número.
    }


    while (!lista.empty())
    {
        // Repite mientras la lista tenga elementos.


        cout << lista.back() << endl;
        // Muestra el último elemento de la lista.


        lista.pop_back();
        // Elimina el último elemento de la lista.
    }


    return 0;
    // Finaliza el programa.
}
