#include <stdio.h>

void main()
{
    printf("hello world\n");

    char c = 3;
    int i = 10;
    unsigned int ij = 7;
    float k = 6,j=9;
    float b =(i/ij+k);
    double d = 1;
    long int li;
    short sh;
    c = i;//conversion// informations is being lost as character stores less bits than int.
    ij = -1;
    char ch[] = "Divij";

    printf("size of int %d\n", sizeof(i));
    printf("size of float %d\nValue of b is %f\n", sizeof(b),b);
    printf("size of long %d\n", sizeof(long));
    printf("size of double %d\n", sizeof(d));
    printf("The size of long int is %d\n", sizeof(li));
    printf("Hello Again\n");
    printf("size of short is %d\n", sizeof(sh));
    printf("The value of c is %d\n", c);
    printf("double + int = %d\n", sizeof(d+i));
    printf("size of String Divij = %d", sizeof(ch));
    
    
}

enum boolean{YES=1,NO};