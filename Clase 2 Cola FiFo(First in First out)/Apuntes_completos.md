# Clase 2 Cola FiFo(First in First out)

- Clase 2 Cola FiFo(First in First out)
    
    #include <queue> es para usar colas
    
    Para sacar el valor es principal, front . Para el ultimo es back.
    
    Para sacar el valor de la lista es pop
    
    Muestra Inicial
    
    ```cpp
    #include <iostream>
    #include <queue>
    using namespace std;
    int main()
    {
        queue<int> c;
        c.push(10);
        c.push(20);
        cout << c.front() << endl;
        c.pop();
        cout << c.front() << endl;
    
        return 0;
    
    }
    ```
    
    - Ejercicios
        
        Ejercicio 1 Cola
        
        ```cpp
        //Ingresar numeros hasta ingresar 0 y luego mostrar los numeros en el orden ingresado
        //Ejemplo: 10, 20, 30, 0  -> 10, 20, 30
        #include <iostream>
        #include <queue>
        using namespace std;
        int main()
        {
            queue<int> c;
            int x;
            cin >> x;
            while (x != 0) {  //mientras el numero ingresado no sea 0
                c.push(x);
                cin >> x;
            }
            while (!c.empty()) {
                cout << c.front() << endl;
                c.pop();
            }
            return 0;
        
        }
        ```
        
        Ejercicio 2 Cola usando Front y Back
        
        ```cpp
        #include <iostream>
        #include <queue>
        using namespace std;
        int main()
        {
            queue<int> c;
            c.push(10);
            c.push(20);
            c.push(30);
            cout << "Front= " << c.front() << "Back= " << c.back() << endl;
            c.pop(); //Saca el primero
            cout << "Front= " << c.front() << "Back= " << c.back() << endl;
        
            return 0;
            }
        ```
        
        - Ejercicio 3 Estructura
            
            ```cpp
            #include <iostream>
            #include <queue>
            using namespace std;
            
            struct structPersona{
            	string nombre;
            	int edad;
            } ;
            
            int main()
            {
            	structPersona persona1;
            	persona1.nombre = "Pedro" ;
            	persona1.edad = 10 ;
            
            	structPersona persona2;
            	persona2.nombre = "Juan" ;
            	persona2.edad = 20 ;
            // El punto (.) permite acceder a los campos de la estructura.	
            	cout << "Persona1.nombre: " << persona1.nombre << " Persona1.edad: " << persona1.edad << endl ;
            	cout << "Persona2.nombre: " << persona2.nombre << " Persona2.edad: " << persona2.edad << endl ;
            
            	persona2 = persona1; //modifica el valor de la persona 2; persona 2 ahora es igual a persona 1
            	
            	cout << "--Despues de la asignacion--" << endl;
            	
            	cout << "Persona1.nombre: " << persona1.nombre << " Persona1.edad: " << persona1.edad << endl ;
            	cout << "Persona2.nombre: " << persona2.nombre << " Persona2.edad: " << persona2.edad << endl ;
            
            return 0 ;
            }
            ```
            
        - Ejercicio Aparte
            
            ```cpp
            //Ingresar numeros hasta ingresar 0 y luego mostrar los numeros mayores al ultimo en el orden ingresado
            //Ejemplo: 10, 20, 30, 15, 35, 25, 0  -> 30, 35
            
            #include <iostream>
            #include <queue>
            using namespace std;
            int main()
            {
                queue<int> c;
                int x;
                int ultimo;
                cin >> x;
                
                while (x != 0) {  //mientras el numero ingresado no sea 0
                    c.push(x);
                    cin >> x;
                }
                
                if(!c.empty()) {
                    ultimo = c.back();
                }
                
                while (!c.empty()) {
                    if(c.front()>ultimo) {
            	        cout << c.front() << endl;
            	        }
            	        c.pop();
                }
                return 0;
            
            }
            ```
            
            ```cpp
            //Ingresar numeros hasta ingresar 0 y luego mostrar los numeros mayores al ultimo en el orden ingresado 
            //Ejemplo: 10, 20, 30, 15, 35, 25, 0 -> 30, 35
            
            #include <iostream>
            #include <queue>
            using namespace std;
            
            int main(){
                queue<int> c;
                int x;
                int ultimo;
                cin >> x;
            
                while (x != 0){
                    c.push(x);
                    cin >> x;
                }
            
                ultimo=c.back();
            
                while(!c.empty()){
                    if (c.front()>ultimo){
                        cout << c.front() << endl;
                    }
                    c.pop();
                }
            
                return 0;
            }
            ```
            
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
        
        - Para crear una instancia: `Persona p1;` y acceder a sus campos con `p1.nombre` y `p1.edad`
        - **El struct es el molde**, no el contenedor: no se pueden guardar datos directamente en `struct Persona`, sino en las variables creadas a partir de él (ej: `p1`, `p2`) — analogía: es como el plano de una casa, no la casa en sí
        - Los campos de un struct son **atributos** (datos), no métodos; no llevan paréntesis al accederlos
        - **Asignación entre structs**: `p2 = p1;` copia todos los campos de `p1` a `p2` de una sola vez — principal ventaja frente a variables sueltas
        - Si no se inicializa un campo, C++ no lanza error pero muestra valores basura; esto se resuelve con constructores (tema próxima clase)
        
        ### Participación y metodología del profesor
        
        - El profesor enfatiza que la materia es **acumulativa**: cada clase requiere dominar todo lo visto anteriormente
        - Se espera que los estudiantes pregunten dudas durante la clase, no que esperen en silencio
        - Para aprobar la materia, **es obligatorio compartir pantalla y demostrar que se puede programar**
        - Matias compartió pantalla durante la clase y fue reconocido positivamente por el profesor
        
        ### Próxima Clase
        
        - Temas a ver: **constructores**, **listas**, y uso de pilas/colas/listas con constructores y structs
        - Se verá el método `emplace` como alternativa a `push` para insertar estructuras con constructor
        
        Notas
        
        Transcripción
        
        pilas tanto barba bueno la clase pasada vimos las estructuras de pilas hoy vamos a ver estructura de colas pero además Vamos a trabajar con pilas y con algo que se llama Stroop que nos permite manejar conjuntos de información, una especie de registro.
        
        así que te pido que el include arriba y en la línea 5 la línea 5 Hagas un incluso de quehue Quehue es bolas
        
        La cola es igual, asimiló al concepto de una cola de un colectivo. Donde uno... A ver, ¿alguien levantó la mano o algo o no?
        
        Vos, en una cola de colectivo, el primero que entra a la cola es el primero que va a subir al colectivo. que se llama, que es una estructura FIFO, First In, First Out. A diferencia de las pilas, que es LIFO, el último que entró es el primero que sale, como una pila de remeras.
        
        está en un estalte del placar... bien, ahí en la línea 9 insertada en la línea 9
        
        vamos a acá también tenemos el push primero antes de eso vamos a definir una cola Entonces, para el fin de la cola, ponemos quehue y un...
        
        y entre signos de menor o mayor vamos a ponerle de que estructura es vamos a poner INCOR ahora, eso va a cambiar dentro de muy poquito y la podemos llamar C, por ejemplo, entonces, un espacio C, ponemos un espacio después del... Ahí va. Ahí ya tenemos definida la cola.
        
        Ahora vamos a meter algo en la cola extra, entonces dale un intro para insertar una línea en la 10. Inserta varias líneas, a ver si tengo más espacio. Dale varios cintros. Ahí está. Volve a la 10. acá ponemos ese punto
        
        Ah, no. ¿Dónde está traciendo los comandos? Qué raro.
        
        Acá tendría que decirte, todos los comandos que tiene C, hay algo que no está del todo configurado en tu entorno. Pero no, no hay problema. Ponen el PUSH. P-U-S-H.
        
        Abre paréntesis.
        
        Y le vamos a meter un 10
        
        Con esto metimos el valor 10 adentro de la cola.
        
        Ahora hace otro Cpush de 20 y pone el 20.
        
        Y ahora, vamos a ver qué es lo que tenemos.
        
        en la cola vamos a hacer un C-out
        
        y el Seat acá en vez de ser, a poner arriba el airspace para no tener que poner el STD a cada rato Using Namespace STD
        
        No me acuerdo si era el puntico mayor o no, pero no importa. Ahí en el C.A.U. sacar el E.C.T. de adelante porque ya no hace falta.
        
        Así es más cómodo, no tenemos que poner el cargador STAGE. Ahí vamos a poner C punto.
        
        Y acá no tenemos el top, porque no es una pila, no hay algo arriba. Acá lo que tenemos es el front. Es el equivalente al top que vimos antes en pilas. Ponen front. paréntesis y paréntesis
        
        El front es una función. Toda función es un método. Siempre que tenemos un método... Páncreas, paréntesis, paréntesis.
        
        Y para no confundirnos, además, después ponemos un menor menor en line.
        
        Ahi esta, borra la 17 para que no nos confunda
        
        Ejecutalos.
        
        ¿Dónde está la ejecución? No la veo. Compilaste, pero tenés que ejecutarla.
        
        Hay algo que cortó, que no está funcionando.
        
        Ahí, profe, se ve.
        
        si si pero a ver como que el código no funcionó profe puede ser que haya que agregar return 0 No siempre. Acá ponen un retorno cero por las dudas, pero el main... Yo, profe, lo compilé y me corrió bien, sino el returno Claro, el returno se lo pedía más que nada...
        
        Bueno, está teniendo un problema... ¡Ah, ahí puso el 10! Sí, el 10. Ahí estamos.
        
        ¿Ven? Entonces, ¿cuál es la diferencia? Cuando hacíamos pilas, metíamos un valor, metíamos otro y cuando pedíamos el top, me mostraba el 20, que era el último que ingresó. Ahora, cuando estoy trabajando con una cola, cuando pido el que esté al frente es como cuando llego a la parada. Llego a la parada el 10, después el 20, pero cuando pregunto quién está adelante es el 10 el que llegó primero.
        
        Entiende la diferencia en una estructura con respecto a otra.
        
        ¿Alguien me quiere hacer alguna pregunta de esto que dije? Es fundamental para que entiendan la diferencia entre una pila y una cola.
        
        La cola pone lo que sería el primer número, no pone el siguiente como hacíamos en pilas. En la cola, a medida que yo agrego, se agregan al final, como si fuese una parada de colectivo. Claro, entonces cuando pregunto por el elemento front, me dice el primero, el primero que va a salir, el primero que voy a sacar
        
        es el que está, el primero que llegó. Claro. Es distinto a las remeras, que la primera que puse en el estante quedó abajo, y la primera que saco es la última que puse en el estante. Dale intro ahí o paso, lo que quieras. Si, Tomás, decime. Profe, ¿y si haríamos un pop? ¿Sería lo mismo? ¿Saldría la primera que estaba? Ahora vamos a ver qué pasa. Ah, ok. Ahí se ve. Ahora pone en la 13...
        
        ahí estábamos y ahora no no no porque el pop no tiene no sale nada el pop el pop siempre es igual que el pop de las colas Está, elimina y listo. Y ahora pone un Cout del front de nuevo. Copia a la 12,14.
        
        Y ahora es debutar.
        
        Ahí ves que ahí pone el 10 y después que hice el POP, ahí sí, cuando pongo el FROM me muestra el 20.
        
        ¿Se entiende un poquito lo que hacen estas personas? Claro, eliminan el frente de la cola. Claro, el primero del día subió al colectivo, preguntó quién está delante. Y está delante es el vehículo. Sí, sí, entiendo. Vamos. O sea, la que sigue. Esa que quedó adelante.
        
        El que va adelante es lo mismo que pasaría en una parada colectiva. Se va el que estaba primero, el que queda primero ahora es el... el que estaba atrás del primero, darle enter, esto copiarlo y pasarlo como para que la gente ya lo tenga este pedacito de código.
        
        Y ahora vamos a poner un enunciado.
        
        Entonces, después del using, ponele barra a barra o arriba de todo como vos quieras, donde tengas ganas. ingresar números hasta ingresar cero
        
        y luego mostrar los números en el orden ingresado.
        
        Enter. Hacemos el ejemplo. Barra, barra. Barra, barra, ejemplo.
        
        Y ponen el 10, 20, 30, 0
        
        y después el menos mayor
        
        Menos mayor, menos mayor, el signo menos y que quede una flechita, menos mayor, espacio. y pone 10, 20, 30
        
        que quiere decir que si yo ingreso a 10, 20, 30, 0, después me tiene que salir eso y ahora vamos a pensar cómo hacemos para que el programa haga eso
        
        Entonces, vamos a pensar un poquito, una cola voy a definirla, voy a insertar una línea a la 11. Inserta varias líneas en la bolsa.
        
        Entonces, definí eso. Tengo que definir una variable para que crezca el número, un int x, por ejemplo.
        
        pones int y en este espacio x punto y coma
        
        Después tenemos que hacer que ingrese un valor, entonces pone un CIN y un X.
        
        Al revés, va para el otro lado, la mayor mayor. Eso me va a traer, me abre la pantalla para ingresar un valor de X. Dale Enter
        
        Ahora tengo que preguntar si ese valor es distinto de cero, pero como lo voy a repetir voy a tener un guay ahí. o en el guay
        
        ¿Cuál es X distinto de 0? El distinto vimos que se hacía con el signo de numeración igual.
        
        En el caso del wildlife me gusta dejar… Ah, ahí está. Ahí lo corrigí a la inteligencia. Bien. Acá. Si es distinto de cero, lo que tengo que hacer es meter una cola. ¿Te acordás ahí cómo hacíamos para meternos la cola?
        
        que instrucción usábamos, aquí está
        
        ¿Y qué vamos a meter en la cola? El X, perfecto.
        
        y después de eso tenemos que insertar el enter
        
        Tenemos que leer otro valor para ver si seguimos haciendo esto. Volvemos a otro Seguin.
        
        la de Zane en el Luciano
        
        Ahí está. Con esto va a ir tomando valores hasta que entre un cero. Cuando el cero caiga en el while va a hacer salir y no inserta más. Ahora, fíjate, anda a la clase anterior y copia el código de la clase anterior en la parte del segundo guay.
        
        Todo el mundo tiene que tener un blog de notas, lo que quiera, donde tiene ahí pegados todos los códigos que vimos y donde se pueden estar las explicaciones. quieran. Yo a cada rato les voy a pedir que vayan a lo que hicimos en tal clase y copien código.
        
        Y muteo un segundito mientras copias el código que tengo que responder un comentario.
        
        un segundito
        
        Listo, ya volví. Ahí está muy bien. A ver qué es lo que copiaste.
        
        Bueno, lo que está en la 19 hasta la 25 habrá que sacarlo.
        
        No nos interesa por ahora. Y acá, en vez de pila, le ponemos C.
        
        para que tome la cola, el MT sigue andando, después el IF no va porque no estábamos preguntando comparado con el último, ni nada raro. Así que no, no hay problema. Borrá la 22 directamente. ¡Ojo, ojo! ¡Para, para, para! Borrá solamente la línea 22.
        
        Y borra el cerrar llave que está en la línea 24.
        
        ahí estamos y acomodá lo que te quedó adentro para que quede más o menos
        
        Y en vez de la pila, lo sacamos de C. Y como dijimos... Ahí está. No tienen top, sino que tienen front las colas.
        
        entonces el cron perfecto y en vez de pila vamos a tener un c.pop
        
        Ahí está, borrate lo último que está de la 30 a la 34.
        
        Acomodá un poco todo el código, mostrámelo entero. Ahí estaría.
        
        A ver, ¿alguien por favor levante la mano con alguna duda, antes de ejecutar esto, que tenga cualquier mínima duda de cualquier cosa que está escrito ahí?
        
        Sí, Gonzalo, decime. Profe, no recuerdo bien qué hacía el em... em... tío.
        
        El Empty, lo vimos en la clase pasada, y para cada clase tienen que saber todo lo que vimos. El Empty es para hacer si la cola está vacía. Entonces, si la cola no está vacía, sigo procesando en el white. El empty hace lo mismo que en la pila. a ver si la estructura quedó vacía, como yo voy sacando cosas, tengo que ver en qué momento ya no queda nada. El EMTI me devuelve el verdadero si está vacío.
        
        Y como yo quiero hacer algo mientras no esté vacío, por eso le puedo decir una admiración. ¿Se entendió ahí, Gonzalo? Sí, sí. Procedo. Gracias. No recordaba. Yo lo que les pido que esto es muy acumulativo, entonces necesito que todas las clases sepan todo lo que vimos hasta el momento.
        
        No es como el disjunto, como otras materias que podés tener los ríos de Europa y después uno de Asia y uno no tiene relación con otro, acá es como matemáticas, te enseñan a sumar y después te enseñan a multiplicar, tenés que saber sumar para entender la multiplicación.
        
        Sí, Octavio, decime. Tengo una consulta sobre la fila 12, la línea 12, perdón. La línea 12, sí. ¿Imprime en pantalla y ahí coloca el valor o coloca el valor dentro de...? Esto ya lo vimos en las clases pasadas. Seguindo, lo que haces es abrir la pantalla para que vos introduzcas un valor. Cuando das Enter...
        
        Sigue, continúa con la distribución. Ah, entiendo. Está, es una entrada por, la más sencilla que es por consola. Acá vamos a trabajar todo en modo consola, no vamos a meternos en modo gráfico y otras cosas porque... para el objetivo de la materia, no tiene sentido. Gracias por la pregunta Octavio. ¿Alguien más? ¿Cualquier pregunta de todo lo que está ahí antes de ejecutarlo?
        
        Nadie tiene ningún tipo de preguntas, todos los entienden perfecto, a cualquiera le puedo pedir que me explique algo y lo saben hacer, pero respondra perfecto.
        
        Nadie tiene ninguna duda. Profe... Sí, Pablo, decime.
        
        Ahora hablo con Pablo y después hablo con Darick. Decime, Pablo. Si yo cambio el int por un string, ¿podré ingresar en vez de números solamente palabras? Sí, se puede hacer con palabras. Y ahora vamos a ver que lo vamos a hacer con estructuras también. Pero bueno, vamos a empezar con esto. Sí, sí, yo puedo tener una fila o una cola de cualquier tipo de datos.
        
        puede ser de booleanos, de long, de double, de lo que sea
        
        ¿Quién más? ¿Te había levantado la mano alguien más? Sí, había levantado la mano, pero por lo que preguntó el computador no se había levantado la mano. Bien, bien. Bueno, vamos a ejecutarlo esto entonces. Compilarlo y ejecutarlo.
        
        ahí abre la pantalla, correlo un poquito a la derecha, así vemos el código y vemos qué es lo que va haciendo. Ahí está parado. no estamos debagueando pero ahí nos está pidiendo el primer seguir, está ejecutando la línea 12 ponen el 10, dale enter Ahora ponen un 20, eso ya estará haciéndose en la línea 15, ponen un 30.
        
        en el pelucero y me volvió el día 23 de agosto
        
        Agarra el código, acomodalo un poquito y pasáselo a tus compañeros.
        
        Ahí en el wild, escúchame, escúchame. En el primer wild no dejaste un blaño en blanco, ahí está. Por el honda dejaste luego...
        
        A ver si tengo algún otro método que me esté olvidando...
        
        acá tenemos algo más en las colas también tenemos para preguntar por el back ahora lo vamos a ver
        
        Y...
        
        Traete ahora el código que hicimos al principio de la clase, que lo copiaste antes para la Adios
        
        Borra ese y borra el anterior porque vamos a trabajar con una cosita más del anterior.
        
        Ahí está. Insertá, después en la 13 insertá una línea.
        
        con un C-Push de 30.
        
        punto y coma bien ehhh y despues
        
        En la línea 14, antes del menor menor de... No, no, en la misma línea vamos a hacer algo.
        
        Esto, a ver, en el Seat, antes donde dice Seafront, ponés comillas, front. Ahí ponele comillas. Pront.
        
        Igual.
        
        y después de las comillas ponen un menor menor
        
        Ahí está, acomodalo un poquito en los espacios que se quede bien.
        
        Te digo, tenemos un problema los informáticos, cuando hay algo que no está parecido, se nos prende ahora, antes del END. Ponerle comillas Back Antes de Lento Justo antes de Lento Justo antes de Lento Justo antes de Lento Justo... Ah, ahí está poner comillas y escribirle back adentro, BACK.
        
        Y ahora ponen el menor menor.
        
        ese punto back, ven que ahí la tele es de back
        
        Y ahí está.
        
        ahí nos va a mostrar que lo que había, vamos a hacer un pop y ahora copiar a 14.16
        
        ¿Viste cuando vos llegás a la panadería y te preguntás quién es el último? Bueno, vos tenés la tipa que atiende en la paradería que dice quién está primero y vos sos el que llega y preguntás quién es el último, es tal cual como funciona una cola. Fíjate que ahora y acá le voy a preguntar a alguien para que elijo a alguien para preguntarle
        
        ¡Chau!
        
        ¿Nerea? ¿Estás ahí nerea?
        
        Hola, profesor. Sí, estoy acá, pero sí, de igual manera no pude estar prestando atención un poco. Me fui al baño. Disculpe. ¡Ay, Nerea! Acabás de perder la materia, Nerea. No... No, sí, sí, sí. No podés. Tienen que avisar. Permiso, profesor. Voy al baño. Te esperamos.
        
        ¿Cómo vas a salir del aula sin pedir permiso? Disculpe, disculpe. No, no, no. Bueno, después esto va a hacer que la clase que viene compartas pantalla y tengas que estudiar todo. No, sí, de igual manera me gustaría en algún momento compartir de pantalla. Sí, todo el mundo, no es lo que te gustaría, no probar nadie la materia que no comparta pantalla y muestre que se va a programar.
        
        Se los comento, tengan en cuenta esto, acá no, jamás apruebe a alguien que no haya podido compartir pantalla y demostrarme que puede programar Bueno, a ver, busco otra persona Eh, ¿Catriel? ¿Vas ahí? Va a ser largo, chiquiché. Sí, ¿cómo es? ¿Qué pasó? Bueno, decime exactamente, y sin ningún tipo de dudas, cuando yo ejecute este programa...
        
        ¿Qué cuatro números van a aparecer? Van a aparecer dos números y después dos números. Decime cuáles son los números que van a aparecer. 10 y el 20. Eso son dos números. Decime qué cuatro... A ver, Gabriel. Te digo cuatro números, no me digas dos.
        
        Decime que cuatro números van a aparecer. Dos números y después se ve aquí abajo otros dos números.
        
        10-20 y 30-0 Podés decir 10-20 y 30-0 No tenés la más remota idea de lo que estamos haciendo acá Estás más perdido que un turco en la anhelina ¿Por qué aparecería un cero? Estás tirando cualquier cosa, no tenés la más remota idea. Yo acá voy marcando que Gabriel está...
        
        totalmente perdido, ¿verdad? Por eso les pido que cuando pregunto, entendieron, pueden hacerme una pregunta, pregúntenme dudas que tengan, háganlo, porque después yo valido y después me doy cuenta que no me preguntaron y me enojo. Yo no hay problema que me preguntes cualquier duda que tenés, Carniel, pero si no me hacés preguntas y después te enteo si lo entendiste y demuestro que no, ahí sí no sé a qué estamos jugando.
        
        ¿Estamos? Así que bueno, ahí está levantando la mano. ¡Ah! Mirá cómo ahora levanta la mano, ¿eh? Bien, me gusta, me gusta que vayan entendiendo cómo sé. A mí me encanta explicar, voy y les tengo toda la paciencia, pero cuando veo que alguien se quiere hacer el dormedito porque está en virtual...
        
        esto cuando era presencial lo tenía mucho más claro así que ahora bueno a ver Leandro si decime no sé levanté la mano para responder pero seguramente alguno tiene alguna pregunta Acá hay otra cosa, no me interesa la gente que sabe, es rechazada la gente que sabe este curso porque acá venimos a explicar a la gente que no sabe.
        
        El yo, yo, profesor, yo sé, no cuenta acá. Acá lo que cuenta son las buenas preguntas. Cuando alguien veo que se está forzando y tiene una pregunta, eso sí suma puntos. Es que ya sabe la respuesta, no vengo acá a enseñar a que sabe, vengo a que no sabe. Así que no levanten la mano para decir la respuesta. No me interesa ver más mínimos, más derretas.
        
        de arresto a puntaje. Quiero que levante la mano el que no sabe y me tiene que decir qué es lo que no sabe. A ver... Manuel Campos, decime. Si, yo tenia una pregunta con respecto a la linea 10 y... La linea 10 No, la 10 no, porque yo la tengo 14, seria...
        
        ¿Cuál es la diferencia entre front con comillas y el c.front? Bueno, cuando vos ponés algo entre comillas, es algo literal, como el hola mundo, que querés que salga, la palabra es exacta. Claro. Cuando vos pones una función o un dato, una variable, querés que salga el valor de la variable. Claro. Lo mismo poner...
        
        vos podes tener una variable a y pones a entre comillas va a salir a entrar y si pones la variable va a sacar el valor de la variable a, veo que de programación nada Te pido que te pongas las pilas con programación, porque esto es de todos los lenguajes, encontrar un literal o una variable, que básicamente sabes lo que es una variable.
        
        Yo siempre le doy prioridad a los que nunca preguntaron. Estamos, Tomás, decime. Sí, profe. Bueno, tengo la pregunta de la misma línea que preguntó Manuel, pero el front. O sea, ¿qué es lo que nos va a dar el front? Bueno, el front es lo que ya expliqué en el ejemplo que hicimos antes. Es el mismo C.front que ya vimos.
        
        desde antes. Es una lástima que si tenías dudas antes no las hayas preguntado. Igual, lo vemos. Pero te quedaste con una duda sin preguntar antes. ¿Estamos? Sí, porque corrí el código y... Bueno, pero Tomás... Tomás, escúchame algo. Siempre que tenés la más mínima duda...
        
        tenemos que parar y yo te explico qué hace y ya lo vas teniendo, porque si esto vos lo dejas avanzar, después no vas a poder entender nada. Esto es algo que tendrías que haberme preguntado antes, porque ya lo hemos visto. Yo te lo explico igual ahora. Pero es fundamental que...
        
        no dejen pasar algo que no entienden perfectamente. El front se devuelve el elemento que está adelante en la cola.
        
        Si vos tenés una cola en la panadería donde vino una persona con la camiseta 10, uno con la 20 y uno con la 30. En ese orden fueron llegando a la panadería. Cuando la tipa del mostrador de la panadería dice ¿Quién es el primero? El que tiene el 10 dice Yo soy el primero al que tiene el 10.
        
        El fronte devuelve el primer elemento que hay en la cola.
        
        ¿Se entiende así? Sí, sí. Front de WF, el primer elemento que está en la cola. Así como cuando vimos pilas, el top te decía el primer elemento que estaba en la pila, que es el que estaba arriba del todo.
        
        ¿Se entendió bien ahí la pregunta? Sí, Gonzalo. Pero fue bien. Nada, nada. Recién estaba por bajar la mano porque me despejó la duda. Mi duda era entre el top y el back, cuál era la diferencia al usarlo. En una cola no existe top, porque van uno a continuación de otro, no van para arriba como una pila de remeras, no existe top.
        
        en las colas y no existe ni front ni back en una pila. Vamos, en una pila de remeras no hay forma. Si quieren representarlo gráficamente, una pila, se van metiendo los elementos para arriba y una cola se van metiendo a la derecha y van borrándose los de la izquierda.
        
        para tener una representación más gráfica, ¿no? ¿Alguna pregunta más alguien, antes que elija alguno de ustedes y me tengan que decir qué es lo que sale? ¿Puedes repetir eso último que dijiste que me sirvió como referencia? Sí. La última partecita que dijiste como ingresaba por izquierda en el tren.
        
        en una pila imagínate que es una pila de remeras y vos gráficamente estás dibujando lo vas poniendo los elementos uno arriba de otro y después a medida que vas sacando, vas tachando a medida que vas sacando los elementos gráficamente una pila se ve como algo que se ponen los valores uno arriba de otro
        
        Una cola, vos ponés un valor, y si viene otro lo ponés a la derecha, y si viene otro lo ponés a la derecha. Y cada vez que sale uno, agarrás el de la izquierda y lo tachás.
        
        una pila se dibuja más en forma horizontal y una pila se dibuja más en forma vertical
        
        me explico Dari si, justo eso era lo que quería entender esto ultimo que dijiste que la cola, los valores entran a la derecha y se borran a la izquierda como para despues poder verlo si estuve practicando con ejercicios y eso es mas facil visualizarlo en realidad esto es una representacion que hacemos nosotros
        
        En la memoria van a cualquier lado, para explicarlo más fácil lo que nosotros tenemos como lenguaje común es eso. Una cola es como la cola del colectivo, que la gente se pone al costado del que estaba, no se pone arriba. Bueno, vos llegás a la pila, vos te subís a concocho del que está y el otro se ocula a concocho del otro.
        
        Estamos por ir acotados.
        
        Y las remeras no se ponen una al costado de la otra porque tenés un solo estante, se ponen una arriba de la otra.
        
        ¿Se entiende, Dani, la representación? Sí, y en el caso de la pila, entonces, la primera que ingresa es la primera que sale. Claro, cuando vos metés remeras... Perdón, al revés. La última que ingresa sería la primera que sale. La última que ingresa...
        
        La última, sí, exacto, la última que ingresaste, la última que afilaste, y la primera que desafilaste. Genial, gracias. Buenísimo. ¿Alguien alguna duda más antes que le pregunte a alguien y tenga que decirme exactamente qué sale de esto? Todo el mundo lo tiene súper claro, todo el mundo sabe exactamente qué es lo que va a mostrar esto cuando se ejecute.
        
        Sí, Joel, decime. A mí me quedó un poco de duda, ¿qué es lo que hace el bug o qué es lo que va a hacer el bug? El bug te devuelve el valor que tiene el último de la fila. de la cola, por ejemplo, si vos estás en una paradería y ves cuatro personas y preguntás quién es el último, ahí es el valor del bag.
        
        La empleada de la parada dice quién es el primero y vos cuando llegás decís quién es el último. para meterse a continuación de eso.
        
        Bien. ¿Alguien alguna pregunta más antes que elija a otra persona para que me responda? Todo el mundo tiene re claro que va a ser esto, así que no necesita preguntarme nada. No hay nadie que necesite preguntarme algo antes que yo le... Porque todos están totalmente seguros de lo que sale de esto, o alguien necesita preguntarme algo.
        
        Bueno, si nadie quisiera preguntarme nada, le voy a preguntar a alguien que es lo que sale de esto y vos me lo vas a decir exacto y perfecto.
        
        A ver...
        
        y Cuevas, Eliana, decime qué va a mostrar este programa, por lo que me guste.
        
        Adiós.
        
        Vos no me hiciste ninguna pregunta, así que estabas totalmente segura. No, no, estaba escuchando, no es que estoy segura. Incluso me tenés que hacer una pregunta, Liana, si no estabas segura. Podés decirle al profesor que tiene alguna duda. acá yo vengo a explicarles, me pongo muy firme con esto, ustedes tienen que estar siguiendo la clase y tienen que...
        
        tener dudas y yo se las respondo para poder avanzar, no tienen que quedarse como esperando que el conocimiento les llegue, tienen que hacer algo al respecto que es preguntar. Entonces, Eliana, si vos tenías la más mínima duda, tenías que preguntarme, darte, no, espere, profesor, que hay algo que no entiendo, yo te guiaba a ver que cuentes qué es lo que no entendías y veíamos que aprendas.
        
        No estoy loco, es una forma normal lo que estoy poniendo de cómo aprender.
        
        No, no, estoy siguiendo la clase pero no sé cuál es el código que... lo que va a salir, digamos. Pero vos sabés lo que hacen todas esas productoras, o hay alguna instrucción que no sabés qué hacen.
        
        Y por ahí el push, el push no entiendo bien el... Bueno, entonces cuando yo pregunté si alguien tiene dudas, me decía profesor. Levantaba la mano y me decía... Me pudo explicar el push y yo estaba muy contento que me pregunte, Seriana. Ahora ya no estoy contento. Estamos... Si a mí me gusta explicar, vienen acá, pagan para que yo les explique y no me dejan explicarle.
        
        Así no funciona, Leana, si yo quiero explicarte. Bueno, entonces me decís, levantás la mano como levantaba tu compañero, voy a explicar qué es el push, y encantado lo hacemos. Y no veo sometido a este engaño que hiciste conmigo. Ese es un chiste, ¿no? Pero dale, ponele ganas, estamos liadas.
        
        Te explico lo que hace el Pushe, Liana. Lo que hace es meter un elemento dentro de la cola.
        
        Ahí es, imagínate que es una panadería y llega la persona con el número 10, ¿no? Después viene otro que es el 20, después otro que es el 30. Y van a ser atendidos en ese orden. Primero va a atender al 10, que va a salir de la cola, después al 20 y después al 30.
        
        Es en ese orden que la cola se va a ir vaciando.
        
        La cola es una estructura que el primero que entra es el primero que sale, entonces el push es para meter un elemento dentro de la cola.
        
        ¿Entiendes bien? ¿Te lo puedo explicar mejor?
        
        Sí, sí. ¿Entendió?
        
        ¿Hay alguna otra cosa que me quieras preguntar?
        
        No, no, no entendí, no entendí. El resto de todo el programa lo entendés perfecto, no hay ninguna línea, ninguna cosa que quieras preguntarle.
        
        Si no hay nada que quieras preguntarme, me podés responder exactamente que lo que muestra.
        
        O me respondes lo que muestras o me haces una pregunta.
        
        No, no sé lo que muestra. Bueno, ¿y quién necesitaría saber para saber qué es lo que muestra?
        
        Ah, y por ahí con la respuesta, con ejemplo, digámonos.
        
        Acá hay instrucciones escritas. Vos tenés que saber lo que hace cada instrucción y si sabés qué hace cada instrucción podés responderme qué es lo que muestra. Si vos no me podés decir qué es lo que muestra tenés duda de una instrucción. Decime en qué instrucción tenés dudas y nos vemos.
        
        No, no, va a ir, no, no, no, no. Esto es que una computadora es que utiliza instrucciones de alguna. una ilusión no va haciendo algo claro pero la salida o sea lo que va a salir no va a depender de lo que de lo que pongamos nosotros, o sea, nosotros vamos a poner algo y ahí va a salir. ¿En qué instrucción pensás que vamos a poner algo?
        
        No, la verdad no. No, no llego a entender bien. Tendría que repasar un poco más y practicar para... No, quiero que entiendas algo, o sea, en una computadora ejecuta instrucciones de a una, no existe el concepto de programa, la computadora no sabe cuál es la instrucción siguiente, y nosotros cuando programamos tenemos que entender eso. Acá, la primera instrucción que ejecuta es la 10.
        
        después la veinte y así, damos una por una.
        
        deducciones y vos tenés que saber qué es lo que hace cada instrucción para poder entender lo que hace un programa, de la misma forma que tenés que saber qué significa cada palabra para poder entender lo que hace una oración.
        
        Un saludo.
        
        Esto es básico de la comunicación y de los programas y de todo. No es forma que sepas programar si no sabes lo que hace cada instrucción. Lo mismo que no podés saber lo que dice una oración si no entendés lo que significan las palabras.
        
        No sé, Leada, pensá un poco...
        
        Yo estoy acá para explicar todo, pero necesito que...
        
        y que me permitan explicarles.
        
        estamos no tienen que saber exactamente lo que hace cada instrucción para poder saber qué es lo que hace un programa
        
        bueno a ver alguien que tenga alguien que no sepa lo que va a salir de este programa quien no sabe Entiendo que si nadie levanta la mano, todos saben exactamente qué es lo que sale de este programa. Sí, Manuel, vos no sabés qué es lo que sale de este programa.
        
        No estoy seguro, no estoy seguro. Manuel, si no estás seguro es que no sabés, no se puede no estar seguro y como no estar seguro ¿cuántos 2 más 2? 2 más 2 siempre va a ser 4, no es algo que no estoy seguro, y está bien que no lo sepas, no hay problema, no lo sé, está bien no saber, no hay ningún problema.
        
        Ahora, Manuel, decime en qué línea te perdés, en qué línea no sabés lo que haces.
        
        Más que nada, me pierdo en la línea de este GoFront, o sea, entiendo que primero sale el 10 Y después, ahí como que, otra vez.
        
        El CEO en la línea 14 va a poner las palabras front, después eso va a resolver el C front devolviendo un valor. después va a poner la palabra back y después va a solver el cback poniendo un valor y después va a saltar a la línea siguiente que quiere decir que lo próximo se escriba la línea abajo
        
        claro eso lo entendés sí bien entendés qué valor va a dar el cifrón no me lo digas pero entendés qué valor va a dar el cifrón de este caso si entendés qué valor va a dar el cebac en la línea 20 en la línea 14 sí bueno entonces cuál es tu duda con respecto a la línea 14 por eso no estaba seguro porque yo decía yo decía eso pero estaba ahí tenía una duda de eso pero era más que nada eso es lo que usted me decía el cefro ni todo eso pero
        
        Ahora ya no tenés ningún tipo de dudas. Claro. Bien. ¿Quién cree que tiene la más mínima duda de qué va a salir cuando se ejecute esto?
        
        Todo el mundo está totalmente seguro, le voy a preguntar y va a funcionar exactamente y va a ser exactamente lo que ustedes saben que va a ser. ¿No hay nadie que le pueda responderle alguna pregunta?
        
        Bueno, voy a elegir otra persona.
        
        Sí, Nerea, decime. Sí, yo tenía la duda de qué vamos a hacer, qué estamos haciendo. Quiero saber. Y que usted me explique lo que estamos haciendo, ya que no estuve en el momento en que ustedes lo estaban haciendo.
        
        ¿Vos te habías ido al baño? Sí, me había ido al baño. Bueno, mirá, si te vas al baño, yo no puedo dar la clase de nuevo. No sé cuánto tiempo estuviste en el baño, no puedo dar la clase de nuevo. Después de la grabación. No, sí, no, pero lo anterior sí estuve atenta en esto nomás. Bueno, decime, ¿en qué línea tenés una duda? Les cito, ¿este programa se va a ejecutar?
        
        y va a mostrar algo. Quiero que me digan quién tiene alguna duda de lo que va a mostrar esto. ¿Vos tenés alguna duda de lo que va a mostrar? Sí. ¿Qué duda tenés? ¿Qué línea no entendés? que aquel niño se puede explicar mejor, lo que pasa es que NREA no es respetuoso para tus compañeros que vos te vayas, vuelvas y yo tengo que repetir y tener tiempo de clase
        
        repitiendo todo porque vos no estuviste, no es respetuoso, sino imagínate que son 60 personas, si cada uno se va y vuelve, yo tengo que dar 60 veces el mismo dato.
        
        ¿Entendés? Lo vamos a hacer ahora, pero ¿entendés que sería imposible dar una clase si cada uno va saliendo y pide que repita, o qué se puede? Bueno, decime, vamos a hacer por esta vez la excepción y vemos, ¿qué línea no entendés lo que hace? Eh, yo no entiendo el...
        
        El once, el doce y el trece. Ajá. Vos estudiaste la primera clase, vimos el push para finales. Sí, sí. Bueno, el push. para colas hace lo mismo nada más que las cosas, en vez de ponerse una arriba de la otra como si fuese una pila, se pone en la continuación, inserta un valor en la estructura.
        
        tenemos una estructura que es una cola y lo que hace el push es lo mismo que hacía el push en pilas pero lo que hace es insertar a continuación Ok. No, no arriba. ¿Se entiende ahí? Sí, sí, me quedó entendido. Sí. Bien. Eh, sirve mucho tener mucho mucho mucho mucho mucho mucho mucho mucho mucho
        
        muy claro qué pasó en la clase pasada, entonces desde ahí sí les puedo explicar. No hay nadie que, yo ahora voy a elegir otra persona para que me diga exactamente qué sale de este programa, no hay nadie que tenga ninguna duda. No me están mintiendo. No hay nadie que me esté mintiendo. Bueno, voy a elegir a alguien.
        
        Un saludo.
        
        A ver, Soruko, Ariel, ¿qué va a mostrar este programa? Los valores, te digo los valores. Exactamente que va a salir por la pantalla. 10-30, 20-30.
        
        Muy bien, muy bien. Va a salir exactamente eso. Sí, el primero valor, el último, y después elimina el primero valor y busca el siguiente. Al saber los valores, uno tuvo que haber sabido cómo llegar. Eso responde que yo sé que estás sabiendo qué es lo que pasa. Sí, sí, se agarraron tres valores en la cola. Es como que yo te diga, haceme esta cuenta de dividir y vos me decís el resultado.
        
        Es obvio que supiste dividir, no hace falta que me digas cómo, porque si no, no hubiese llegado el resultado de la división. Sí, sí, sí. Entendés? Que funciona así. Pablo, si ahí pusiste algo. Pablo, ¿no tenés micrófono, Pablo? ¿Puede ser? No, sí tengo.
        
        Eh, maldejate levantando la mano, Pablo, no hay problema. Sí, Brisa, decime. Perdón, no, es que, eh, ¿puede ser que Osolo devuelva los números? Sino también lo que estaban hablando de tipo WF igual el número que sería lo que había convencido al compañero y después lo de back en la primera línea.
        
        en la primera línea, y después abajo también front y back con escrito, ¿o no? A ver, Brisa, ¿ves la línea 14? Bueno, ves que dice SEAUT y después en comillas dice FRONT? Si, si, por eso. Claro, es por eso que prime FRONT porque ahí dice que tiene que poner FRONT.
        
        no entiendo cuál es tu duda no que el compañero sólo mencionó los números por eso pregunto si sí bueno perdón gracias perfecto entonces ejecutado ahora sí matías a esto para ver que realmente sale lo que tiene que salir, sale que el frente es el 10 y el último es el 30 y después cuando yo hago un pop
        
        el que eliminó es el de adelante entonces me quedo adelante el 20 y después el 30 sigue estando esperando
        
        ahí está lo que sale bien se entendió bien hasta acá todo esto estamos bien con todo bien son diez y media Yo cortaba a las 11.
        
        bueno vamos a hacer un tema nuevo va a compartir pantalla de la persona muy bien matías que compartió la pantalla ya te marco acá como una persona que Está en camino a probar la materia porque pudo tener estudio y mostró la pantalla mutándose. A ver...
        
        Alguien que se ofrezca a compartir pantalla para otra cosa.
        
        Ahí... bueno, Octavio, compartí patas aguajales.
        
        Y compartir amantas a Octavio.
        
        Si, si, si. Traete un ejecutable de Horamundo o algo para... Fíjate que te compilas y te distributes en el mundo y de ahí vamos a trabajar.
        
        Yo para asegurarme que ande en el entorno antes de empezar a trabajar en el ministerio.
        
        El Air Raid de Halo, sí, sí, sí, lo usamos.
        
        El Main con el Amundo, ahí está, sí, sí, está de acuerdo, está de acuerdo. Está todo bien e inteligente, parece que me está escuchando.
        
        No, no, pero alguien inteligente te lo está trayendo, ahí está, sacalo. Ejecutalo, ve a ver qué hace.
        
        Ahí está. Funcionó perfecto. Muy bien. Bueno, y...
        
        A veces, en vez de un número, tengo que meter en una estructura, meter en una cola una estructura. Entonces vamos a ver qué es una estructura. antes que nada antes de poder meterlo en la cola. Es una agrupación de datos. Por ejemplo, vamos a ver. una estructura que la vamos a llamar persona y la persona va a tener nombre y edad
        
        ¿Estamos? Entonces...
        
        ¿Cómo defino una estructura? La estructura la voy a definir por fuera del Main. Entonces, antes del Main, equivo.
        
        Vamos a llamar a las personas.
        
        abro llave y adentro vamos a ponerle
        
        Sí, está bien, le ponemos así. Ponele string nombre y después int edad.
        
        ahí está listo por ahora no voy a poner el constructor lo voy a poner después muy bien el punto y coma que pusiste ahí fundamental porque acá Cuando define un stroke, lleva el punticoma después de la llave. Él sabe que a veces, cuando uno viene a otra lenguada, que se confunde, está muy bien ahí. Eso lo aprendí en coding.
        
        Sí, sí, sí, sí, sí, es un error muy común que uno se come ese punticoma. Acostumbrado a que la llave después nos lleva a punticoma. Y es muy común comérselo eso. Bueno, ahora la 13, la niña 13.
        
        vamos a a ver algo vamos a crear una persona entonces ponemos y persona.
        
        P1, punticoma.
        
        O lo podemos llamar Persona 1, si querés.
        
        Hace una cosa, para que quede más claro, esto es un tema didáctico, en la 5...
        
        En vez de llamarlo persona, llamarlo struc persona.
        
        con la P mayúscula para hacer notación húngara a ésta, Struper-Sora.
        
        Y acá voy a poner Struck Persona, en la E13, Struck Persona.
        
        Y voy a definir persona 1.
        
        ahí estamos
        
        ¿Por qué me dice error? No sé por qué me da error.
        
        No sé. Ahí está, ahí quedó bien. Insertar una línea en el 14, el 15, bueno... Insertar unas cuantas líneas... Ahí vamos. Ahora... Esto me cuenta los chistes antes de que yo los cuente, me pone nervioso. Sí, estaba bien. Entonces vamos a poner en persona uno nombre.
        
        Poné persona 1 punto, vas a ver lo que pasa.
        
        No, nombre solo no. En persona uno tengo dos cosas, nombre y edad. Entonces... Ahí contó el chiste, ya está. Así que dadlo por bueno.
        
        En persona, fíjate una cosa, persona no existe. Existe persona 1.
        
        Si yo pongo persona, ves que está marcado ahí, me dice, no, eso no existe. Existe la persona 1. Y la persona 1... Sí, dale, decime. Eh, vos sabés cuando ponés en persona uno punto nombre, ese punto nombre es lo mismo que punto front, o sea, no lo mismo porque no es una que venga ya preseteada, sino que la estamos declarando nosotros, pero es como que estaría llamando a nombre.
        
        Hiciste una pregunta excelente, maravillosa, fantástica. Tenés aprobada la materia con un 10 por la pregunta. ¡Excelente la pregunta de Dani! es muy parecido pero no. ¿Qué pasa? Cuando ustedes vean después programación dentro de objetos, dentro de los objetos tiene dos cosas. Tiene los atributos y los métodos.
        
        En este caso, y esto se distingue por qué, porque después de persona 1 nombre no va al paréntesis paréntesis. es casi lo mismo. Son cosas que están dentro de la persona. El estructura es casi lo mismo que un objeto, pero no lo es, porque no le ponemos comportamiento, no le definimos métodos.
        
        adentro. No le hicimos cosas que hace la persona. Entonces, cuando yo pongo cualquier cosa a punto, me va a mostrar. los métodos y los atributos, o sea, las cosas que tiene adentro. En este caso, Persona 1, como es una estructura, Tiene datos, pero carece de métodos. El único método que tiene, que vamos a ver en un ratito, es el método constructor. Pero no tiene métodos propios, no tiene comportamiento, no sabe hacer cosas.
        
        Acá en computación, todo lo que es programación, es paradigma orientado a objetos, el paradigma estructural se abandonó hace mucho, y entonces uno lo que termina definiendo son siempre objetos. Nosotros vamos a trabajar con lo que está escrito dentro de los objetos, esto se ve en otra materia, en paradigmas de programación. Lo voy a pasar de costadito, vamos a tocar alguna cosita.
        
        Básicamente, ¿qué estamos viendo? Que yo puedo tener datos sueltos o estructuras de datos a los cuales doy nombre. Y esas estructuras agrupan más de un dato. En particular, crear una estructura persona. La estructura persona adentro tiene los datos de nombre y edad. Y ahora estoy viendo que siempre que defino una persona, tengo que definir esos dos datos.
        
        Tengo que darle el nombre y tengo que darle la edad. En particular me doy cuenta que es un dato porque después de nombre no va el paréntesis. Esto es muy raro que ocurra, generalmente siempre que vos ponés algo, punto algo, ese otro algo normalmente es un método.
        
        acá no es un método, es simplemente un dato, entonces persona1 nombre le pongo igual Bueno, por ejemplo, perfecto.
        
        y no me exerzaba, te dije Juan, el Intelligent me da más bolilla que la que me da Octavio, qué bárbaro Para que el que escriba sea yo, y no la ION No, dejémoslo, ya está, ya la perdimos, la batalla está perdida Dije, bueno, atravesar por la guía es así, resulta a mí muy feo, pero es lo que pasa. Ahora, ponés persona 1, punto.
        
        persona 1 punto y vez que pone edad y nombre como se da cuenta que persona 1 es algo que se creó con la estructura entonces me pede que ponga edad o nombre. Voy a poner edad. Se lecciona la edad. Ya casi, le vamos a poner 10 porque nos permite ordenarnos.
        
        Dale, ahí, andá a la línea 17 y vamos a probar algo.
        
        ¿Qué pasa si acá en el nivel 7 escribo struct persona.nombre?
        
        No, no, no. Pará, pará, pará. Borrá la 18. Y pone struct persona, después la A o en un puntito. Borrá lo que está atrás.
        
        Quiero que el año 17 diga solamente Struck Persona.
        
        Ahí escribí un punto, no, un punto.
        
        ¿Qué pasa? Yo ponía un punto y después del punto escribí nombre.
        
        En el Stroopersona yo no puedo guardar cosas, porque es el molde con el cual yo después creo datos. ¿Viste cuando estás haciendo galletitas que apoyan el molde o empanadas o lo que sea que apoyás un molde para cortar? algo, esto es la herramienta de corte, es el que tiene la forma de lo que yo voy a crear. El Stroke Persona, no puedo almacenar algo de Stroke Persona porque es lo que uso para definir personas, es como el plano de una casa.
        
        Yo no puedo abrir la puerta del plano en una casa, el plano es el plano porque construyo la casa y después abro la puerta. Yo nunca voy a poder guardar algo en una estructura, la estructura es lo que yo uso para definir algo en lo cual después guardo datos. Pregúntenme sobre esto, es importante que lo tengan muy claro.
        
        Sí, Dani, pregúntame. O sea, la estructura sería como una cajita contenedora, entre un millón de comillas, y, por lo que sea, vos ahí está tira error, porque en realidad tendríamos que hacer esto de... crear una persona nueva, un persona2.nombre, igual, igual. Claro, no es la estructura contenedora, es el molde con el cual yo creo después un dato.
        
        todo estructurado. Es un molde, es como el molde de la ropa, cuando se hace ropa, no sé. No, no puedo hacerme un saco de papel, no lo puedo coser, es el molde con el que creo. O sea, sería como... Bueno, ya dijiste que no es un método, pero digo, como las características que tiene un algo y ahí adentro tenés... Claro, a ver, una forma más fácil...
        
        INT es un tipo de datos con el cual yo puedo marcarles, INT es un tipo de datos con el cual yo defino INT A y después en A puedo meter datos. No puedo mezclar datos en Int. Int es el que dice cómo es el dato que voy a crear. En Stroke es lo mismo. En Stroke funciona como si fuese un Int. ¿Está? Está, ahora sí.
        
        ¿Estamos? Yo no puedo decir int igual 8. No, int es un tipo de dato, no es una variable.
        
        Ahí estamos. Estruct. Persona. Es lo mismo. Sí, Tomás, decime. Profe, hasta ahora todo bien. Entiendo bien el código. Me surgió una duda aparte, si yo abajo de P1 punto de edad, no, yo tengo P1, es persona 1 punto de edad, dice 26, y abajo le pongo otro, persona 1 punto de edad de nuevo, 27.
        
        tomaría ya el segundo, ¿no? Vas a reemplazar el valor de una cosa por otra. Lo mismo que tenés una variable A, le pones 10 y después le pones 20. El 10 se arrastró. Bien, bien, bien. Esa cual como una variable. Señoras y señores, gracias. Bien. Ahora... Más preguntas antes de seguir.
        
        Todos están muy seguros, bien, que entienden todo esto. Sí, Dani, pregúntame. Perdón, re hincha. No, no. Tenía una consulta, porque justo esto que dijo el compañero, vos realmente si la volvés a nombrar abajo la estás sobreescribiendo, eso está perfecto. Entonces, para vos podés conservar varios valores, es medio lo que estuvimos viendo antes de...
        
        Que le asignas un valor, mostras lo que tiene adentro, la cajita que tiene ese valor Asignas otro valor para que no se sobrescriba, lo pregunto Claro, ahora vamos a hacer más ejemplos para que se entienda Perfecto. Ahora la 17, create un persona 2.
        
        Si querés podés copiar las líneas de las 13 a la 15 para hacerlo más fácil.
        
        Ah, ya lo hizo todo. Y además le puso Juan y 20, perfecto. Yo tengo persona 1 y persona 2.
        
        Sí, Gonzalo, decime. No, profe, para terminar de cerrarlo yo, ¿no? Entonces el persona 1 o persona 2 terminarían siendo contenedores. que uno lo va notiendo con información. Sí, son variables compuestas, podés llamarlo, podés llamarlo de muchas formas. Ahí está.
        
        Para llamarlo bien, tendría que llamarlo como objeto sin comportamiento, pero es muy rebucado. ¿Qué tal? Bueno, ahora, yo prefiero que más que... Yo prefiero enseñar mucho más con la práctica que uno tiene el conocimiento de que es en vez de escribirte un martillo, te lo dejo tocar, sentís el peso, sentís como golpear el clavo y ahí sabés lo que es un martillo. Después el nombre que le das no te va a cambiar.
        
        Yo prefiero enseñarles con lo que sale, con lo que es, con lo que muestra, con lo que... Desde ahí tienen el concepto bien seguro de que es cada cosa. Bueno, ahora... Insertá varias líneas de ahí.
        
        y ahora vamos a hacer una cosa, ponele un CEAUT
        
        Un beso.
        
        Tomalo por bueno eso, ¿sá? Ahí está. Lo único que ponemos en el Seat, en la 21... nombre persona 1 antes del punto entre ponerle persona 1 nombre ahí está antes antes antes antes de nombre, vuelve persona, uno, nombre, ahí está.
        
        Y allá con edad lo mismo, persona 1, edad.
        
        y si querés ponerle puntito mejor para acordarnos
        
        Ahí estamos. Y ejecutalo para ver que aplicamos todo bien.
        
        Se ha engotado el anterior, hay que opilar.
        
        Ves que pone Pedro y después pone edad 10.
        
        Estamos bien. Volvé al código que seguimos.
        
        copia la 21,22 y en vez de 1 ponle 2 en todos lados
        
        Y ahora escaputalo.
        
        Bueno, hasta acá creo que no hay ninguna duda. Pusimos datos de Persona 1 y datos de Persona 2. Está todo bien. ¿Estamos bien? Bien. Sí, Magaly. Profe, ¿y vos no pones algún dato que requiere la estructura Compile Igual?
        
        Por ejemplo, si no pones edad, en persona, dos. Ah, es muy buena pregunta. Hacé una cosa, ponele en la 19, barra, barra. Adelante.
        
        Ahí manda un barra barra. Acá como no tengo constructor, ahora esa pregunta va a quedar contrarresuelta. Ahora cuando veamos constructores, ejecútalo ahí, va a mostrar cualquier cosa, pero no sé si pinche, si corta la ejecución o no. Ves, en edad te aparece cualquier cosa. El C++ tiene lo bueno y lo malo que te deja seguir y no te protege de un montón de cosas. Esto es en C-Sharp, por ejemplo, te hubiese avisado, te dice, no, mirá que estás queriendo mostrar una variable que no inicializaste.
        
        El C++... Y después de eso nos vamos a nutrir en la segunda parte de la materia haciendo cosas bastante complicadas con eso. ¿Te responde Magalía y tu duda de lo que pasó ahí? Sí, profe. Como no la inicialicé, me muestra eso. Ahora, cuando creamos constructores, eliminamos ese problema.
        
        Bueno, volvemos ahí, Octavio, al código para sacar el barra a barra.
        
        Y ahora viene cuál es la gracia de esto. En la 24, Octavio, pone Persona 2 Igual persona ahora.
        
        Persona 2 igual Persona 1
        
        Ah bueno, si te dije una cosa, después te dije lo contrario. Te estoy marcando. Perdón Octavio, fue mala mía, mala mía. Y ahora, insertar varias líneas, si volvé a insertar una línea, venderé un C-out de raya para saber que estamos... separado un poco el código, cout menor menor y ponen comillas y guiones lo que sea
        
        Ahí está, y ahí en el... bueno, ahí puede haber guioncitos, lo que sea.
        
        Mirá, después de la asignación. Estaba perfecto también eso. Me asusta tanta inteligencia.
        
        Y ahora, después de eso, copiate de nuevo la 21 y 22.
        
        Bueno, fue la gracia de las estructuras que me permiten mover un conjunto de datos todos juntos. Yo, si no tengo una estructura, tenía que mover siempre la edad y el nombre por separado. Cuando yo tengo estructura, puedo mover toda la estructura de un lugar a otro.
        
        Ahí en la 24, yo moví a la vez el nombre y la edad de un lugar a otro.
        
        esa es la ventaja de una estructura, puedo mover conjuntos de datos sin hablar de cada dato por separado. Ya están agrupados y se mueven juntos.
        
        A ver, ¿quién tiene la más mínima duda de lo que va a mostrar esto?
        
        ¿Hay alguien que tenga una duda que pueda no saber qué es lo que va a mostrar esto? Joaquín, decime qué duda tenés, ¿en qué línea? En la línea 24. En la línea 24, bien. La línea 24... toma todo lo que hay en persona 1 y lo vuelca dentro de persona 2
        
        O sea que no toma solamente el dado el nombre, lleva las dos cosas de uno a otro. Porque una estructura como te agrupa cosas, después moves todo junto.
        
        Entonces es como que si lo subrescribiera por ahí sí lo... o sea, darían lo mismo. Claro, o sea, si vos tenés variables enteras... Cuando vos definís la variable A, definís la variable B, a la variable A le das 10, a la B le das 20. Puedo decir que A es igual a B.
        
        que te quedó 20 en las dos, porque copió el valor y lo metió en el otro lado. Listo, listo, perfecto, ya entendí. Lo que pasa es que lo hace por una estructura y lo hace por todos. Muy buena tu pregunta, gracias Joaquín. Ojalá la gente se anima a preguntar como preguntaste vos. Ahí está, Verónica.
        
        Después de la asignación es solo texto, no es una función ni nada.
        
        Después de la asignación, ¿qué me estás preguntando con respecto a qué línea que hace qué? La línea 26. La línea 26. Sí, sale solo texto ahí, porque pongo algo entre comillas. por aclaración para darme cuenta cuando salga qué parte del código estoy discutiendo es lo mismo que poner Hola Mundo
        
        Ah, listo, profe. Bien. Sí, Gonzalo. Profe, una duda. Eh... al asignarle persona 2 igual a persona 1, o sea, yo lo ejecuté, ¿no? y... pero mi... Mal, mal, mal. Vos hiciste algo que está muy mal, Gonzalo. porque la gracia es verlo, pero bueno, dale, bueno, es como agarrar un libro, empezar a leerlo y fijarte que eres el asesino y después leer el libro, no, dale.
        
        No le hagas al libro, lo tenís que hacer a última página y después de ahí empieces a leer el libro, no me lo hagas más, ¿estamos? Sí, sí, es que lo entendí, pero mi duda surgió en base a... Sí, al orden digamos, porque teniendo persona 2, igual la persona 1 debería traer.
        
        el valor de la persona, o sea, el valor de la persona 2, ¿no? O estoy... o siempre voy a traer el primero, el valor. A ver, entendamos la niña 24, la niña 24 dice que voy a modificar el valor de la persona 2.
        
        y le voy a asignar ahí los datos que hay en persona 1, me gusta la pregunta me gusta que haya preguntado muy bien Gonzalo que preguntó bien ¿Alguien más que quiera preguntar algo? Sí, Eduardo. Eh, no entendí justo su explicación, o sea... ¿Va...? ¿Sí iba a copiar?
        
        Como alguien en el 24 va a copiar al que está igual, pero... Eh, porque solamente, como se dice, lo que yo entiendo es que va a copiar a alguien, pero... Se supone que Persona 2 va a copiar a Persona 1, ¿no? A ver... Esto es algo...
        
        A ver, hagamos algo porque veo que viven con un nivel muy, muy, muy bajo y necesito que entienda algo más básico, ¿puedes comentar desde la 13 hasta la 29 todo y vamos a hacer algo muy, muy básico para que se entienda qué está pasando? No, no, no, comentalo, ponele barra, asterisco, asterisco, barra para comentar todo.
        
        ¿Ah, tenés cobarra ahí o no al final? Claro, antes del return, antes del return. Antes, no, antes del return, antes. El return de Jameló.
        
        ahora en la 30 pone asterisco barra
        
        Escribí un asterisco y una barra. ¡Ah, ahí está!
        
        No comentas, ¿sí, esto? Sí, ahí está. Ahí está. Dale Enter. Varios Enter. Esto hace que todo esto no lo tomen en cuenta, ¿estamos? Pone ahí, en la 32, escribí INT A. Esto gente es... Tendría que ser... Después pone int b
        
        Después pone A igual 10.
        
        Después ponemos B igual 20, bien, nada por ahí me lo tome. Después ponemos... que A es igual, que B es igual a, para hacer el mismo ejemplo de allá, B es igual a Talente.
        
        ahora pone un CEO de AES está igual así que tómalo por bueno y eso mismo copialo antes de la 36
        
        copiarte la línea 26 ahí antes del 38
        
        ¿Quién tiene una duda con esto? antes de verlo en el futuro.
        
        ¿Hay alguien que tenga alguna duda con esto? ¿La más mínima duda de qué es lo que mostraría esto?
        
        Todo el mundo tiene la sentencia 38 exactamente que hace. Irme estaba preguntando último, me perdí. Yo. Eduardo, déjeme la mano levantada, hasta que así no me pierdo. Acá, Eduardo, ¿entendés exactamente qué hace la línea 38? ¿Tienes alguna duda con esto?
        
        si, que tenes alguna duda o si que entendes, osea si entiendo, esta bien, decime exactamente si te gusta este código o que es lo que sale Ok, y...
        
        ¿No era que no tenías dudas? O sea, ¿qué va a salir? Claro, ejecuta este código y este código va a mostrar algo. ¿Qué va a mostrar? va a salir A10 y B20 y la destinacion seria 10 y 10, no? O sea, el A y el otro de B, 10. Claro, porque A sigue valiendo 10 y B tiene el valor de A. La niña 38 le dice que a B le dé el valor de A.
        
        estamos bien y es lo mismo que pasaría con el anterior claro entonces acá hay alguien que tenga por favor gente no se quede con una duda con esto porque Si no, no tiene sentido que tenga que haber profesor o lo que sea. Nadie tiene ninguna duda, todos saben por qué va a salir lo que va a salir.
        
        Todo el mundo está muy, muy seguro. Puedo preguntarle a cualquiera.
        
        Bueno, a ver, le voy a preguntar a alguien.
        
        ¡Gracias por ver el video! 26 No, ahora estamos con la partida de código acá abajo Ah De la 32 a la 42 Ahí te toca, ¿bien?
        
        Sí, eso sí.
        
        Joaquín, Nicolás Sánchez. Sí.
        
        Ahora, te pido ahí Octavio, que la línea 38 donde está la A pongas B y la B la A, que digas que A y suba la B.
        
        Ahora, Joaquín, decime qué es lo que va a mostrar esto cuando se ejecute. La 36 va a mostrar que A es igual a 10 y B es igual a 20. No, no, no. Pará, pará, pará. ¿Qué va a salir por la pantalla puntualmente? Ah, primero A igual 10. B igual a 20 y después del cambio de variable saldría que A es igual a 20 y B es igual a 20 también. Claro. Lo que es es una asignación, ¿estamos de acuerdo?
        
        copio el valor de B dentro de la variable A, bueno todo el mundo entiende, esto es borrarlo directamente que no se sepa que yo estoy diseñando esto, porque todo... Es así, listo. Sacalo, sacale las barras, asterisco, asterisco, barra.
        
        Bueno, entonces acá persona 2 igual a persona 1, ya sabemos que lo que va a ser es análogo a lo que vimos con AIB.
        
        Entonces, ¿quién tiene la más remota duda de lo que va a salir? ¿Quién tiene alguna duda pequeña, que no está totalmente seguro de lo que va a ejecutar este programa?
        
        todos están totalmente seguros
        
        Bueno, a ver que le pregunto a otro, porque la gente me miente, me miente, me miente.
        
        Eh... Danilo. Danilo Rojas. ¿Estás ahí, Danilo? Sí, sí. Acá estoy. Decime exactamente qué es lo que sale de esto cuando se ejecute. Y va a salir primero el nombre de Pedro con la edad 10. el nombre Juan con la edad 20 y después va a salir el nombre Pedro con la edad 10.
        
        y después de nuevo Pedro, nuevamente, claro, bien, bien, bien, sí, eso es así. Entonces, básicamente, con su manejo de estructuras, la ventaja... es que en las asignaciones asigno de la estructura entera, eso es todo lo que quiero que entiendan. Ejecutalo, copialo, al ejemplo este para que entiendan como se mueven las estructuras.
        
        Está, y ahí vemos que movió todas las arquitecturas a la vez. Pásaselo a tus compañeros por el chat, que todo el mundo lo tenga el código este.
        
        Y les voy a dar una última oportunidad que se pongan al día todos. Yo iba a dar más cosas acá, pero lo incluyo dentro de la clase que viene. Pero tienen que entender todo lo que vimos hasta ahora. La clase que viene vamos a ver constructor y vamos a ver listas y vamos a ver pilas, colas y listas con constructores.
        
        Y ahí voy a explicar el M-PACE. ¿Ella cola silista con conductores? Claro, con estructuras, con constructor. Y vamos a usar para afilar, además del push, el M-PACE. Pero el M-PACE necesita una estructura con constructor para poder usarse.
        
        Vamos a ver cómo es la diferencia en meter en una pila colorista cosas con el Push o con el Empace. pero para eso tenían que entender lo que es una estructura pero falta la parte constructor
        
        Así que vamos a hacer hasta acá, parar el tiempo a todo el mundo, que se meta con el código, con el SOLER, que se meta...
        
