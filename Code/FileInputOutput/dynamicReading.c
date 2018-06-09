#include<stdio.h>
#include<stdlib.h>

#define DEFINE_SIZE 1

void main(){

    char *ptr = (char*)malloc(DEFINE_SIZE*sizeof(char));
    int capacity = DEFINE_SIZE;
    int originalCapacity = capacity;
    char inputChar;
    int count = 0;
    char *iptr = ptr;
    printf("Enter the input Stream");
    while((inputChar=getchar())!=EOF){
        
        if(count==capacity){
            capacity+=originalCapacity;
            iptr= (char *) realloc(iptr,capacity*sizeof(char));
        }

        *ptr++=inputChar;
        count++;
    }
    if(count==capacity){
        iptr = (char *) realloc(iptr, capacity+sizeof(char));
    }
    *ptr='\0';
    printf("count is %d\n", count);
    printf("%s", iptr);

}