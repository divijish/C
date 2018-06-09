#include<stdio.h>
#include<stdlib.h>

typedef struct ll{
    int i;
    struct ll * next;
} STRUCTURE;

void traver(STRUCTURE *t){
    if(t)
    {
     printf(" %d ->", t->i);
     traver(t->next);
    }
}

void insertingLL(STRUCTURE *prev,STRUCTURE *cur, int count){
    
    char choice;
    printf("Do you want to enter a number");
    scanf(" %c", &choice);

    if(choice!='n')
    {
            printf("Enter a number: ");
            scanf(" %d", &(prev->i));
            cur= 
            (STRUCTURE *)malloc(sizeof(STRUCTURE));
            prev->next = cur;
            insertingLL(cur,cur->next, count++ );

        return NULL;

    }else{
        prev->next = NULL;
        free(cur);
    }

}

void main()
{
    STRUCTURE *p, *c;
    int num;
    char ch='n';
    int count;
    
    printf("The linked list consists of following\n");

    STRUCTURE *head = (STRUCTURE *) malloc(sizeof(STRUCTURE));

    insertingLL(head,NULL, count);

    traver(head);
   
}