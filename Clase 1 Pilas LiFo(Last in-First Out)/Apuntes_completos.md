# Clase 1 Pilas LiFo(Last in-First Out)

- Clase 1 Pilas LiFo(Last in-First Out)
    
    Introduccion de gente
    
    Apps para mejorar programacion SoloLearn y Coddy
    
    Presentismo de 8 a 830
    
    Instalar Visual Studio Code - [https://vscode.dev/?vscode-lang-us](https://vscode.dev/?vscode-lang-us)
    
    - Ejercicios
        
        Ejercicio 1
        
        ```cpp
        #include <iostream>
        #include <stack>
        // Ingresar numeros hasta ingresar 0 y luego mostrar los numeros ingresados en orden inverso
        // Ejemplo: 10, 20, 30, 0 => 30, 20, 10
        using namespace std;
        
        int main() {
            int a;
            stack<int> pila;
            cin >> a;
            
            while (a != 0) {
                pila.push(a);
                cin >> a;
            }
            while (!pila.empty()) {
                cout << pila.top() << endl;
                pila.pop();
            }
        
            return 0;
        }
        ```
        
        Ejercicio 2
        
        ```cpp
        #include <iostream>
        #include <stack>
        // Ingresar numeros hasta ingresar 0 y luego mostrar los numeros mayores al ultimo en orden inverso
        // Ejemplo: 50, 20, 10, 60, 35, 0 => 60, 50
        using namespace std;
        
        int main() {
            int a;
            int ultimo;
            stack<int> pila;
            cin >> a;
        
            while (a != 0) {
                pila.push(a);
                cin >> a;
            }
        
            if(!pila.empty()) {
                ultimo = pila.top();
                pila.pop();
            }
        
            while (!pila.empty()) {
                if (pila.top() > ultimo) {
                    cout << pila.top() << endl;
                } 
                pila.pop();
            }
        
            return 0;
        }
        ```
        
    
    Para sacar los valores es top
    
    para sacar el valor de la lista es pop
    
