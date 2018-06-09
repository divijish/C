#include<stdio.h>

void main(){

    int n = 4334, count=0, rem=0,reversedNumber = 0;

    int originalNumber=n;

    for(int i = n; i>0; i/=10){
        count ++;
    }

    for(int i = count; i>0; i--){
        
        rem = originalNumber%10;
        originalNumber/=10;

        reversedNumber=reversedNumber*10+rem;
        
   }

    if(reversedNumber==n){
        printf("The number is palindrome:%d", reversedNumber);
    }else{
        printf("The number is not palindrome:%d", reversedNumber);
    }
}