# Bloque de codigo 06

```cpp
//Ingresar numeros hasta ingresar 0 y luego mostrar los numeros mayores al ultimo en el orden ingresado 
//Ejemplo: 10, 20, 30, 15, 35, 25, 0 -> 30, 35

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> c;
    int x;
    int ultimo;
    cin >> x;

    while (x != 0){
        c.push(x);
        cin >> x;
    }

    ultimo=c.back();

    while(!c.empty()){
        if (c.front()>ultimo){
            cout << c.front() << endl;
        }
        c.pop();
    }

    return 0;
}
```
