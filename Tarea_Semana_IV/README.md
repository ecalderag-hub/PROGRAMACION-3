- Nombre completo: Ericka Daniela Caldera Gomez
- Carné: 9941 - 24 - 8190
- Sección: "B"
- Explicación breve del funcionamiento del programa:
  
Este programa utiliza una lista simplemente enlazada para guardar información de productos usando memoria dinámica.

Primero, se crea una estructura llamada Producto donde se almacenan el código, nombre y precio. También se crea una estructura llamada Nodo, que contiene un producto y un puntero llamado siguiente, que sirve para enlazar un nodo con otro. Este puntero se inicializa en nullptr para indicar que no apunta a ningún nodo al inicio.

Luego, el programa crea 4 nodos usando new y le pide al usuario que ingrese los datos de cada producto. Cada nodo se conecta con el siguiente formando una lista enlazada.

Después, se utiliza un puntero auxiliar para recorrer la lista desde el primer nodo hasta el último, mostrando la información de cada producto y sumando el precio total sin modificar el nodo inicial.

Por último, el programa libera la memoria utilizando delete en cada nodo para evitar fugas de memoria y asegurar el uso correcto de la memoria dinámica.

Este programa demuestra el uso de estructuras, punteros, memoria dinámica, listas enlazadas y liberación correcta de memoria.

