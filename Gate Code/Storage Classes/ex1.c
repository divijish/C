#include<stdio.h>

void main(){

    static int i = 5;
   // printf("i is being assigned %d \n", i);
   //--i;
   i = 6;
    if(--i){
        main();
        printf("%d ", i);
    }
}