#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> L1 = {10, 200, 30, 40};

    for (int numero : L1) {
        cout << numero << " " << endl;
    }

    cout << "----------------------------" << endl;

    L1.clear();
    for (int numero : L1) {
        cout << numero << " " << endl;
    }
    //Limpia la lista en lugar de un pop

return 0;

}
