//INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
// LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
// EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20

#include <iostream>
#include <string>
#include <queue>

using namespace std;

// struct structPersonaConstructor {
//     string nombre;
//     int edad;

//    structPersonaConstructor(int e, string n) : nombre(n), edad(e) {}
// };

struct structPersona {
    string nombre;
    int edad;
};

int main() {

    queue<structPersona> colaPersonas;
    structPersona persona;
    string nombre;
    int edad;

    cin >> nombre;
    while (nombre != "FIN") {
        cin >> edad;
        persona.nombre = nombre;
        persona.edad = edad;

        // Agregar la persona a la cola
        colaPersonas.push(persona);
        cin >> nombre;
    }
    
    while (!colaPersonas.empty()) {
        persona = colaPersonas.front();
        cout << persona.nombre << " " << persona.edad << endl;
        colaPersonas.pop();
    }

    return 0;
    
}
