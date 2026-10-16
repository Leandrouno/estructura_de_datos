# Ejercicio 2 Cola usando Front y Back

        Ejercicio 2 Cola usando Front y Back
        

```cpp
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> c;
    c.push(10);
    c.push(20);
    c.push(30);
    cout << "Front= " << c.front() << "Back= " << c.back() << endl;
    c.pop(); //Saca el primero
    cout << "Front= " << c.front() << "Back= " << c.back() << endl;

    return 0;
    }
```
