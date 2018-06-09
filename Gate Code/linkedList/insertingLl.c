#include<stdio.h>
#include<stdlib.h>

struct sll{
    int i;
    struct sll * next;
}* head;

struct sll * traver(struct sll *t){
while(t){
    printf("%d->",t->i);
    t=t->next;
}
return t;
}

void insertNode(struct sll *t,struct sll *n){

    while(t->next){
        t=t->next;
    }

    t->next = n;
    n->next = NULL;
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

    struct sll *node = (struct sll *) malloc(sizeof(struct sll));
    node->i = 50;
    insertNode(head,node);
printf("\nPrinting\n");
    traver(head);

getchar();

}