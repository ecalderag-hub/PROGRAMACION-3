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

    while(opcion == 's'){
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
        
        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    }

    Nodo* temp = head;
    while(temp != NULL) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL"<< endl;

    cout << endl;
    cout << "NOMBRE: ERICKA DANIELA CALDERA GOMEZ";

    return 0;

}
