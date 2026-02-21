#include <stdio.h>
int main(){
int a[6];
int i;

for (i=0;i<6;i++){
    printf("&a[%d]=%p\n",i,&a[i]);


}
return 0;

}

//la diferencia de direcciones es a(i+1)-a(i) 