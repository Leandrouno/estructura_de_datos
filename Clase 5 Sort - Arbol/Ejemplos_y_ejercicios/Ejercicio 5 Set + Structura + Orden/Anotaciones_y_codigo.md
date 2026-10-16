# Ejercicio 5 Set + Structura + Orden

    - Ejercicio 5 Set + Structura + Orden
        

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
    //operador que indica cual es mayor, en este caso se indica que la persona con mayor edad es la mayor
    //bool devuelve verdadero cuando un elemento esta antes de otro elemento
    }
};

int main()
{
    set<structPersona> arbolPersonas;

    structPersona persona(30, "Maria");
    arbolPersonas.insert(persona);

    persona.nombre = "Juan";
    persona.edad = 25;
    arbolPersonas.insert(persona);

    for (structPersona p : arbolPersonas)
    {
        cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
    }

    return 0;
}
```
