//INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
// LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
// EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20

#include <iostream>
#include <string>
#include <algorithm> // Requerido para std::transform
#include <cctype>    // Requerido para ::toupper
#include <queue>

using namespace std;

struct structPersonaConstructor {
    string nombre;
    int edad;

   structPersonaConstructor(int e, string n) : nombre(n), edad(e) {
     //   transform(nombre.begin(), nombre.end(), nombre.begin(), ::toupper);
    }
};

struct structPersona {
    string nombre;
    int edad;
};

int main() {
    
    structPersona persona1;
	persona1.nombre = "Pedro" ;
	persona1.edad = 10 ;
    
	structPersona persona2;
	persona2.nombre = "Juan" ;
	persona2.edad = 20 ;

    structPersonaConstructor persona3(30, "Maria");

    queue<structPersona> colaPersonas;
    queue<structPersonaConstructor> colaPersonasConstructor;

    colaPersonas.push(persona1);
    colaPersonas.push(persona2);

    return 0;
    
}
