#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[10];
};

void main(){
    FILE *p;

    p=fopen("write.txt", "a");

    struct student stud;
    printf("Enter the roll and name of student");
    scanf("%d %s", &stud.roll, stud.name);

    fprintf(p, "%d",stud.roll);
    fprintf(p, "%s",stud.name);

}