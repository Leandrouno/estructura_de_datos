# Parcial

- Parcial
    

```cpp
//1) Ingresar números hasta ingresar 0 y luego mostrar los impares en el orden ingresado.
// Ejemplo: 10, 15, 20, 30, 30, 35, 40, 45, 0 -> 15, 35, 45
#include <iostream>
#include <queue>
using namespace std;

int  main(){
    int a;
    queue<int> cola;
    cin>>a;

    while(a!=0){
        cola.push(a);
        cin>>a;
    }

    while (!cola.empty())
    {
        if(cola.front()%2 !=0){
            cout<<cola.front()<<endl;
        }

        cola.pop();
    }
    return 0;  
}

//2) Ingresar números hasta ingresar 0 y luego mostrar los pares en orden inverso.
//Ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 40, 30, 20, 10
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int a;
    stack<int> pila;
    cin >>a;

    while(a!=0){
        pila.push(a);
        cin>> a;
    }

    while(!pila.empty()){
        if(pila.top()%2==0){
            cout<<pila.top()<< endl;
        }
        pila.pop();
    }

    return 0;
}

//3) Ingresar números hasta ingresar 0 y luego mostrarlo en el orden ingresado (usando listas) agregando por front y sacando por back
// Ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 10, 15, 20, 30, 35, 40, 45
#include <iostream>
#include <list>
using namespace std;
int main(){
    int a;
    list<int> lista;
    cin>>a;

    while(a!=0){
        lista.push_front(a);
        cin>>a;
    }

    while (!lista.empty())
    {
        cout<<lista.back()<<endl;
        lista.pop_back();
    }
    return 0;
   
}

//4) Ingresar números hasta ingresar 0 y luego mostrarlo en el orden inverso al ingresado (usando listas) agregando y sacando por front
//   Ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 45, 40 ,35, 30, 20, 15, 10
#include <iostream>
#include <list>
using namespace std;

main(){
    int a;
    list<int> lista;
    cin>>a;
   
    while(a !=0){
        lista.push_front(a);
        cin>>a;
    }

    while(!lista.empty()){
        cout<<lista.front()<<endl;
        lista.pop_front();
    }

    return 0;
}

//5) Ingresar nombre de persona y edades de hijos, terminando el ingreso de las edades con 0 y el ingreso de personas con "FIN".
// Finalmente mostrar las personas en el orden ingresado y las edades de los hijos en orden ascendente.
// Ejemplo: Luis, 15, 10, 0, Martin, 12, 4, 8, 0, Laura, 13, 0, FIN -> Luis, 10, 15, Martin, 4, 8, 12, Laura, 13
#include <iostream>
#include <string>
#include <queue>
#include <set>
using namespace std;

struct structpersona{
    string nombre;
    set<int> edades;
};

int main(){
    queue<structpersona> colapersona;
    string nombre;
    int edad;

    cin>> nombre;
    while (nombre!="FIN")
    {
        structpersona persona;
        persona.nombre=nombre;

        cin>> edad;

        while(edad!=0){
            persona.edades.insert(edad);
            cin>> edad;
        }

        colapersona.push(persona);

        cin>> nombre;
    }

    while(!colapersona.empty()){
        structpersona frente = colapersona.front();
        cout<< frente.nombre<< ":";

        for( int edadhijo: frente.edades){
            cout<< edadhijo << " ";
        }

        colapersona.pop();
    }

    return 0;
   
}
```
