#include <iostream>
#include <list>

using namespace std;
// ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden ingresado (usando listas) agregando por front y sacando por back
// ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 10, 15, 20, 30, 35, 40, 45

int main()
{
    list<int> L; //crea una lista con numeros enteros 
    int a; //variable donde guardo los numeros que ingreso 

    cin >> a; //pide el primer numero a ingresar
    while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
    {
        L.push_front(a); //agrega el numero al principio de la lista (al frente de la lista ,arriba del todo si es una pila de remeras)
        cin >> a; //pide ingresar el siguiente numero
    }

    while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
    {
        cout << L.back() << endl; //muestra el primer elemento de la lista
        L.pop_back(); //elimina el primer elemento de la lista
    }

    return 0;
}
