# Muestra Inicial

    Muestra Inicial
    

```cpp
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> c;
    c.push(10);
    c.push(20);
    cout << c.front() << endl;
    c.pop();
    cout << c.front() << endl;

    return 0;

}
```
