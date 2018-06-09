#include<stdio.h>
#include<math.h>

int func(int);

void main(){

int totalNumbers=0;
        for(int i = 0;i<900000000;i++){
        if(func(i)==i){
            printf("\nThe number %d is amstrong number and sum is %d", i, func(i));
            totalNumbers++;
        }
    }

    printf("\nTotal Numbers:%d", totalNumbers);
}

int func(int r){

    int n=0; int sum = 0;int numOfDigits = 0;
    int td =r;
    while(td!=0){
        numOfDigits++;
        td=td/10;
    }

    td = r;
    int digit=0;
    int x = 0;
    x=numOfDigits;
    while(numOfDigits!=0){
        digit=td%10;
        sum += pow(digit,x);
        td=td/10;
        numOfDigits--;
   }
   return sum;
}