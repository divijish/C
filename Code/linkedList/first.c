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

void insertingLL(STRUCTURE *cur,int count,char choice ){
    
    STRUCTURE *next;

    printf("Do you want to enter a number");
    scanf(" %c", &choice);

    if(choice!='n')
    {
            printf("Enter a number: ");
            scanf(" %d", &(cur->i));
            cur->next = 
            (STRUCTURE *)malloc(sizeof(STRUCTURE));
            insertingLL(next, count++, choice);

        return NULL;

    }else{
        cur->next = NULL;
    }

}

void main()
{
    STRUCTURE *p, *c, *head;
    int num;
    char ch='n';
    int count;
    
    do
    {
     if(++count==1)
     {
        head = (struct ll *) malloc(sizeof(struct ll));
        c = head;
        p = NULL;
     }else
     {
        c = (struct ll *)malloc(sizeof(struct ll));
        p->next = c;
     }
        printf("Enter a number: ");
        scanf(" %d", &num);

        c->i = num;
        p = c;
        printf("Do you wish to enter more?(y or n)");
        scanf(" %c", &ch);
    
    }while((ch!='n')||(c->next = NULL));

printf("The linked list consists of following\n");

traver(head);
   
}