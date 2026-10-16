#include <iostream> // Permite usar cin y cout.
#include <set>     // Permite usar set.

using namespace std;// Permite usar cin y cout sin el prefijo std::

// Ingresar numeros hasta ingresar 0 y luego mostrarlo en orden ascendente.
// Ejemplo: 30 10 20 0 -> 10 20 30

int main()
{
   
    set<int> Arbol; //formato para crear una lista siempre organizada
    int a;      

    cin >> a;     
    while (a != 0){ 
        Arbol.insert(a); //meter la variable a dentro del set Arbol
        cin >> a; 
    }

        for (int numero : Arbol) {
        cout << numero << " " << endl; //sacar las variables en orden de Arbol
    }

    return 0;
}
