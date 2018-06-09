#include<stdio.h>

void main(){

    int number = 0, n;
    int numberOfDigits=0;
    int flag=0;
    printf("Please enter a number");
    scanf("%d", &number);
int originalNumber=number;
    while(originalNumber!=0){
        numberOfDigits++;
        originalNumber/=10;
    }

    int f = 1;
    int l = numberOfDigits;
    originalNumber = number;
    int nod = numberOfDigits;
    int foriginalNumber=number;
    int loriginalNumber=number;
    int count=1;
    while(nod!=1){
        count*=10;
        nod--;
    }
    nod=numberOfDigits;
    for(int i = 0; i<nod/2;i++){

            f = foriginalNumber/count;
            foriginalNumber=foriginalNumber-f*count;
            count/=10;
            l = loriginalNumber%10;
            loriginalNumber/=10;
            //f++;
            //l--;
            if(f!=l){
             flag=1;
             break;
            }
    }
        
        if(flag==1){
            printf("The number ain't palindrome.");
        }else{
            printf("The number is palindrome.");
        }

}