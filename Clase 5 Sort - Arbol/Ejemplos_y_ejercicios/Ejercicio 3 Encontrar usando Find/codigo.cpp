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
    cin >> a; 
//Buscar en los sets es mas rapido gracias a que ordena todo 
    if (Arbol.find(a) != Arbol.end())
		    cout << "Encontrado " << a << endl;
		//el find the envia un puntero de la ubicacion de lo que estas buscando
		// y si no encuentra nada devuelve el final del set

    return 0;
}
