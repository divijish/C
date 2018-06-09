#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[10];
}stud;

void main(){
    FILE *p = fopen("write.txt", "r");

    while(!feof(p)){
        printf("\n");
    fscanf(p, "%d %s", &stud.roll, stud.name);
    }
    printf("%d ", stud.roll);
    printf("\n");
    printf("%s", stud.name);
}