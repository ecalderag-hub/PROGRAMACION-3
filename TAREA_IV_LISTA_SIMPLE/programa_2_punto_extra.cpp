#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {


    Nodo* head = NULL;
    Nodo* actual = NULL;

    int valor;
    char opcion = 's';

    int cantidad = 0;
    int suma = 0;


    while(opcion == 's'){
    cout << endl;
    cout << "Ingrese un numero: ";
    cin >> valor;

        Nodo* nuevo = new Nodo;
        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if(head == NULL) {
            head = nuevo;
            actual = nuevo;
        } else {
            actual->siguiente = nuevo;
            actual = nuevo;
        }
          // CONTAR Y SUMAR
        cantidad++;
        suma += valor;

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    }
    cout << endl;

    Nodo* temp = head;
    while(temp != NULL) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL"<<endl;
    cout<< "-------------------------------------" << endl;
    cout << "NOMBRE: ERICKA DANIELA CALDERA GOMEZ" << endl;
    cout<< "-------------------------------------";

    float promedio = (float)suma / cantidad;

    cout << "\nCantidad de nodos: " << cantidad;
    cout << "\nSuma de valores: " << suma;
    cout << "\nPromedio: " << promedio;

    return 0;


}
