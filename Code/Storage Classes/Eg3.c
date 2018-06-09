#include<stdio.h>

void main(){
    int i = 10;
    register int* a = &i;

    printf("%d", *a);

}