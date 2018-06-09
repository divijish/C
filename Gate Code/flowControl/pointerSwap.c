#include<stdio.h>

void swap (int*, int*);
void main(){

    int a =3, b=4;

    printf("\nThe value of a is %d and value of b is %d", a, b);

    swap(&a, &b);

    printf("\nThe value after swapping of a is %d and b is %d", a, b);

}

void swap(int *a, int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}