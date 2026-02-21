#include <stdio.h>

int BIG[10000000];

int WinMain() {
    //int BIG[10000000];
    
    return 0;
}

//explica porque falla al compilar:
//El código falla al compilar porque el tamaño del arreglo BIG es demasiado grande para ser manejado por la memoria disponible.
//En la mayoría de los sistemas, el tamaño máximo de un arreglo está limitado por la cantidad de memoria que el programa puede utilizar. 
//En este caso, un arreglo de 10 millones de enteros (que generalmente ocupan 4 bytes cada uno) requeriría aproximadamente 40 megabytes.

//donde se almacena?
//Se almacena en la pila (stack) del programa, que es una región de memoria utilizada para almacenar variables locales y datos 
//relacionados con la ejecución de funciones.

//cómo se puede solucionar el error?
//Para solucionar el error, se puede utilizar memoria dinámica en lugar de un arreglo estático.
