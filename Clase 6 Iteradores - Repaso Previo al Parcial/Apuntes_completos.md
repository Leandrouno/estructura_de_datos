# Clase 6 Iteradores - Repaso Previo al Parcial

- Clase 6 Iteradores - Repaso Previo al Parcial
    
    Para indicar que el numero sea par es %2 ==0, para impar %2 ! = 0
    
    - Ejercicio 1 Ejemplo Pilas Pares Muestra
        
        ```cpp
        #include <iostream>
        #include <stack>  
        using namespace std;
        
        //ingresar numeros hasta ingresar 0 y luego mostrar los pares en orden inverso
        //ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 40, 30, 20, 10 
        int main() {
            int a;
            stack<int> pila; // Declara una pila (estructura LIFO: el último en entrar es el primero en salir)
            cin >> a;
        
            while (a != 0) {
                pila.push(a); // push(): Agrega un nuevo elemento a la parte superior de la pila
                cin >> a;
            }
        
            while (!pila.empty()) {
                if (pila.top() % 2 == 0) //el %2 indica: para los numeros pares
                {
                    cout << pila.top() << endl; // top(): Accede y lee el valor del elemento superior sin eliminarlo
                }
                pila.pop(); // pop(): Elimina el elemento que está en la parte superior de la pila
        
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 2 Ejemplo Pilas Pares Ingreso
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <stack>
        
        using namespace std;
        // ingresar numeros hasta ingresar 0 y luego mostrar los pares en orden inverso
        // ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 40, 30, 20, 10
        
        int main()
        {
            int a;
            stack<int> pila; // Declara una pila (estructura LIFO: el último en entrar es el primero en salir)
            cin >> a;
        
            while (a != 0)
            {
                if (a % 2 == 0)
                {                 // el %2 == 0 indica: para los numeros pares
                    pila.push(a); // push(): Agrega un nuevo elemento a la parte superior de la pila
                }
                cin >> a;
            }
        
            while (!pila.empty())
            {
                cout << pila.top() << endl; // top(): Accede y lee el valor del elemento superior sin eliminarlo
                pila.pop();                 // pop(): Elimina el elemento que está en la parte superior de la pila
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 3 Cola Impares Ingreso
        
        ```cpp
        #include <iostream>
        #include <queue>
        
        using namespace std;
        // ingresar numeros hasta ingresar 0 y luego mostrar los impares en el orden ingresado
        // ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 15, 35, 45
        
        int main()
        {
            int a;
            queue<int> cola; // Declara una cola (estructura FIFO: el primero en entrar es el primero en salir)
            cin >> a;
        
            while (a != 0)
            {
                if (a % 2 != 0)
                {
                    cola.push(a); // push(): Agrega un nuevo elemento a la parte superior de la pila
                }
                cin >> a;
            }
        
            while (!cola.empty())
            {
                cout << cola.front() << endl; // top(): Accede y lee el valor del elemento superior sin eliminarlo
                cola.pop();                   // pop(): Elimina el elemento que está en la parte superior de la pila
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 4 Lista, Simil Cola
        
        ```cpp
        #include <iostream>
        #include <list>
        
        using namespace std;
        // ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden ingresado (usando listas) agregando por front y sacando por back
        // ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 10, 15, 20, 30, 35, 40, 45
        
        int main()
        {
            list<int> L; //crea una lista con numeros enteros 
            int a; //variable donde guardo los numeros que ingreso 
        
            cin >> a; //pide el primer numero a ingresar
            while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
            {
                L.push_front(a); //agrega el numero al principio de la lista (al frente de la lista ,arriba del todo si es una pila de remeras)
                cin >> a; //pide ingresar el siguiente numero
            }
        
            while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
            {
                cout << L.back() << endl; //muestra el primer elemento de la lista
                L.pop_back(); //elimina el primer elemento de la lista
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 4 Lista, Simil Cola
        
        ```cpp
        #include <iostream>
        #include <list>
        
        using namespace std;
        // ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden ingresado (usando listas) agregando por front y sacando por back
        // ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 10, 15, 20, 30, 35, 40, 45
        
        int main()
        {
            list<int> L; //crea una lista con numeros enteros 
            int a; //variable donde guardo los numeros que ingreso 
        
            cin >> a; //pide el primer numero a ingresar
            while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
            {
                L.push_front(a); //agrega el numero al principio de la lista (al frente de la lista ,arriba del todo si es una pila de remeras)
                cin >> a; //pide ingresar el siguiente numero
            }
        
            while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
            {
                cout << L.back() << endl; //muestra el primer elemento de la lista
                L.pop_back(); //elimina el primer elemento de la lista
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 5 Lista, Simil Pila
        
        ```cpp
        #include <iostream>
        #include <list>
        
        using namespace std;
        // ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden inverso al  ingresado(usando listas) agregando  y sacando por back
        // ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 ->45,40,35,30,20,15,10
        
        int main()
        {
            // crear una lista
            list<int> L; //crea una lista con numeros enteros 
            int a; //variable donde guardo los numeros que ingreso 
        
            cin >> a; //pide el primer numero a ingresar
            while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
            {
                L.push_back(a); 
                cin >> a; //pide ingresar el siguiente numero
            }
        
            while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
            {
                cout << L.back() << endl; //muestra el primer elemento de la lista
                L.pop_back(); //elimina el primer elemento de la lista
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 5 Lista, Simil Pila
        
        ```cpp
        #include <iostream>
        #include <list>
        
        using namespace std;
        // ingresar numeros hasta ingresar 0 y luego mostrarlo en el orden inverso al  ingresado(usando listas) agregando  y sacando por back
        // ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 ->45,40,35,30,20,15,10
        
        int main()
        {
            // crear una lista
            list<int> L; //crea una lista con numeros enteros 
            int a; //variable donde guardo los numeros que ingreso 
        
            cin >> a; //pide el primer numero a ingresar
            while (a != 0)   //repite el bucle mientras el numero ingresado sea diferente de 0
            {
                L.push_back(a); 
                cin >> a; //pide ingresar el siguiente numero
            }
        
            while (!L.empty())  //repite mientras la lista no este vacia (tenga elementos)
            {
                cout << L.back() << endl; //muestra el primer elemento de la lista
                L.pop_back(); //elimina el primer elemento de la lista
            }
        
            return 0;
        }
        ```
        
- Parcial
    
    ```cpp
    //1) Ingresar números hasta ingresar 0 y luego mostrar los impares en el orden ingresado.
    // Ejemplo: 10, 15, 20, 30, 30, 35, 40, 45, 0 -> 15, 35, 45
    #include <iostream>
    #include <queue>
    using namespace std;
    
    int  main(){
        int a;
        queue<int> cola;
        cin>>a;
    
        while(a!=0){
            cola.push(a);
            cin>>a;
        }
    
        while (!cola.empty())
        {
            if(cola.front()%2 !=0){
                cout<<cola.front()<<endl;
            }
    
            cola.pop();
        }
        return 0;  
    }
    
    //2) Ingresar números hasta ingresar 0 y luego mostrar los pares en orden inverso.
    //Ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 40, 30, 20, 10
    #include <iostream>
    #include <stack>
    using namespace std;
    
    int main(){
        int a;
        stack<int> pila;
        cin >>a;
    
        while(a!=0){
            pila.push(a);
            cin>> a;
        }
    
        while(!pila.empty()){
            if(pila.top()%2==0){
                cout<<pila.top()<< endl;
            }
            pila.pop();
        }
    
        return 0;
    }
    
    //3) Ingresar números hasta ingresar 0 y luego mostrarlo en el orden ingresado (usando listas) agregando por front y sacando por back
    // Ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 10, 15, 20, 30, 35, 40, 45
    #include <iostream>
    #include <list>
    using namespace std;
    int main(){
        int a;
        list<int> lista;
        cin>>a;
    
        while(a!=0){
            lista.push_front(a);
            cin>>a;
        }
    
        while (!lista.empty())
        {
            cout<<lista.back()<<endl;
            lista.pop_back();
        }
        return 0;
       
    }
    
    //4) Ingresar números hasta ingresar 0 y luego mostrarlo en el orden inverso al ingresado (usando listas) agregando y sacando por front
    //   Ejemplo: 10, 15, 20, 30, 35, 40, 45, 0 -> 45, 40 ,35, 30, 20, 15, 10
    #include <iostream>
    #include <list>
    using namespace std;
    
    main(){
        int a;
        list<int> lista;
        cin>>a;
       
        while(a !=0){
            lista.push_front(a);
            cin>>a;
        }
    
        while(!lista.empty()){
            cout<<lista.front()<<endl;
            lista.pop_front();
        }
    
        return 0;
    }
    
    //5) Ingresar nombre de persona y edades de hijos, terminando el ingreso de las edades con 0 y el ingreso de personas con "FIN".
    // Finalmente mostrar las personas en el orden ingresado y las edades de los hijos en orden ascendente.
    // Ejemplo: Luis, 15, 10, 0, Martin, 12, 4, 8, 0, Laura, 13, 0, FIN -> Luis, 10, 15, Martin, 4, 8, 12, Laura, 13
    #include <iostream>
    #include <string>
    #include <queue>
    #include <set>
    using namespace std;
    
    struct structpersona{
        string nombre;
        set<int> edades;
    };
    
    int main(){
        queue<structpersona> colapersona;
        string nombre;
        int edad;
    
        cin>> nombre;
        while (nombre!="FIN")
        {
            structpersona persona;
            persona.nombre=nombre;
    
            cin>> edad;
    
            while(edad!=0){
                persona.edades.insert(edad);
                cin>> edad;
            }
    
            colapersona.push(persona);
    
            cin>> nombre;
        }
    
        while(!colapersona.empty()){
            structpersona frente = colapersona.front();
            cout<< frente.nombre<< ":";
    
            for( int edadhijo: frente.edades){
                cout<< edadhijo << " ";
            }
    
            colapersona.pop();
        }
    
        return 0;
       
    }
    ```