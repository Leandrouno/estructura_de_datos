# Ejercicio 6 Merge

    - Ejercicio 6 Merge
        

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> L1 = {10, 200, 30, 40};
    list<int> L2 = {15, 250, 35, 45};
	/*Intercala los valores de L1 y L2, 
	como si fuera 1, 1a, 2, 2a. 
	Si las listas no estan ordenadas toman 
	el menor valor*/
    L1.merge(L2);
    for (int numero : L1) {
        cout << numero << " " << endl;
    }
cout << "-----------L2---------------" << endl;
 
    for (int numero : L2) {
        cout << numero << " " << endl;
    }
return 0;

}
```
