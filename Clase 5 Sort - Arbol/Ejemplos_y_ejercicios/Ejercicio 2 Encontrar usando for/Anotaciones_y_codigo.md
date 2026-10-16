# Ejercicio 2 Encontrar usando for

    - Ejercicio 2 Encontrar usando for
        

```cpp
#include <iostream> // Permite usar cin y cout.
#include <set>     // Permite usar set.
using namespace std;// Permite usar cin y cout sin el prefijo std::
// Ingresar numeros hasta ingresar 0 y luego ingresar otro numero finalmente escribi "encontrado" si el numero estaba.
// En los anteriores
// Ejemplo: 10 , 30 , 20 , 40 , 0 , 20 -> "Encontrado"
// Ejemplo: 10 , 30 , 20 , 40 , 0 , 15 -> " "

int main()
{
   
    set<int> Arbol; 
    int a;      

    cin >> a;     
    while (a != 0){ 
        Arbol.insert(a);
        cin >> a; 
    }
    cin >> a; //indica que numero queres buscar
//Buscar en los sets es mas rapido gracias a que ordena todo
    for (int numero : Arbol) { //recorre todo el set
        if (numero == a) //si encuentra un numero como el solicitado
            cout << "Encontrado " << numero << endl;
    }

    return 0;
}
```
