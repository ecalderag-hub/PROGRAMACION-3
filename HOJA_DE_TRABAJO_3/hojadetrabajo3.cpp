#include <iostream>
using namespace std;

// Definir el nodo
struct Nodo {
    int dato;
    Nodo* siguiente;
};

//tope de la fila
Nodo* tope = NULL;

//1.PUSH: Insertar un elemento en la pila
void push (int valor){
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->siguiente = tope;
    tope = nuevo;

    cout << "Accion " << valor << " insertada correctamente" << endl;
}

//2.POP: Eliminar un elemento en la pila(tope)
void pop(){
    if(tope == NULL){
        cout << "La pila esta vacia" << endl;
        return;
    }
    Nodo* temp = tope;
    cout << "Accion eliminada" << temp->dato << endl;

    tope = tope->siguiente;
    delete temp;

}//3. PEEK: Mostrar el elemento en el tope
void peek(){
    if(tope == NULL){
        cout << "La pila esta vacia"<<endl;
    }else{
        cout << "Accion que se encuentra en el tope: " << tope->dato << endl;   
    }
}

//Mostrar pila completa
void mostrar(){
    if(tope == NULL){
    cout << "La pila esta vacia"<<endl;
    return;
}
Nodo* actual = tope;
cout<< "Mostrando todas las acciones: ";

while(actual != NULL){
    cout << actual->dato <<" -> ";
    actual = actual->siguiente;
}
   cout<< "NULL" << endl;
}

//Contar los elementos de la pila
int contarElementos() {
    int contador = 0;
    Nodo* actual = tope;

    while (actual != NULL) {
        contador++;
        actual = actual->siguiente;
    }

    return contador;
}

// Buscar elemento
void buscarElemento(int valor) {
    if (tope == NULL) {
        cout << "La pila esta vacia" << endl;
        return;
    }

    Nodo* actual = tope;
    int posicion = 1;
    bool encontrado = false;

    while (actual != NULL) {
        if (actual->dato == valor) {
            cout << "Accion encontrada en la posicion: " << posicion << endl;
            encontrado = true;
            break;
        }
        actual = actual->siguiente;
        posicion++;
    }

    if (!encontrado) {
        cout << "Accion no encontrada" << endl;
    }
}
// Vaciar pila
void vaciarPila() {
    if (tope == NULL) {
        cout << "La pila ya esta vacia"<< endl;
        return;
    }

    while (tope != NULL) {
        pop();
    }

    cout << "Pila vaciada correctamente" << endl;
}

//MENU INTERACTIVO
int main(){
    int opcion, valor;
    cout << "--------------------------------------"<< endl;
    cout << "Nombre: ERICKA DANIELA CALDERA GOMEZ" << endl; 
    cout << "--------------------------------------" << endl;

    do {
        cout << "\n=========== MENU ============="<< endl;
        cout << "1. Insertar accion (push)"<< endl;
        cout << "2. Eliminar accion (pop)"<< endl;
        cout << "3. Ver tope (peek)"<< endl;
        cout << "4. Mostrar pila"<< endl;
        cout << "5. Contar accion"<< endl;
        cout << "6. Buscar accion"<< endl;
        cout << "7. Vaciar pila"<< endl;
        cout << "8. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese valor: ";
                cin >> valor;
                push(valor);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                mostrar();
                break;

            case 5:
                cout << "Total de acciones agregadas: " << contarElementos() << endl;
                break;

            case 6:
                cout << "Ingrese accion a buscar: ";
                cin >> valor;
                buscarElemento(valor);
                break;

            case 7:
                vaciarPila();
                break;

            case 8:
                cout << "Saliendo del programa...\n";
                break;
        }

    } while (opcion != 8);
    return 0;
}


