#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> L1 = {10, 200, 30, 40};
    list<int> L2 = {15, 250, 35, 45};

    L1.sort();
    L2.sort();
    
    L1.merge(L2);
    for (int numero : L1) {
        cout << numero << " " << endl;
    }
		/* Es mas rapido y eficiente hacer un sort de
		las listas y despues ponerlas juntas que hacer el
		proceso inverso*/

return 0;

}
