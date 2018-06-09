#include<stdio.h>

void main(){

    int n = 0;

    printf("Please enter number of rows:");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-(i+1); j++){
            printf(" ");
        }

        for(int k = 0; k<2*i+1;k++){
            printf("*");
        }

        printf("\n");
    }

}