    EJERCICIO: LISTA - ORDEN INGRESADO
    // ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden ingresado (usando listas) agregando por front y sacando por back
// ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 10, 15, 20, 30, 35, 40, 45 

#include <iostream> // Permite usar cin, cout y endl.
#include <list>     // Permite usar list.


using namespace std; // Evita escribir std::.


int main()
{
    int a;           // Guarda cada número ingresado.
    list<int> lista; // Crea una lista de números enteros.


    cin >> a;
    // Ingresa el primer número.


    while (a != 0)
    {
        // Repite mientras el número sea diferente de 0.
        // El 0 indica que terminó el ingreso.


        lista.push_front(a);
        // Agrega el número al FRONT, es decir, adelante de la lista.


        cin >> a;
        // Ingresa el siguiente número.
    }


    while (!lista.empty())
    {
        // Repite mientras la lista tenga elementos.


        cout << lista.back() << endl;
        // Muestra el elemento que está en el BACK, es decir, al final.


        lista.pop_back();
        // Elimina el elemento del BACK después de mostrarlo.
    }


    return 0;
    // Termina el programa.
}
