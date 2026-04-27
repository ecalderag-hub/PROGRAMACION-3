
#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;
};

Nodo* crearNodo(int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->izquierdo = NULL;
    nuevo->derecho = NULL;
    return nuevo;
}

Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == NULL) {
        return crearNodo(valor);
    }

    if (valor < raiz->dato) {
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    } else {
        raiz->derecho = insertar(raiz->derecho, valor);
    }

    return raiz;
}

void inOrden(Nodo* raiz) {
    if (raiz != NULL) {
        inOrden(raiz->izquierdo);
        cout << raiz->dato << " ";
        inOrden(raiz->derecho);
    }
}

void preOrden(Nodo* raiz) {
    if (raiz != NULL) {
        cout << raiz->dato << " ";
        preOrden(raiz->izquierdo);
        preOrden(raiz->derecho);
    }
}

void postOrden(Nodo* raiz) {
    if (raiz != NULL) {
        postOrden(raiz->izquierdo);
        postOrden(raiz->derecho);
        cout << raiz->dato << " ";
    }
}

bool arbolVacio(Nodo* raiz) {
    return raiz == NULL;
}

int main() {
    cout<<endl;
    cout<< "Nombre: ERICKA DANIELA CALDERA GOMEZ";
    Nodo* raiz = NULL;
    int opcion;
    int valor;

    do {
        cout << "\n--- MENU ---";
        cout << "\n1. Insertar valor";
        cout << "\n2. Mostrar InOrden";
        cout << "\n3. Mostrar PreOrden";
        cout << "\n4. Mostrar PostOrden";
        cout << "\n5. Mostrar todos los recorridos";
        cout << "\n6. Salir";
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese el valor a insertar: ";
                cin >> valor;
                raiz = insertar(raiz, valor);
                cout << "Valor insertado correctamente.\n";
                break;

            case 2:
                if (arbolVacio(raiz)) {
                    cout << "\nEl arbol esta vacio.\n";
                } else {
                    cout << "\nRecorrido InOrden: ";
                    inOrden(raiz);
                    cout << endl;
                }
                break;

            case 3:
                if (arbolVacio(raiz)) {
                    cout << "\nEl arbol esta vacio.\n";
                } else {
                    cout << "\nRecorrido PreOrden: ";
                    preOrden(raiz);
                    cout << endl;
                }
                break;

            case 4:
                if (arbolVacio(raiz)) {
                    cout << "\nEl arbol esta vacio.\n";
                } else {
                    cout << "\nRecorrido PostOrden: ";
                    postOrden(raiz);
                    cout << endl;
                }
                break;

            case 5:
                if (arbolVacio(raiz)) {
                    cout << "\nEl arbol esta vacio.\n";
                } else {
                    cout << "\nRecorrido InOrden: ";
                    inOrden(raiz);

                    cout << "\nRecorrido PreOrden: ";
                    preOrden(raiz);

                    cout << "\nRecorrido PostOrden: ";
                    postOrden(raiz);

                    cout << endl;
                }
                break;

            case 6:
                cout << "\nSaliendo del programa...\n";
                break;

            default:
                cout << "\nOpcion no valida. Intente nuevamente.\n";
                break;
        }

    } while (opcion != 6);

    return 0;
}
