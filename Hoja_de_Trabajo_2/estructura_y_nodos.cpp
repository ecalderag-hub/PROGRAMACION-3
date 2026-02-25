//NOMBRE: ERICKA DANIELA CALDERA GOMEZ
#include <iostream>
using namespace std;

struct producto {
    int codigo;
    string nombre;
    double precio;
};
struct Nodo {
    producto data;
    Nodo* siguiente;
};

int main(){
//PRIMER NODO
Nodo* primero = new Nodo;
primero->data.codigo = 101;
primero->data.nombre = "Laptop";
primero->data.precio = 5500.50;

primero->siguiente = nullptr; //enlazar

//SEGUNDO NODO
Nodo* segundo = new Nodo;
segundo->data.codigo = 102;
segundo->data.nombre = "Mouse";
segundo->data.precio = 150.75;

segundo->siguiente = nullptr;
primero->siguiente = segundo; //enlazar

//TERCER NODO
Nodo* tercero = new Nodo;

tercero->data.codigo = 103;
tercero->data.nombre = "Teclado";
tercero->data.precio = 300.00;

tercero->siguiente = nullptr;
segundo->siguiente = tercero;

//Paso 5 – Recorrer e imprimir la lista
Nodo* actual = primero;
while (actual != nullptr) {
    cout << "Codigo: " << actual->data.codigo << endl;
    cout << "Nombre: " << actual->data.nombre << endl;
    cout << "Precio: Q" << actual->data.precio << endl;
    cout << "--------------------------" << endl;

    actual = actual->siguiente;
}
//Paso 6 – Liberar memoria correctamente
actual = primero;
while (actual != nullptr) {
    Nodo* temp = actual;
    actual = actual->siguiente;
    delete temp;
}
primero = nullptr;
    return 0;
}
