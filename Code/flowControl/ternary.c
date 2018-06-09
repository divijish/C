#include<stdio.h>

void main(){

    int a = 3;
    int b = 0;

    printf("%d", (a=b)?7:8);

    printf("\n %d", a);
}