# Ejercicio 1 Lista

    - Ejercicio 1 Lista
        

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {

list<int> L;
L.push_back(10); //pone al final de la lista
L.push_back(20);
L.push_back(30);

cout << L.front() << endl;
cout << L.back() << endl;

cout << "----------------------------" << endl;

L.push_front(5); // pone al frente
L.push_front(2);

cout << L.front() << endl;
cout << L.back() << endl;

cout << "----------------------------" << endl;

L.pop_front();
L.pop_back();

cout << L.front() << endl;
cout << L.back() << endl;

return 0;

}
```
