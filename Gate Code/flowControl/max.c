#include<stdio.h>

int main(){
    int n1,n2,n3;

    printf("Please enter n1, n2, n3");
    scanf("%d %d %d", &n1, &n2, &n3);

    int max=n1;
    if(n2>max){
        max = n2;
        if(n3>max){
            max=n3;
        }
    }else if(n3>max){
        max=n3;
    }

    printf("The greatest number is :%d", max);
    return 0;
}