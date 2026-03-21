#include <iostream>
using namespace std;

struct Nodo {
int carne;
string nombre;
string apellido;
string carrera;
Nodo* siguiente;

};

Nodo* head = NULL;
Nodo* actual = NULL;

//1.INSERTAR ESTUDIANTE AL INICIO
void insertarInicio(Nodo*& head) {

Nodo* nuevo = new Nodo;
cout << "Ingrese carne: ";
cin >> nuevo->carne;
cout << "Ingrese nombre: ";
cin >> nuevo->nombre;
cout << "Ingrese apellido: ";
cin >> nuevo->apellido;
cout << "Ingrese carrera: ";
cin >> nuevo->carrera;

nuevo->siguiente = head;
head = nuevo;

cout << "Estudiante agregado al inicio.\n";
}

//2.INGRESAS ESTUDIANTE AL FINAL
void insertarFinal(Nodo*& head) {

    Nodo* nuevo = new Nodo;

    cout << "Ingrese carne: ";
    cin >> nuevo->carne;
    cout << "Ingrese nombre: ";
    cin >> nuevo->nombre;
    cout << "Ingrese apellido: ";
    cin >> nuevo->apellido;
    cout << "Ingrese carrera: ";
    cin >> nuevo->carrera;

    nuevo->siguiente = NULL;

    if(head == NULL) {
        head = nuevo;
    } else {
        Nodo* actual = head;
        while(actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }

    cout << "Estudiante agregado al final.\n";
}

//3.MOSTRAR A LOS ESTUDIANTES
void mostrar(Nodo* head) {

    if(head == NULL) {
        cout << "Lista vacia.\n";
        return;
    }

    Nodo* recorrido = head;

    while(recorrido != NULL) {
        cout << "Carné: " << recorrido->carne << endl;
        cout << "Nombre: " << recorrido->nombre << endl;
        cout << "Apellido: " << recorrido->apellido << endl;
        cout << "Carrera: " << recorrido->carrera << endl;
        cout << "----------------------\n";

        recorrido = recorrido->siguiente;
    }
}

//4.BUSCAR ESTUDIANTE CON NUMERO DE CARNE
    void buscar(Nodo* head) {

    int valor;
    cout << "Ingrese numero a buscar: ";
    cin >> valor;

    Nodo* recorrido = head;

    while(recorrido != NULL) {

        if(recorrido->carne == valor) {
            cout << "Numero encontrado.\n";
            return;
        }
        recorrido = recorrido->siguiente;
    }
    cout << "Numero no encontrado.\n";
}

//5.ELIMINAR ESTUDIANTE CON NUMERO DE CARNE
void eliminar(Nodo*& head) {

    int carne;
    cout << "Ingrese carne a eliminar: ";
    cin >> carne;

    Nodo* actual = head;
    Nodo* anterior = NULL;

    while (actual != NULL && actual->carne != carne) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        cout << "Estudiante no encontrado.\n";
        return;
    }

    if (anterior == NULL) {
        head = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }

    delete actual; // uso de memoria dinámica
    cout << "Estudiante encontrado en la lista ha sido eliminado.\n";
}
//6.MENU
int main() {
    //MOSTRAR NOMBRE DEL ESTUDIANTE
    cout<<endl;
    cout<< "Nombre: ERICKA DANIELA CALDERA GOMEZ"<<endl;

    Nodo* head = NULL;
    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insertar estudiante al inicio\n";
        cout << "2. Insertar estudiante al final\n";
        cout << "3. Mostrar lista de estudiantes\n";
        cout << "4. Buscar estudiante\n";
        cout << "5. Eliminar estudiante\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;

        switch(opcion) {
            case 1:
                insertarInicio(head);
                break;
            case 2:
                insertarFinal(head);
                break;
            case 3:
                mostrar(head);
                break;
            case 4:
                buscar(head);
                break;
            case 5:
                eliminar(head);
                break;
        }

    } while(opcion != 6);

    return 0;
}




