# Ejercicio 6 Idem

    - Ejercicio 6 Idem
        

```cpp
#include <iostream>
#include <string>
#include <set>

using namespace std;

struct structPersona
{
    string nombre;
    int edad;
    structPersona(int e, string n) : nombre(n), edad(e)
    {
    }

    bool operator<(const structPersona &otra) const
    {
       return edad > otra.edad;
    }
    //operador que indica cual es mayor, en este caso se indica que la persona con mayor edad es la mayor
};

int main()
{
    structPersona persona1(30, "Maria");
    structPersona persona2(25, "Juan");

    if (persona1 < persona2)
    {
        cout << persona1.nombre << " es mayor que " << persona2.nombre << endl;
    }
    else
    {
        cout << persona2.nombre << " es mayor que " << persona1.nombre << endl;
    }

    /*
    set<structPersona> arbolPersonas;

    structPersona persona(30, "Maria");
    arbolPersonas.insert(persona);

    persona.nombre = "Juan";
    persona.edad = 25;
    arbolPersonas.insert(persona);

    arbolPersonas.insert(structPersona(35, "Ana"));
    
    for (structPersona p : arbolPersonas)
    {
        cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
    }
    if("Juan" > "Maria")
    cout << "Okey" << endl;
*/
    return 0;
}
```
