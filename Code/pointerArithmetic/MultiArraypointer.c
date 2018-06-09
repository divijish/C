#include<stdio.h>

void array1(int *);
void array2(int [3][5]);
void array3(int a[]){
    for(int i = 0; i<5; i++){
        printf("%d", a[i]);
    }
}
void array4(int (*)[5]);
void main(){
    int a[5] = {1,2,3,4,5};
    int b[3][5] = {1,2,3,4,5,11,12,13,14,15,21,22,23,24,25};
    array1(a);
    printf("\n");
    array1(b[0]);
    printf("\n");
    array2(b);
    printf("\n");
    array3(a);
    printf("\n");
    array4(b);
}

void array1(int *p){

    for(int i = 0; i<5; i++){
        printf("%d", p[i]);
    }

    
}

void array2(int p[3][5]){

    for(int i = 0; i<3; i++){
        for(int j = 0;j<5; j++){
            printf("%d ", p[i][j]);
        }
    }

}

void array4(int (*p)[5]){

    for(int i =0; i<3; i++){
        for (int j = 0; j<5; j++){
            printf("%d ", *(*(p+i)+j));
        }
    }
}
