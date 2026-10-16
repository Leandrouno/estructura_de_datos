# Ejercicio 1 Constructor Estructura

    - Ejercicio 1 Constructor Estructura
        

```cpp
#include <iostream>
#include <string>
#include <algorithm> // Requerido para std::transform
#include <cctype>    // Requerido para ::toupper

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

    return 0;
    
}
```
