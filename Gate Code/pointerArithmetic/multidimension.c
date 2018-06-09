#include<stdio.h>

void main(){

    char array[][13] = {"ravi", "ravindra", "ravindrababu"};

    printf("%s", array[2]);

    char *name[] = {"spider", "batman", "super"};

    printf("\n");

    *(*(name+2)+2) = 'x';

    printf("%s", *(name+2));
}