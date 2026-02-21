
#include <stdio.h>

int WinMain() {
    int m[2][4]; //2 filas 4 columnas
    int i,j;
    for (i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("&m[%d][%d]=%p\n",i,j,&m[i][j]);
        }

        
    }
    return 0;
}

//Determina si el almacenamiento es por filas o columnas.
//el almacenamiento es por columnas, ya que los elementos de la primera columna (m[0][0], m[0][1], m[0][2], m[0][3]) 
//están almacenados en direcciones de memoria consecutivas, seguidos por los elementos de la segunda columna 
//(m[1][0], m[1][1], m[1][2], m[1][3]) que también están almacenados en direcciones de memoria consecutivas.
