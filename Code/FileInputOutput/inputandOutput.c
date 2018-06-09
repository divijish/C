#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[10];
};

void main(){

    FILE *p=fopen("write.txt", "a");
    struct student stud,*a;

        a = (struct student *)malloc(sizeof(stud));
    int count=0;
    int capacity = sizeof(stud);
  int xcount=0; 
    char y;
    do{
        capacity+=sizeof(stud);
    printf("Enter the Roll No. and Name of student %d", count);
    scanf("%d %s", &a[count].roll, &a[count].name);

    count++;
    }while((a = (struct student *)realloc(a,capacity) && xcount++<2); 

int ccount=count;
count=0;
    while(xcount--){

        fprintf(p,"%d %s", a[count].roll, a[count++].name);

    }
FILE *q=fopen("write.txt", "r");
 

    while(!feof(q)){
        printf("Scanning\n");
        fscanf(q,"%d %s", &stud.roll, stud.name);

        printf("%d \t", stud.roll);
        printf("%s", stud.name);
    }


}