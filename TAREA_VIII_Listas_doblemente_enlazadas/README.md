1. ¿Qué errores presentaba el código original?
El código original tenía múltiples errores tanto de sintaxis como de lógica:
- Uso incorrecto del operador = en lugar de == en condiciones, lo que provocaba resultados incorrectos.
- Definición innecesaria de una segunda estructura (Nodos) sin punteros, causando incompatibilidad.
- Mala conexión de punteros (siguiente y anterior), lo que rompía la estructura de la lista.
- Recorridos incorrectos (por ejemplo, avanzar usando anterior o llegar hasta NULL sin control).
- Inserción al final mal implementada (no enlazaba correctamente con el último nodo).
- Eliminación de nodos con errores en la reconexión de enlaces.
- Conteo incorrecto de nodos.
- Errores en la liberación de memoria.
- Problemas en el menú (condiciones mal planteadas).

2. ¿Qué problemas tenía la versión sin tail al recorrer hacia atrás?
- Para recorrer hacia atrás era necesario primero llegar al último nodo recorriendo toda la lista desde el inicio.
- Esto hacía el proceso ineficiente (O(n)).
- El código era más propenso a errores, porque si no se encontraba bien el último nodo, el recorrido fallaba.
- No había acceso directo al final de la lista.
  
3. ¿Qué ventaja aporta usar tail?
El uso de tail aporta varias ventajas importantes:
- Permite acceso directo al último nodo.
- Evita recorrer toda la lista para ciertas operaciones.
- Facilita el recorrido hacia atrás de forma inmediata.
- Mejora la eficiencia general del programa.

4. ¿Qué operaciones mejoran con esta modificación?
Principalmente:
- Inserción al final
Antes: O(n) (recorrer toda la lista)
Ahora: O(1) (acceso directo con tail)
- Recorrido hacia atrás
Antes: necesitabas buscar el último nodo
Ahora: comienzas directamente desde tail
- También mejora la claridad del código.
  
5. ¿Qué cuidados adicionales deben tenerse al eliminar nodos cuando existe tail?
Al usar tail, se deben considerar varios casos:
- Si se elimina el último nodo → se debe actualizar tail.
- Si se elimina el primer nodo → se debe actualizar head.
- Si la lista queda vacía → head y tail deben quedar en NULL.
- Evitar que tail quede apuntando a memoria liberada (puntero colgante).
- Mantener siempre la coherencia entre siguiente y anterior.
