//NOMBRE: ERICKA DANIELA CALDERA GOMEZ
// Curso: Programación III
#include <iostream>
#include <string>
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

cout << "Ingrese codigo del producto 1: ";
cin >> primero->data.codigo;

cin.ignore();

cout << "Ingrese nombre del producto 1: ";
getline(cin, primero->data.nombre);

cout << "Ingrese precio del producto 1: ";
cin >> primero->data.precio;

primero->siguiente = nullptr;

//SEGUNDO NODO
Nodo* segundo = new Nodo;

cout << "\nIngrese codigo del producto 2: ";
cin >> segundo->data.codigo;

cin.ignore();

cout << "Ingrese nombre del producto 2: ";
getline(cin, segundo->data.nombre);

cout << "Ingrese precio del producto 2: ";
cin >> segundo->data.precio;

segundo->siguiente = nullptr;
primero->siguiente = segundo;

//TERCER NODO
Nodo* tercero = new Nodo;

cout << "\nIngrese codigo del producto 3: ";
cin >> tercero->data.codigo;

cin.ignore();

cout << "Ingrese nombre del producto 3: ";
getline(cin, tercero->data.nombre);

cout << "Ingrese precio del producto 3: ";
cin >> tercero->data.precio;

tercero->siguiente = nullptr;
segundo->siguiente = tercero;

//CUARTO NODO
Nodo* cuarto = new Nodo;

cout << "\nIngrese codigo del producto 4: ";
cin >> cuarto->data.codigo;

cin.ignore();

cout << "Ingrese nombre del producto 4: ";
getline(cin, cuarto->data.nombre);

cout << "Ingrese precio del producto 4: ";
cin >> cuarto->data.precio;

cuarto->siguiente = nullptr;
tercero->siguiente = cuarto;

//Recorrer e imprimir la lista
Nodo* actual = primero;
double total = 0;

cout << "\nLista de productos:\n" << endl;

// Mostrar nombre del estudiante
    cout << "Nombre: ERICKA DANIELA CALDERA GOMEZ" << endl << endl;

while (actual != nullptr) {
     
    cout << "Codigo: " << actual->data.codigo << endl;
    cout << "Nombre: " << actual->data.nombre << endl;
    cout << "Precio: Q" << actual->data.precio << endl;
    cout << "--------------------------" << endl;

    total += actual->data.precio;

    actual = actual->siguiente;
}

//Mostrar total acumulado
cout << "Total acumulado: Q" << total << endl;


//Liberar memoria correctamente
actual = primero;

while (actual != nullptr) {
    Nodo* temp = actual;
    actual = actual->siguiente;
    delete temp;
}

primero = nullptr;


return 0;
}
