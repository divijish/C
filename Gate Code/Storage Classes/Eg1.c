#include<stdio.h>

void main(){

   register int i = 10;// can't provide address of register. Only memory elements have addresses.
    int *a = &i;
    printf("%d", *a);
}