#include<stdio.h>

void main(){

    int lineCount;
    char c;

    printf("Enter the string");

    while((c=getchar())!=EOF){
        if(c=='\n'){
            lineCount++;
        }
    }

    printf("Total lines are %d", lineCount);
}