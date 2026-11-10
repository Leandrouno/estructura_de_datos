#include <iostream>
using namespace std;


void collatz(int n) {
    cout << n << " ";


    if (n == 1)
        return;


    if (n % 2 == 0)
        collatz(n / 2);
    else
        collatz(n * 3 + 1);
}


int main() {
    int n;


    cout << "Ingrese un numero: ";
    cin >> n;


    if (n > 0)
        collatz(n);


    return 0;
}
