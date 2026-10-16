# Bloque de codigo 06

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
    if("Juan" > "Maria")
    cout << "Okey" << endl;

    return 0;
}
```
