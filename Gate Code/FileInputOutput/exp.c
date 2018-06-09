#include<stdio.h>

void main(){

    FILE *fp;

    fp = fopen("file.txt", "r");

    FILE *fop;

    fop = fopen("D:\\File\\fileout.txt", "w");

    if(fp==NULL || fop == NULL){
        puts("Error opening file");
        puts("Please try again later");
    }
    char c;
    while((c=getc(fp))!=EOF){
        putc(c, fop);
        
    }

    fseek(fop, 0, SEEK_SET);

    printf(fop); 
    fclose(fp);
    fclose(fop);
}