//Ingresar numeros hasta ingresar 0 y luego mostrar los numeros en el orden ingresado
//Ejemplo: 10, 20, 30, 0  -> 10, 20, 30
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> c;
    int x;
    cin >> x;
    while (x != 0) {  //mientras el numero ingresado no sea 0
        c.push(x);
        cin >> x;
    }
    while (!c.empty()) {
        cout << c.front() << endl;
        c.pop();
    }
    return 0;

}
