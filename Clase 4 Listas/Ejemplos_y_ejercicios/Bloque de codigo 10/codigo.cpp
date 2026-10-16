//Ejemplo Lista con pila 2, usando back en lugar de front

#include <iostream> // Permite usar cin y cout.
#include <list>     // Permite usar list.
using namespace std;
// INGRESAR NUMEROS HASTA INGRESAR 0, Y LUEGO MOSTRARLO EN EL ORDEN INVERSO, USANDO UNA LISTA
// EJEMPLO: 10, 20, 30, 0 -> 30, 20, 10

int main()
{
    // crear una lista
    list<int> L; // crea una lista con numeros enteros
    int a;       // variable donde guardo los numeros que ingreso

    cin >> a;      // pide el primer numero a ingresar
    while (a != 0) // repite el bucle mientras el numero ingresado sea diferente de 0
    {
        // pila.push(a);
        L.push_back(a); // agrega el numero ingresado al final de la lista
        cin >> a; // pide ingresar el siguiente numero
    }

    // while (!pila.empty()) {
    while (!L.empty()) // repite mientras la lista no este vacia (tenga elementos)
    {
        // cout << pila.top() << endl;
        cout << L.back() << endl; // muestra el ultimo elemento de la lista
        // pila.pop();
        L.pop_back(); // elimina el ultimo elemento de la lista
    }

    return 0;
}
