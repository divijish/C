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
int dec(structure *p){
    return (p==NULL||p->next==NULL||(p->i<=p->next->i&&dec(p->next)));
}

void main(){

    head = malloc(sizeof(struct sll));
    head->i = 9;
    head->next = malloc(sizeof(struct sll));
    head->next->i = 2;
    head->next->next = malloc(sizeof(struct sll));
    head->next->next->i = 3;
    head->next->next->next = malloc(sizeof(struct sll));
    head->next->next->next->i = 6;
    head->next->next->next->next = NULL;
    struct sll *t;
    t = head;

t = traver(t);
if(dec(head)){
    printf("The list is non decreasing.");
}else{
    printf("The list is decreasing.");
}
printf("\n printed");

}