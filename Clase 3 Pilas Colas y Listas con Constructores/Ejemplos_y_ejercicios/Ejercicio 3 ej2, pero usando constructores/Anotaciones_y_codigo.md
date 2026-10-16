# Ejercicio 3 ej2, pero usando constructores

    - Ejercicio 3 ej2, pero usando constructores
        
        Emplace = hace un push usando una estructura, y ordena la informacion en base al constructor ya definido antes
        

```cpp
//INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
// LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
// EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20

#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct structPersonaConstructor {
    string nombre;
    int edad;

   structPersonaConstructor(int e, string n) : nombre(n), edad(e) {}
};

// struct structPersona {
//     string nombre;
//     int edad;
// };

int main() {

    queue<structPersonaConstructor> colaPersonas;
    string nombre;
    int edad;

    cin >> nombre;
    while (nombre != "FIN") {
        cin >> edad;
        colaPersonas.emplace(edad, nombre);
        cin >> nombre;
    }
    
    while (!colaPersonas.empty()) {
       // persona = colaPersonas.front();
        //cout << persona.nombre << " " << persona.edad << endl;
        cout << colaPersonas.front().nombre << " " << colaPersonas.front().edad << endl;
        colaPersonas.pop();
    }

    return 0;
    
}
```
