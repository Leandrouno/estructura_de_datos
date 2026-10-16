# Ejercicio 2 Lista + Mostrar lista completa + Remover elementos

    - Ejercicio 2 Lista + Mostrar lista completa + Remover elementos
        

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {

list<int> L;
L.push_back(10);
L.push_back(20);
L.push_back(30);

cout << L.front() << endl;
cout << L.back() << endl;

cout << "----------------------------" << endl;

L.push_front(5);
L.push_front(2);

cout << L.front() << endl;
cout << L.back() << endl;

cout << "----------------------------" << endl;

L.pop_front();
L.pop_back();

cout << L.front() << endl;
cout << L.back() << endl;

cout << "----------------------------" << endl;

L.push_back(100);
L.push_back(200);
L.push_back(300);
L.push_back(400);
L.push_back(400);
L.push_back(500);
L.push_front(400);

// Impresion de toda la lista
for (int numero : L) {
        cout << numero << " " << endl;
}

cout << "----------------------------" << endl;

//remueve todo lo que coincida con el valor/dato en la lista que coincida con lo que esta en corchetes
L.remove(400);

for (int numero : L) {
        cout << numero << " " << endl;
}

return 0;

}
```
