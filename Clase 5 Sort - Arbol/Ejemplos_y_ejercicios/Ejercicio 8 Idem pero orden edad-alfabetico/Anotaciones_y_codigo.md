# Ejercicio 8 Idem pero orden edad-alfabetico

    - Ejercicio 8 Idem pero orden edad-alfabetico
        

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
        bool anterior;
        if (edad == otra.edad)
        {//si tiene el numero igual, entonces ordena por nombre
            if (nombre > otra.nombre)
            {
                anterior = true;
            }
            else
            {
                anterior = false;
            }
        } 
        if (edad < otra.edad)
            anterior = true;

        if (edad > otra.edad)
            anterior = false;

        return anterior;
    }
};

int main()
{
    set<structPersona> arbolPersonas;

    structPersona persona(30, "Maria");
    arbolPersonas.insert(persona);
    arbolPersonas.insert(structPersona(25, "Juan1"));
    arbolPersonas.insert(structPersona(25, "Juan0"));
    arbolPersonas.insert(structPersona(25, "Juan3"));
    arbolPersonas.insert(structPersona(23, "Ana"));
    arbolPersonas.insert(structPersona(25, "Ana"));

    for (structPersona p : arbolPersonas)
    {
        cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
    }

    return 0;
}
```
