#include <iostream>
using namespace std;

struct Nodo{
    string accion;
    Nodo* siguiente;
};

//PUSH
void push (Nodo*& pila, string accion){
    Nodo* nuevo = new Nodo;
    nuevo->accion = accion;
    nuevo->siguiente = pila;
    pila = nuevo;
}

//POP
string pop(Nodo*& pila){
    if( pila == NULL){
        cout<<"La pila esta vacia"<< endl;
        return "";
    }
    Nodo* temp = pila;
    string accion= temp->accion;
    pila = pila->siguiente;
    delete temp;

    return accion;
}
//MOSTRAR 
void mostrar(Nodo* pila) {
    if (pila == NULL) {
        cout << "Pila vacia"<< endl;
        return;
    }

    Nodo* aux = pila;
    while (aux != NULL) {
        cout << "- " << aux->accion << endl;
        aux = aux->siguiente;
    }
}
//LIMPIAR LA PILA
void limpiar(Nodo*& pila) {
    while (pila != NULL) {
        pop(pila);
    }
}

int main(){
    //MOSTRAR NOMBRE DEL ESTUDIANTE
    cout<<endl;
    cout<< "Nombre: ERICKA DANIELA CALDERA GOMEZ"<<endl;


    Nodo* acciones = NULL;
    Nodo* rehacer = NULL;

    int opcion;
    string texto;

    do {
        cout << "\n------ MENU ------" << endl;
        cout << "1. Realizar accion" << endl;
        cout << "2. Deshacer"<< endl;
        cout << "3. Rehacer"<< endl;
        cout << "4. Mostrar acciones"<< endl;
        cout << "5. Mostrar rehacer"<< endl;
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {

        case 1:
            cout << "Ingrese accion: ";
            getline(cin, texto);
            push(acciones, texto);
            limpiar(rehacer); // importante
            break;

        case 2:
            if (acciones == NULL) {
                cout << "No hay acciones para deshacer"<<endl;
            } else {
                string acc = pop(acciones);
                push(rehacer, acc);
                cout << "Accion deshecha: " << acc << endl;
            }
            break;

        case 3:
            if (rehacer == NULL) {
                cout << "No hay acciones para rehacer"<<endl;
            } else {
                string acc = pop(rehacer);
                push(acciones, acc);
                cout << "Accion rehecha: " << acc << endl;
            }
            break;

        case 4:
            cout << "\nAcciones actuales:"<<endl;
            mostrar(acciones);
            break;

        case 5:
            cout << "\nPila de rehacer:"<<endl;
            mostrar(rehacer);
            break;

        case 6:
            cout << "Saliendo..."<<endl;
            break;
        }
    } while (opcion != 6);

    // liberar memoria antes de salir
    limpiar(acciones);
    limpiar(rehacer);

   return 0;
}

