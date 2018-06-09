#include<stdio.h>
#include<stdlib.h>

void main(){

    int i = 0;
    printf("Enter the number of character.");
    scanf("%d", &i);
 
    char *x = (char*) malloc(i*sizeof(char));

    char *y = x;
    int n = 0;

    while(( *x++ = getchar())!= EOF && n++<i){}

    printf("%s", y);
    printf("\n %d", n);
}