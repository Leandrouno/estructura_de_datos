#include <iostream>


using namespace std;


int main()
{


    int a;    // crea una entrada y reserva un espacio
    double c; // la memoria que asigna depende del tipo de dato
    int d;
    a = 10;
    cout << "&a= " << &a << " - a= " << a << endl; // en que direccion de memoria está guardada "a"
    cout << "&c= " << &c << " - c= " << c << endl;
    cout << "&d= " << &d << " - d= " << d << endl;
    int *b;// creo un PUNTERO que "apunta" a "a"
    b = &a;// apunta al mismo lugar que tiene a (0xef3dfff81c) (la memoria va cambiando en cada Run)
    cout << "b= " << b << " - *b=" << *b << endl; // b apunta a la MISMA MEMORIA que "a" y devuelve el mismo valor
    // b=20; NO le puedo asignar otro valor
    *b = 20; // le cambio el valor que le asigné a "a"
    cout << "&a= " << &a << " - a= " << a << endl;
}
