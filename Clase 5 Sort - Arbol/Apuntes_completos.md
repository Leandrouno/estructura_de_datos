# Clase 5 Sort - Arbol

- Clase 5 Sort - Arbol
    - Comandos
        
        Para insertarlo es “nombredelset”.insert (variable).
        
        Size: Marca la cantidad
        
        Clear: Limpia la lista
        
        Find: Encuentra un valor. “Nombredelset”.find(variable) ;
        
        Erase: Borra un elemento de la lista
        
        Informar el orden: bool operator y return variables
        
    - Ejercicio 1 Ejemplo Basico Set
        
        ```cpp
        #include <iostream> // Permite usar cin y cout.
        #include <set>     // Permite usar set.
        
        using namespace std;// Permite usar cin y cout sin el prefijo std::
        
        // Ingresar numeros hasta ingresar 0 y luego mostrarlo en orden ascendente.
        // Ejemplo: 30 10 20 0 -> 10 20 30
        
        int main()
        {
           
            set<int> Arbol; //formato para crear una lista siempre organizada
            int a;      
        
            cin >> a;     
            while (a != 0){ 
                Arbol.insert(a); //meter la variable a dentro del set Arbol
                cin >> a; 
            }
        
                for (int numero : Arbol) {
                cout << numero << " " << endl; //sacar las variables en orden de Arbol
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 2 Encontrar usando for
        
        ```cpp
        #include <iostream> // Permite usar cin y cout.
        #include <set>     // Permite usar set.
        using namespace std;// Permite usar cin y cout sin el prefijo std::
        // Ingresar numeros hasta ingresar 0 y luego ingresar otro numero finalmente escribi "encontrado" si el numero estaba.
        // En los anteriores
        // Ejemplo: 10 , 30 , 20 , 40 , 0 , 20 -> "Encontrado"
        // Ejemplo: 10 , 30 , 20 , 40 , 0 , 15 -> " "
        
        int main()
        {
           
            set<int> Arbol; 
            int a;      
        
            cin >> a;     
            while (a != 0){ 
                Arbol.insert(a);
                cin >> a; 
            }
            cin >> a; //indica que numero queres buscar
        //Buscar en los sets es mas rapido gracias a que ordena todo
            for (int numero : Arbol) { //recorre todo el set
                if (numero == a) //si encuentra un numero como el solicitado
                    cout << "Encontrado " << numero << endl;
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 3 Encontrar usando Find
        
        ```cpp
        #include <iostream> // Permite usar cin y cout.
        #include <set>     // Permite usar set.
        using namespace std;// Permite usar cin y cout sin el prefijo std::
        // Ingresar numeros hasta ingresar 0 y luego ingresar otro numero finalmente escribi "encontrado" si el numero estaba.
        // En los anteriores
        // Ejemplo: 10 , 30 , 20 , 40 , 0 , 20 -> "Encontrado"
        // Ejemplo: 10 , 30 , 20 , 40 , 0 , 15 -> " "
        
        int main()
        {
           
            set<int> Arbol; 
            int a;      
        
            cin >> a;     
            while (a != 0){ 
                Arbol.insert(a);
                cin >> a; 
            }
            cin >> a; 
        //Buscar en los sets es mas rapido gracias a que ordena todo 
            if (Arbol.find(a) != Arbol.end())
        		    cout << "Encontrado " << a << endl;
        		//el find the envia un puntero de la ubicacion de lo que estas buscando
        		// y si no encuentra nada devuelve el final del set
        
            return 0;
        }
        ```
        
    - Ejercicio 4  Erase
        
        ```cpp
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
        ```
        
    - Ejercicio 5 Set + Structura + Orden
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <set>
        
        using namespace std;
        
        struct structPersona
        {
            string nombre;
            int edad;
            structPersona(int e, string n) : nombre(n), edad(e)
            {
            }
            bool operator<(const structPersona &otra) const
            {
                return edad > otra.edad;
            //operador que indica cual es mayor, en este caso se indica que la persona con mayor edad es la mayor
            //bool devuelve verdadero cuando un elemento esta antes de otro elemento
            }
        };
        
        int main()
        {
            set<structPersona> arbolPersonas;
        
            structPersona persona(30, "Maria");
            arbolPersonas.insert(persona);
        
            persona.nombre = "Juan";
            persona.edad = 25;
            arbolPersonas.insert(persona);
        
            for (structPersona p : arbolPersonas)
            {
                cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
            }
        
            return 0;
        }
        ```
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <set>
        
        using namespace std;
        
        struct structPersona
        {
            string nombre;
            int edad;
            structPersona(int e, string n) : nombre(n), edad(e)
            {
            }
            bool operator<(const structPersona &otra) const
            {
                return edad > otra.edad;
            }
        };
        
        int main()
        {
            set<structPersona> arbolPersonas;
        
            structPersona persona(30, "Maria");
            arbolPersonas.insert(persona);
        
            persona.nombre = "Juan";
            persona.edad = 25;
            arbolPersonas.insert(persona);
        
            for (structPersona p : arbolPersonas)
            {
                cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
            }
            if("Juan" > "Maria")
            cout << "Okey" << endl;
        
            return 0;
        }
        ```
        
    - Ejercicio 6 Idem
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <set>
        
        using namespace std;
        
        struct structPersona
        {
            string nombre;
            int edad;
            structPersona(int e, string n) : nombre(n), edad(e)
            {
            }
        
            bool operator<(const structPersona &otra) const
            {
               return edad > otra.edad;
            }
            //operador que indica cual es mayor, en este caso se indica que la persona con mayor edad es la mayor
        };
        
        int main()
        {
            structPersona persona1(30, "Maria");
            structPersona persona2(25, "Juan");
        
            if (persona1 < persona2)
            {
                cout << persona1.nombre << " es mayor que " << persona2.nombre << endl;
            }
            else
            {
                cout << persona2.nombre << " es mayor que " << persona1.nombre << endl;
            }
        
            /*
            set<structPersona> arbolPersonas;
        
            structPersona persona(30, "Maria");
            arbolPersonas.insert(persona);
        
            persona.nombre = "Juan";
            persona.edad = 25;
            arbolPersonas.insert(persona);
        
            arbolPersonas.insert(structPersona(35, "Ana"));
            
            for (structPersona p : arbolPersonas)
            {
                cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
            }
            if("Juan" > "Maria")
            cout << "Okey" << endl;
        */
            return 0;
        }
        ```
        
    - Ejercicio 7 Idem
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <set>
        
        using namespace std;
        
        struct structPersona
        {
            string nombre;
            int edad;
            structPersona(int e, string n) : nombre(n), edad(e)
            {
            }
            bool operator<(const structPersona &otra) const
            {
                bool anterior;
                if (edad > otra.edad)
                {
                    anterior = true;
                }
                else
                    anterior = false;
                return anterior;
            }
        };
        
        int main()
        {
            set<structPersona> arbolPersonas;
        
            structPersona persona(30, "Maria");
            arbolPersonas.insert(persona);
        
            persona.nombre = "Juan";
            persona.edad = 25;
            arbolPersonas.insert(persona);
        
            arbolPersonas.insert(structPersona(25, "Ana"));
        
            for (structPersona p : arbolPersonas)
            {
                cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
            }
        
            return 0;
        }
        ```
        
    - Ejercicio 8 Idem pero orden edad-alfabetico
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <set>
        
        using namespace std;
        
        struct structPersona
        {
            string nombre;
            int edad;
            structPersona(int e, string n) : nombre(n), edad(e)
            {
            }
            bool operator<(const structPersona &otra) const
            {
                bool anterior;
                if (edad == otra.edad)
                {//si tiene el numero igual, entonces ordena por nombre
                    if (nombre > otra.nombre)
                    {
                        anterior = true;
                    }
                    else
                    {
                        anterior = false;
                    }
                } 
                if (edad < otra.edad)
                    anterior = true;
        
                if (edad > otra.edad)
                    anterior = false;
        
                return anterior;
            }
        };
        
        int main()
        {
            set<structPersona> arbolPersonas;
        
            structPersona persona(30, "Maria");
            arbolPersonas.insert(persona);
            arbolPersonas.insert(structPersona(25, "Juan1"));
            arbolPersonas.insert(structPersona(25, "Juan0"));
            arbolPersonas.insert(structPersona(25, "Juan3"));
            arbolPersonas.insert(structPersona(23, "Ana"));
            arbolPersonas.insert(structPersona(25, "Ana"));
        
            for (structPersona p : arbolPersonas)
            {
                cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
            }
        
            return 0;
        }
        ```
        
    
