#include<stdio.h>

void main(){

    FILE *fp;

    fp = fopen("file.txt", "r");

    if(fp==0){
        printf("Error opening file");
    }

    fseek(fp, 0, SEEK_END);
    int len = ftell(fp);

    printf("The file size is %d", len);

    fclose(fp);

}