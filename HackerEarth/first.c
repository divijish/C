#include<stdio.h>

void main(){
    int N, sum = 0;
    printf("Enter the size of array:");
    scanf(" %d", &N);

    int numArray[N];

    for(int i = 0; i<N; i++){
        printf("\nEnter the %d number:", i);
        scanf("%d", &numArray[i]);
    }

    for(int i = 0; i<N; i++){
        sum += numArray[i];
    }

    printf("\n The sum is %d", sum);

}