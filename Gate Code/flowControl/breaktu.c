#include<stdio.h>

void main(){

    printf("Hello World!");
int n = 0;
int sum = 0;
    for (int i = 0; i<15; i++){

        printf("Please enter a positive number:");
        scanf("%d", &n);

        if(n<0)
        break;
        sum+=n;

    }

    printf("The Sum is : %d", sum);
}