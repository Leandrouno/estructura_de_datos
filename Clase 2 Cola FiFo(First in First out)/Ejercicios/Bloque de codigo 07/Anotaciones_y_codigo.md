# Bloque de codigo 07

            
    - Nota IA
        
        
        Resumen
        
        ### Acción Items
        
        - [ ]  Todos los estudiantes deben mantener un bloc de notas o archivo con todos los códigos vistos en clase, ya que el profesor pide reutilizarlos frecuentemente
        - [ ]  Estudiar y repasar todo lo visto hasta la fecha (pilas, colas, empty, push, pop, front, back) para la próxima clase
        - [ ]  Nerea debe compartir pantalla y demostrar que puede programar en la próxima clase
        
        ### Repaso: Diferencia entre Pilas y Colas
        
        - **Pila (Stack)** → estructura LIFO (*Last In, First Out*): el último en entrar es el primero en salir, como una pila de remeras en un estante
        - **Cola (Queue)** → estructura FIFO (*First In, First Out*): el primero en entrar es el primero en salir, como una cola de colectivo
        - Representación gráfica: una pila se dibuja en forma vertical (valores apilados), una cola en forma horizontal (valores que entran por la derecha y salen por la izquierda)
        - En una pila el acceso es por `top`; en una cola no existe `top`, el acceso es por `front` y `back`
        
        ### Implementación de Cola en C++
        
        - Se define con `queue<int> c;` usando el tipo de dato deseado entre `<>`
        - Se incluye con `#include <queue>`
        - Se recomienda agregar `using namespace std;` para evitar escribir `std::` en cada instrucción
        
        ### Métodos de Cola
        
        - `c.push(valor)` → inserta un elemento al final de la cola
        - `c.front()` → devuelve el primer elemento de la cola (el que llegó primero, equivalente al `top` en pilas)
        - `c.back()` → devuelve el último elemento de la cola (el que llegó último)
        - `c.pop()` → elimina el primer elemento de la cola (el del frente)
        - `c.empty()` → retorna `true` si la cola está vacía; útil para controlar bucles `while`
        
        ### Ejercicio: Ingresar números hasta cero y mostrarlos en orden
        
        - Enunciado: ingresar números hasta que se ingrese `0`, luego mostrar los números en el orden ingresado
        - Lógica implementada:
            - Se declara `int x;` y se lee con `cin >> x`
            - `while (x != 0)` → mientras el valor sea distinto de cero, se hace `c.push(x)` y se lee el siguiente valor
            - Segundo `while (!c.empty())` → mientras la cola no esté vacía, se imprime `c.front()` y se hace `c.pop()`
        - Ejemplo: entrada `10, 20, 30, 0` → salida `10, 20, 30` (en el mismo orden de ingreso, por ser FIFO)
        
        ### Estructuras (Structs)
        
        - Una estructura es una **agrupación de datos** bajo un nombre; permite manejar varios datos relacionados como una unidad
        - Se define fuera del `main`, con la sintaxis:
        

```cpp
struct Persona {
    string nombre;
    int edad;
};  // el punto y coma al final es obligatorio
```
