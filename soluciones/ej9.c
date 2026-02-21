#include <stdio.h>

int WinMain() {

    int a[5];
    int i;

    for (i=-1;i<4;i++){
    printf("&a[%d]=%p\n",i,&a[i]);


}

}
//porqué compila sin errores a[-1] y a[4] si no existen en el arreglo?
//Porqué es peiligroso acceder a estas posiciones fuera de los límites del arreglo?

//El código compila sin errores porque el acceso a a[-1] y a[4] no es verificado en tiempo de compilación. 
//Sin embargo, acceder a estas posiciones fuera de los límites del arreglo es un comportamiento indefinido,
//lo que significa que puede causar errores en tiempo de ejecución o resultados inesperados. En este caso, el programa 
//puede imprimir direcciones de memoria para a[-1] y a[4], pero no se garantiza que estas direcciones sean válidas
//o que el programa funcione correctamente, tomas memoria que no te pertenece.

//Que revela sobre la memoria?
//los elementos de un arreglo son contiguos y que mientras cumpla una sintaxis correcta, el programa va a compilar
