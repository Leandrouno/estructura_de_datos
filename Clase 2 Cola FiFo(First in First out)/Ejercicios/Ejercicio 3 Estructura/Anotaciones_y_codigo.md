# Ejercicio 3 Estructura

        - Ejercicio 3 Estructura
            

```cpp
#include <iostream>
#include <queue>
using namespace std;

struct structPersona{
	string nombre;
	int edad;
} ;

int main()
{
	structPersona persona1;
	persona1.nombre = "Pedro" ;
	persona1.edad = 10 ;

	structPersona persona2;
	persona2.nombre = "Juan" ;
	persona2.edad = 20 ;
// El punto (.) permite acceder a los campos de la estructura.	
	cout << "Persona1.nombre: " << persona1.nombre << " Persona1.edad: " << persona1.edad << endl ;
	cout << "Persona2.nombre: " << persona2.nombre << " Persona2.edad: " << persona2.edad << endl ;

	persona2 = persona1; //modifica el valor de la persona 2; persona 2 ahora es igual a persona 1
	
	cout << "--Despues de la asignacion--" << endl;
	
	cout << "Persona1.nombre: " << persona1.nombre << " Persona1.edad: " << persona1.edad << endl ;
	cout << "Persona2.nombre: " << persona2.nombre << " Persona2.edad: " << persona2.edad << endl ;

return 0 ;
}
```
