# Clase 4 Listas

- Clase 4 Listas
    
    #include <list> para usar listas. 
    
    crear lista= list<tipo> NombreLista
    
    - Ejercicio 1 Lista
        
        ```cpp
        #include <iostream>
        #include <list>
        
        using namespace std;
        
        int main() {
        
        list<int> L;
        L.push_back(10); //pone al final de la lista
        L.push_back(20);
        L.push_back(30);
        
        cout << L.front() << endl;
        cout << L.back() << endl;
        
        cout << "----------------------------" << endl;
        
        L.push_front(5); // pone al frente
        L.push_front(2);
        
        cout << L.front() << endl;
        cout << L.back() << endl;
        
        cout << "----------------------------" << endl;
        
        L.pop_front();
        L.pop_back();
        
        cout << L.front() << endl;
        cout << L.back() << endl;
        
        return 0;
        
        }
        ```
        
    - Ejercicio 2 Lista + Mostrar lista completa + Remover elementos
        
        ```cpp
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
        
        cout << "----------------------------" << endl;
        
        L.push_back(100);
        L.push_back(200);
        L.push_back(300);
        L.push_back(400);
        L.push_back(400);
        L.push_back(500);
        L.push_front(400);
        
        // Impresion de toda la lista
        for (int numero : L) {
                cout << numero << " " << endl;
        }
        
        cout << "----------------------------" << endl;
        
        //remueve todo lo que coincida con el valor/dato en la lista que coincida con lo que esta en corchetes
        L.remove(400);
        
        for (int numero : L) {
                cout << numero << " " << endl;
        }
        
        return 0;
        
        }
        ```
        
    - Ejercicio 3 Unique
        
        ```cpp
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
        //Unique, borra los repetidos solo cuando estan juntos
        
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
        ```
        
    - Ejercicio 4 Sort Unique
        
        ```cpp
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
        ```
        
    - Ejercicio 5 Reverse
        
        ```cpp
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
        
        L.sort();
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
        ```
        
    - Ejercicio 6 Merge
        
        ```cpp
        #include <iostream>
        #include <list>
        
        using namespace std;
        
        int main() {
        
            list<int> L1 = {10, 200, 30, 40};
            list<int> L2 = {15, 250, 35, 45};
        	/*Intercala los valores de L1 y L2, 
        	como si fuera 1, 1a, 2, 2a. 
        	Si las listas no estan ordenadas toman 
        	el menor valor*/
            L1.merge(L2);
            for (int numero : L1) {
                cout << numero << " " << endl;
            }
        cout << "-----------L2---------------" << endl;
         
            for (int numero : L2) {
                cout << numero << " " << endl;
            }
        return 0;
        
        }
        ```
        
    - Ejercicio 7 Sort despues Merge
        
        ```cpp
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
        ```
        
    - Ejercicio 8 Clear
        
        ```cpp
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
        ```
        
    - Ejercicio Tipo parcial - uso lista como cola o pila
        
        ```cpp
        //Ejemplo Lista como Pila
        
        #include <iostream> // Permite usar cin y cout.
        #include <list>     // Permite usar list.
        using namespace std;
        // INGRESAR NUMEROS HASTA INGRESAR 0, Y LUEGO MOSTRARLO EN EL ORDEN INVERSO, USANDO UNA LISTA
        // EJEMPLO: 10, 20, 30, 0 -> 30, 20, 10
        
        int main()
        {
            // crear una lista
            list<int> L; //crea una lista con numeros enteros 
            int a; //variable donde guardo los numeros que ingreso 
        
            cin >> a; //pide el primer numero a ingresar
            while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
            {
                // pila.push(a);
                L.push_front(a); //agrega el numero al principio de la lista (al frente de la lista ,arriba del todo si es una pila de remeras)
                cin >> a; //pide ingresar el siguiente numero
            }
        
            // while (!pila.empty()) {
            while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
            {
                // cout << pila.top() << endl;
                cout << L.front() << endl; //muestra el primer elemento de la lista
                // pila.pop();
                L.pop_front(); //elimina el primer elemento de la lista
            }
        
            return 0;
        }
        ```
        
        ```cpp
        //Ejemplo Lista con pila 2, usando back en lugar de front
        
        #include <iostream> // Permite usar cin y cout.
        #include <list>     // Permite usar list.
        using namespace std;
        // INGRESAR NUMEROS HASTA INGRESAR 0, Y LUEGO MOSTRARLO EN EL ORDEN INVERSO, USANDO UNA LISTA
        // EJEMPLO: 10, 20, 30, 0 -> 30, 20, 10
        
        int main()
        {
            // crear una lista
            list<int> L; // crea una lista con numeros enteros
            int a;       // variable donde guardo los numeros que ingreso
        
            cin >> a;      // pide el primer numero a ingresar
            while (a != 0) // repite el bucle mientras el numero ingresado sea diferente de 0
            {
                // pila.push(a);
                L.push_back(a); // agrega el numero ingresado al final de la lista
                cin >> a; // pide ingresar el siguiente numero
            }
        
            // while (!pila.empty()) {
            while (!L.empty()) // repite mientras la lista no este vacia (tenga elementos)
            {
                // cout << pila.top() << endl;
                cout << L.back() << endl; // muestra el ultimo elemento de la lista
                // pila.pop();
                L.pop_back(); // elimina el ultimo elemento de la lista
            }
        
            return 0;
        }
        ```
        
        ```cpp
        //Ejemplo lista como Cola
        
        /*INGRESAR NUMEROS HASTA INGRESAR 0, Y LUEGO MOSTRARLO EN EL ORDEN INGRESADO, USANDO UNA LISTA
        EJEMPLO: 10, 20, 30, 0 -> 10, 20, 30*/
        
        #include <iostream>
        #include <list>
        using namespace std;
        
        int main(){
            // crear una lista
            list<int> L; //crea una lista con numeros enteros 
            int a; //variable donde guardo los numeros que ingreso 
        
            cin >> a; //pide el primer numero a ingresar
            while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
            {
                L.push_front(a); //agrega el numero al principio de la lista
                cin >> a; //pide ingresar el siguiente numero
            }
            while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
            {
                cout << L.back() << endl; // muestra el ultimo elemento de la lista
                L.pop_back(); // elimina el ultimo elemento de la lista
            }
            return 0;
        }
        ```
        
