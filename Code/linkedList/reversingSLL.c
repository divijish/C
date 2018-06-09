#include<stdio.h>
#include<stdlib.h>

typedef struct sll structure;

struct sll{
    int i;
    struct sll * next;
}* head;

structure * traver(structure *t){
    if(t==NULL){
        printf("t is null");
    }
    while(t){
    printf("%d->",t->i);
    t=t->next;
    }
    return t;
}
structure * ghead;
void rever(structure *prev, structure *cur){

    if(cur){
        rever(cur, cur->next);
        cur->next=prev;
    }else{
        ghead = prev;
        
    }

}

void main(){

    head = malloc(sizeof(struct sll));
    head->i = 1;
    head->next = malloc(sizeof(struct sll));
    head->next->i = 2;
    head->next->next = malloc(sizeof(struct sll));
    head->next->next->i = 3;
    head->next->next->next = malloc(sizeof(struct sll));
    head->next->next->next->i = 4;
    head->next->next->next->next = NULL;
    struct sll *t;
    t = head;

t = traver(t);
rever(NULL,head);
printf("\n");
traver(ghead);

printf("\n printed");

}