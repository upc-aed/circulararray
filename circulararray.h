#include <iostream>
using namespace std;

template <class T>
class CircularArray
{
private:
    T *array;
    int capacity;
    int back, front;
    
public:
    CircularArray();
    CircularArray(int _capacity);// Crea un array sin datos con una capacidad determinada
    virtual ~CircularArray();// Liberar memoria del array
    void push_front(T data);// Agrega un elemento al comienzo 
    void push_back(T data);// Agrega un elemento al final
    void insert(T data, int pos);// Inserta el elemento en la posición indicada
    T pop_front();// Remueve el elemento al comienzo 
    T pop_back();// Remueve el elemento al final
    T& operator[](int);// Operador que retorna el elemento en la posición indicada    
    bool is_empty();// Retorna True si el array está vacía o no
    bool is_full();(); // Retorna True si el array está lleno o no
    int size(); // Retorna el tamaño del array (en funcion de back, front y capacity)
    void clear(); // Elimina todos los elementos del array
    CircularArray* reverse(); // Devuelve una copia del array invertido    
    string to_string(string sep=" ");// Retorna un string con todos los elementos separados por "sep"

private:
    int next(int); // Retorna la posicion siguiente 
    int prev(int); // Retorna la posicion anterior
    void resize();// Redimensiona el array cuando size() == capacity
};

