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

void deleteNode(int x, struct sll *t){

while(t->next->i!=x){
    t=t->next;
}

t->next=t->next->next;
}

void main(){

    head =(struct sll*) malloc(sizeof(struct sll));
    head->i = 1;
    head->next = (struct sll*)malloc(sizeof(struct sll));
    head->next->i = 2;
    head->next->next = (struct sll*)malloc(sizeof(struct sll));
    head->next->next->i = 3;
    head->next->next->next = (struct sll*)malloc(sizeof(struct sll));
    head->next->next->next->i = 4;
    head->next->next->next->next = NULL;
    struct sll *t;
    t = head;

t = traver(t);
deleteNode(1,head);

printf("\nPrinting\n");
    traver(head);

getchar();

}