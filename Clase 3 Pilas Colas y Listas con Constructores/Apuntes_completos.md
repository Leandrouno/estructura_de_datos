# Clase 3 Pilas Colas y Listas con Constructores

- Clase 3 Pilas Colas y Listas con Constructores
    - Ejercicio 1 Constructor Estructura
        
        ```cpp
        #include <iostream>
        #include <string>
        #include <algorithm> // Requerido para std::transform
        #include <cctype>    // Requerido para ::toupper
        
        using namespace std;
        
        struct structPersonaConstructor {
            string nombre;
            int edad;
        
           structPersonaConstructor(int e, string n) : nombre(n), edad(e) {
             //   transform(nombre.begin(), nombre.end(), nombre.begin(), ::toupper);
            }
        };
        
        struct structPersona {
            string nombre;
            int edad;
        };
        
        int main() {
            structPersona persona1;
        	persona1.nombre = "Pedro" ;
        	persona1.edad = 10 ;
            
        	structPersona persona2;
        	persona2.nombre = "Juan" ;
        	persona2.edad = 20 ;
        
            structPersonaConstructor persona3(30, "Maria");
        
            return 0;
            
        }
        ```
        
    - Ejercicio 2 cin, push cola una estructura
        
        ```cpp
        //INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
        // LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
        // EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20
        
        #include <iostream>
        #include <string>
        #include <queue>
        
        using namespace std;
        
        // struct structPersonaConstructor {
        //     string nombre;
        //     int edad;
        
        //    structPersonaConstructor(int e, string n) : nombre(n), edad(e) {}
        // };
        
        struct structPersona {
            string nombre;
            int edad;
        };
        
        int main() {
        
            queue<structPersona> colaPersonas;
            structPersona persona;
            string nombre;
            int edad;
        
            cin >> nombre;
            while (nombre != "FIN") {
                cin >> edad;
                persona.nombre = nombre;
                persona.edad = edad;
        
                // Agregar la persona a la cola
                colaPersonas.push(persona);
                cin >> nombre;
            }
            
            while (!colaPersonas.empty()) {
                persona = colaPersonas.front();
                cout << persona.nombre << " " << persona.edad << endl;
                colaPersonas.pop();
            }
        
            return 0;
            
        }
        ```
        
    - Ejercicio 2 version con front
        
        ```cpp
        //INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
        // LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
        // EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20
        
        #include <iostream>
        #include <string>
        #include <queue>
        
        using namespace std;
        
        // struct structPersonaConstructor {
        //     string nombre;
        //     int edad;
        
        //    structPersonaConstructor(int e, string n) : nombre(n), edad(e) {}
        // };
        
        struct structPersona {
            string nombre;
            int edad;
        };
        
        int main() {
        
            queue<structPersona> colaPersonas;
            structPersona persona;
            string nombre;
            int edad;
        
            cin >> nombre;
            while (nombre != "FIN") {
                cin >> edad;
                persona.nombre = nombre;
                persona.edad = edad;
        
                // Agregar la persona a la cola
                colaPersonas.push(persona);
                cin >> nombre;
            }
            
            while (!colaPersonas.empty()) {
               // persona = colaPersonas.front();
                //cout << persona.nombre << " " << persona.edad << endl;
                cout << colaPersonas.front().nombre << " " << colaPersonas.front().edad << endl;
                colaPersonas.pop();
            }
        
            return 0;
            
        }
        ```
        
    - Ejercicio 3 ej2, pero usando constructores
        
        Emplace = hace un push usando una estructura, y ordena la informacion en base al constructor ya definido antes
        
        ```cpp
        //INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
        // LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
        // EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20
        
        #include <iostream>
        #include <string>
        #include <queue>
        
        using namespace std;
        
        struct structPersonaConstructor {
            string nombre;
            int edad;
        
           structPersonaConstructor(int e, string n) : nombre(n), edad(e) {}
        };
        
        // struct structPersona {
        //     string nombre;
        //     int edad;
        // };
        
        int main() {
        
            queue<structPersonaConstructor> colaPersonas;
            string nombre;
            int edad;
        
            cin >> nombre;
            while (nombre != "FIN") {
                cin >> edad;
                colaPersonas.emplace(edad, nombre);
                cin >> nombre;
            }
            
            while (!colaPersonas.empty()) {
               // persona = colaPersonas.front();
                //cout << persona.nombre << " " << persona.edad << endl;
                cout << colaPersonas.front().nombre << " " << colaPersonas.front().edad << endl;
                colaPersonas.pop();
            }
        
            return 0;
            
        }
        ```
        
    - Ejercicio terminado + instrucciones
        
        ```cpp
        //INGRESAR EN UNA COLA PERSONAS CON NOMBRE Y EDAD HASTA INGRESAR FIN
        // LUEGO MOSTRAR LAS PERSONAS EN EL ORDEN INGRESADO
        // EJEMPLO : PEDRO, 10, JUAN, 20, FIN -> PEDRO 10, JUAN 20
        
        #include <iostream>
        #include <string>
        #include <algorithm> // Requerido para std::transform
        #include <cctype>    // Requerido para ::toupper
        #include <queue>
        
        using namespace std;
        
        struct structPersonaConstructor {
            string nombre;
            int edad;
        
           structPersonaConstructor(int e, string n) : nombre(n), edad(e) {
             //   transform(nombre.begin(), nombre.end(), nombre.begin(), ::toupper);
            }
        };
        
        struct structPersona {
            string nombre;
            int edad;
        };
        
        int main() {
            
            structPersona persona1;
        	persona1.nombre = "Pedro" ;
        	persona1.edad = 10 ;
            
        	structPersona persona2;
        	persona2.nombre = "Juan" ;
        	persona2.edad = 20 ;
        
            structPersonaConstructor persona3(30, "Maria");
        
            queue<structPersona> colaPersonas;
            queue<structPersonaConstructor> colaPersonasConstructor;
        
            colaPersonas.push(persona1);
            colaPersonas.push(persona2);
        
            return 0;
            
        }
        ```
        
    - Ejercicio 4
        
        Ejercicio ejemplo parcial
        
        ```cpp
        // ingresar nombres y valores hasta ingresar fin mostrando los nombres en el orden ingresado y los valores en orden inverso 
        // ejemplo pedro, 10,20,30,0, juan, 15,25,0.  fin
        // salida pedro 30,20,10 juan 25,15
        
        #include <iostream>
        #include <string>
        #include <queue>
        #include <stack>
        
        using namespace std;
        
        struct structPersonaConstructor {
            string nombre;
            stack<int> pilaEdades;
           structPersonaConstructor(stack<int> pe, string n) : nombre(n), pilaEdades(pe) {}
        };
        
        int main() {
        
            queue<structPersonaConstructor> colaPersonas;
            string nombre;
            int edad;
            stack<int> pilaEdades;
            cin >> nombre;
            while (nombre != "FIN") {
                
                while (!pilaEdades.empty()) {
                    pilaEdades.pop();
                } // este while "limpia" la pila de edades
                cin >> edad;
                while (edad != 0) {
                    pilaEdades.push(edad);
                    cin >> edad;
                } // mientras no se ponga 0 se agregan numeros a la pila
                colaPersonas.emplace(pilaEdades, nombre);
                cin >> nombre;
        		    }
        				
        				while (!colaPersonas.empty()) {
                cout << colaPersonas.front().nombre << endl;
                while (!colaPersonas.front().pilaEdades.empty()) {
                    cout << colaPersonas.front().pilaEdades.top() << " ";
                    colaPersonas.front().pilaEdades.pop();
                }
                cout << endl;
                colaPersonas.pop();
            }
        
            return 0;
           
        }
        ```
        
        ```cpp
        // ingresar nombres y valores hasta ingresar fin mostrando los nombres en el orden ingresado y los valores en orden inverso 
        // ejemplo pedro, 10,20,30,0, juan, 15,25,0.  fin
        // salida pedro 30,20,10 juan 25,15
        
        #include <iostream>
        #include <string>
        #include <queue>
        #include <stack>
        
        using namespace std;
        
        struct structPersonaConstructor {
            string nombre;
            stack<int> pilaEdades;
           structPersonaConstructor(stack<int> pe, string n) : nombre(n), pilaEdades(pe) {}
        };
        
        int main() {
        
            queue<structPersonaConstructor> colaPersonas;
            string nombre;
            int edad;
            stack<int> pilaEdades;
            cin >> nombre;
            while (nombre != "FIN") {
                
                while (!pilaEdades.empty()) {
                    pilaEdades.pop();
                }
                cin >> edad;
                while (edad != 0) {
                    pilaEdades.push(edad);
                    cin >> edad;
                }
                colaPersonas.emplace(pilaEdades, nombre);
                cin >> nombre;
            }
           
            while (!colaPersonas.empty()) {
                cout << colaPersonas.front().nombre << endl;
                while (!colaPersonas.front().pilaEdades.empty()) {
                    cout << colaPersonas.front().pilaEdades.top() << " ";
                    colaPersonas.front().pilaEdades.pop();
                }
                cout << endl;
                colaPersonas.pop();
            }
        
            return 0;
           
        }
        ```
        
