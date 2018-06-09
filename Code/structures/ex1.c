#include<stdio.h>

struct node{
    int i, *c;
}a[2], *p;

void main(){

    int b[] = {30,40};

    p=a;

    a[0].i = 10;
    a[1].i = 20;
    a[0].c = b;
    int x = *++p->c;
//int x = *p++->c;
    //int x = *p->c++;
    printf("%d", x);

    
}