#include<stdio.h>
#include<stdlib.h>

typedef struct node{
     int data;
     struct node * L;
     struct node * R;


} NODE;

void inorder(NODE* h){
    if(h){
    inorder(h->L);
    printf(" %d ->", h->data);
    inorder(h->R);
    }
}

void preorder (NODE *h){
    if(h){
        printf("%d->", h->data);
        preorder(h->L);
        preorder(h->R);
    }
}

NODE * findMin(NODE *h){

NODE * Y=h;
    if(h->L){
        Y = findMin(h->L);
    }

    return  Y;
}

void main(){
    NODE * head;
    NODE * a = (NODE *) calloc(1, sizeof(NODE));
    NODE * b = (NODE *) calloc(1, sizeof(NODE));
    NODE * c = (NODE *) calloc(1, sizeof(NODE));
    NODE * d = (NODE *) calloc(1, sizeof(NODE));
    NODE * e = (NODE *) calloc(1, sizeof(NODE));
    NODE * f = (NODE *) calloc(1, sizeof(NODE));
    NODE * g = (NODE *) calloc(1, sizeof(NODE));
    NODE * h = (NODE *) calloc(1, sizeof(NODE));
    NODE * i = (NODE *) calloc(1, sizeof(NODE));
    NODE * j = (NODE *) calloc(1, sizeof(NODE));
    NODE * k = (NODE *) calloc(1, sizeof(NODE));
head = a;
a->data = 20;
b->data = 15;
c->data = 25;
d->data = 10;

e->data = 17;

f->data = 40;
g->data = 2;
h->data = 12;
i->data = 16;
j->data = 18;
k->data = 60;

a->L = b;
a->R = c;
b->L = d;
b->R = e;
e->L = i;
e->R = j;
c->R = f;
f->R = k;
d->L = g;
d->R = h;
e->L = i;
e->R = j;
printf("Inorder: ");

inorder(head);

printf("\n");

printf("Preorder: ");

preorder(head);

printf("Minimum: ");

printf("%d", findMin(head)->data);



}