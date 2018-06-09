#include<stdio.h>

int xtoy(int*towerX ,int*towerY);
int ytoz(int*towerY, int*towerZ);
int ztox(int*towerZ, int*towerX);
void main(){
    int x[3]; 
    int y[3];
    int z[3];

    for(int i=1; i<=3; i++){
        x[3-i+1]=i;
    }
}

int * foo(int *towerX, int*towerY){
    int temp=0;
    return 
}