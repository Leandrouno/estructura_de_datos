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

cout << "---------Unique-------------" << endl;

L.push_back(100);
L.push_back(200);
L.push_back(300);
L.push_back(400);
L.push_back(400);
L.push_back(500);
L.push_front(400);

L.unique();
for (int numero : L) {
        cout << numero << " " << endl;
}

cout << "---------Sort Unique-------------" << endl;

L.sort(); /*ordena todos los valores iguales
					en caso de letras o estructuras va a
					hacer falta definir el criterio.
					Para ordenar de mayor a menor:
					numeros.sort(greater<int>());*/
for (int numero : L) {
        cout << numero << " " << endl;
}
cout << "..." << endl;

L.unique();
for (int numero : L) {
        cout << numero << " " << endl;
}

cout << "----------------------------" << endl;

for (int numero : L) {
        cout << numero << " " << endl;
}

cout << "----------------------------" << endl;

L.remove(400);

for (int numero : L) {
        cout << numero << " " << endl;
}

return 0;

}
