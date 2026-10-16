//Ejemplo lista como Cola

/*INGRESAR NUMEROS HASTA INGRESAR 0, Y LUEGO MOSTRARLO EN EL ORDEN INGRESADO, USANDO UNA LISTA
EJEMPLO: 10, 20, 30, 0 -> 10, 20, 30*/

#include <iostream>
#include <list>
using namespace std;

int main(){
    // crear una lista
    list<int> L; //crea una lista con numeros enteros 
    int a; //variable donde guardo los numeros que ingreso 

    cin >> a; //pide el primer numero a ingresar
    while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
    {
        L.push_front(a); //agrega el numero al principio de la lista
        cin >> a; //pide ingresar el siguiente numero
    }
    while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
    {
        cout << L.back() << endl; // muestra el ultimo elemento de la lista
        L.pop_back(); // elimina el ultimo elemento de la lista
    }
    return 0;
}
