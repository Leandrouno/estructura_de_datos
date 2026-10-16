# Ejercicio 7 Idem

    - Ejercicio 7 Idem
        

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
        if (edad > otra.edad)
        {
            anterior = true;
        }
        else
            anterior = false;
        return anterior;
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

    arbolPersonas.insert(structPersona(25, "Ana"));

    for (structPersona p : arbolPersonas)
    {
        cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
    }

    return 0;
}
```
