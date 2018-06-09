#include<stdio.h>

void main(){
    int x = 5;
    int *y = &x;
    int z = 6487628;
    int *w = (int*)z;
    printf("%d", *w);
    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%u\n", y);
    printf("%d\n", *y);
    printf("%u\n", &y);
}