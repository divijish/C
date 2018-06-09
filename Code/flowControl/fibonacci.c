#include<stdio.h>

void main(){

    int n=0, firstNum=0, secondNum=0;

    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("Enter the first and second numbers");
    scanf("%d %d", &firstNum, &secondNum);

    for (int i=0; i<n; i++){

        if(i==0){
            printf("%d ", firstNum);
            continue;
        }else if(i==1){
            printf("%d ", secondNum);
            continue;
        }

        int temp=0;

        temp=secondNum;
        secondNum=firstNum+secondNum;
        firstNum=temp;

        printf("%d ", secondNum);

        
    }
}