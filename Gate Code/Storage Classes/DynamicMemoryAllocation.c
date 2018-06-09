#include<stdio.h>
#include<stdlib.h>

void main(){

    char c;

    printf("%d", sizeof(char));

    char *cp = (char *)malloc(5);
    char *x = cp;
    char strin[100];
    char *y = strin;
    int i = 0;
    while((strin[i++]=getchar())!=EOF && i<5){
    }

    printf("%s", y);

}