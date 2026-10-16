#include <iostream>  // Permite usar cin y cout.
#include <set>       // Permite usar set.
using namespace std; // Permite usar cin y cout sin el prefijo std::

int main()
{

  set<int> Arbol = {30, 20, 40, 10};

  for (int numero : Arbol)
  {

    cout << numero << endl;
  }
  Arbol.erase(20);

  cout << "--------------" << endl;
  
  for (int numero : Arbol)
  {

    cout << numero << endl;
  }

  return 0;
}
