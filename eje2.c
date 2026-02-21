#include <stdio.h>
int WinMain(){
int a[6];
int i;

for (i=0;i<6;i++){
    printf("&a[%d]=%p\n",i,&a[i]);


}
return 0;

}

//es mayor &a[5] que a&[4] debido a que tiene una dirección de memoria más alta,
//puesto que s ealmacenana de manera contigua por 4 bytes en este caso. 5 es más alto que 4
//por lo tanto es más alto