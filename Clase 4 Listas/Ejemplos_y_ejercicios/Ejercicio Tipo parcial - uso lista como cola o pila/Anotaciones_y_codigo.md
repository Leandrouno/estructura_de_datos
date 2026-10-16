# Ejercicio Tipo parcial - uso lista como cola o pila

    - Ejercicio Tipo parcial - uso lista como cola o pila
        

```cpp
//Ejemplo Lista como Pila

#include <iostream> // Permite usar cin y cout.
#include <list>     // Permite usar list.
using namespace std;
// INGRESAR NUMEROS HASTA INGRESAR 0, Y LUEGO MOSTRARLO EN EL ORDEN INVERSO, USANDO UNA LISTA
// EJEMPLO: 10, 20, 30, 0 -> 30, 20, 10

int main()
{
    // crear una lista
    list<int> L; //crea una lista con numeros enteros 
    int a; //variable donde guardo los numeros que ingreso 

    cin >> a; //pide el primer numero a ingresar
    while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
    {
        // pila.push(a);
        L.push_front(a); //agrega el numero al principio de la lista (al frente de la lista ,arriba del todo si es una pila de remeras)
        cin >> a; //pide ingresar el siguiente numero
    }

    // while (!pila.empty()) {
    while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
    {
        // cout << pila.top() << endl;
        cout << L.front() << endl; //muestra el primer elemento de la lista
        // pila.pop();
        L.pop_front(); //elimina el primer elemento de la lista
    }

    return 0;
}
```
