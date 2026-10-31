struct Nodo
{
    int dato;
    Nodo *anterior;
    Nodo *siguiente;
};

struct structLista
{
    Nodo *primero;
    Nodo *ultimo;
};

int main()
{
    structLista lista;

    lista.primero = nullptr;
    lista.ultimo = nullptr;

    Nodo *nuevo;
    // Creo un puntero auxiliar
    Nodo *Aux;


    // Agrego el primer nodo
    // lista.push_front(10);
    nuevo = new Nodo;
    nuevo->dato = 10;
    nuevo->anterior = nullptr;
    nuevo->siguiente = nullptr;
    lista.primero = nuevo;
    lista.ultimo = nuevo;

    // lista.push_back(20);
    nuevo = new Nodo;
    nuevo->dato = 20;
    nuevo->anterior = nullptr;
    nuevo->siguiente = lista.primero;
    lista.primero = nuevo;
    lista.ultimo = nuevo; 

    return 0;
}