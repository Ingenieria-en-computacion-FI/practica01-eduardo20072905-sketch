#include <stdio.h>

int WinMain() {
    int n,i,j;
    //n es el tamaño de la matriz cuadrada, es decir, el número de filas y columnas
    //i y j son los conatdores para recorrer
    
   
    printf("ingrese el tamaño de la matriz cuadrada:");
    scanf("%d",&n); //3x3, 4x4, 5x5, etc

    int A[n][n]; //matriz cuadrada de tamaño n x n, donde se almacenarán los elementos ingresados 
    float B[n];  //para la division

    printf("ingrese los elementos de la matriz A, serán almacenados por columnas hasta llenar una fila:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

printf("Los elementos de la matriz A, que acaba de ingresar son:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");//para que se vea cuadradito
    }

    //Con los datos obtenidos, procedemos a realizar el arreglo con los criterios de la profesora

    for(i=0;i<n;i++){//recorremos las filas

        if(i%3==1){
            int suma=0;//almacenamos la suma
            for(j=0;j<n;j++){//recorremos las columnas para sumar los elementos de la fila i
                suma+=A[i][j]; //suma de los elementos de la fila i
            }
            B[i]=suma; //almacenamos la suma en el arreglo B
           
        }
        else if(i%3==2) { //Producto de la columna
            int producto=1;//almacenamos el producto
            for(j=0;j<n;j++){//recorremos las columnas 
                producto*=A[j][i]; //producto de los elementos de la columna i
            }
            B[i]=producto; //almacenamos el producto en el arreglo B
        }
        else{ //el útimo criterio i%3==0
            int producto =1;//almacenamos el producto
            int suma=0;//almacenamos la suma
            for(j=0;j<n;j++){//recorremos las columnas 
                producto*=A[j][i]; //producto de los elementos de la columna i
                suma+=A[j][i]; //suma de los elementos de la columna i
            }

            if (suma!=0){
                B[i]=((float)producto)/suma; //almacenamos el resultado de la división en el arreglo B
            }
            else{
                B[i]=0;
                printf("no puedes dividir por 0");
            }

        }  
    }  

        //reusltados 
        printf("\n\n**Arreglo**\n");
        for(i=0;i<n;i++){
        printf("B[%d]=%.4f\n",i,B[i]);

    }

    return 0;
}
