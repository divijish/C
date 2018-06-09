#include<stdio.h>

void main(){
    
    long num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    long factors;
    long min,max;
    
    int count = 0;
    
    if(num1>num2){
        min = num2;
        max = num1;
    }else{
        min = num1;
        max = num2;
    }
    
    if(num1<0){
        num1 = -num1;
    }
    if(num2<0){
        num2 = -num2;
    }
    long factor = min/2;
    
    if(num1==0||num2==0){
        printf("%d", 0);
        return;
    }
    
    for(long i = min/2; i>0; i--){
    if((num1%i==0&&num2%i==0)){
        count++;
      
    }
    }

    if(max%min==0){
        count++;
    }
    
    printf("%d", count);
}