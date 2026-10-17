#include <iostream>




using namespace std;


int main() {


    int a; //crea una entrada y reserva un espacio de memoria
    int c=30; //la memoria que asigna depende del tipo de dato
    int d=40;
    a = 10;
    cout<< "&a= "<<&a << " - a= " << a <<endl; //en que direccion de memoria está guardada "a"
    cout<< "&c= "<<&c << " - c= " << c <<endl;
    cout<< "&d= "<<&d << " - d= " << d <<endl;
    int* b; //creo un PUNTERO que "apunta" a "a"
    b= &c; //apunta al mismo lugar que tiene a (0xef3dfff81c) (la memoria va cambiando en cada Run)
    cout<< "b= "<< b << " - *b=" << *b <<endl; //b apunta a la MISMA MEMORIA que "a" y devuelve el mismo valor
    b--; //suma/resta el valor de la memoria de a 4 (puntero de enteros)
    cout<< "b= "<< b << " - *b=" << *b <<endl;
}
