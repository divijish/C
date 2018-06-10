#include<stdio.h>
#include<stdlib.h>

typedef struct node{

    struct node * L;
    struct node * R;
    char data;
} Node;

int countFullNodes(Node*h){

    if(!h){             //If null
	return 0;
    }

    if(!h->L&&!h->R){   //If leaf
        return 0;
    }

    // if(h->L||h->R){

    //     if(h->L&&h->R)
    //     return countFullNodes(h->L)+countFullNodes(h->R)+1;
    //     else
    //     return countFullNodes(h->L)+countFullNodes(h->R);
    // }


	return (countFullNodes(h->L) + countFullNodes(h->R)+((h->L!=NULL && h->R!=NULL)?1:0));
    //This shows precedence is so important. Without brackets the ternary operator was not being used properly.


 //If having atleast one child.

}

void trace(Node *h){
    if(h)
    {
    printf(" %c", h->data);
    trace(h->L);
    trace(h->R);
    }
}

void main(){
    int x = 0;
    Node *head;
    Node * a = (Node *)calloc(1,sizeof(Node));
    Node * b = (Node *)calloc(1,sizeof(Node));
    Node * c = (Node *)calloc(1,sizeof(Node));
    Node * d = (Node *)calloc(1,sizeof(Node));
    Node * e = (Node *)calloc(1,sizeof(Node));
    Node * f = (Node *)calloc(1,sizeof(Node));
    Node * g = (Node *)calloc(1,sizeof(Node));
    Node * h = (Node *)calloc(1,sizeof(Node));
    Node * i = (Node *)calloc(1,sizeof(Node));
    
    head = a;
    a->data = 'a';
    b->data = 'b';
    c->data = 'c';
    d->data = 'd';
    e->data = 'e';
    f->data = 'f';
    g->data = 'g';
    h->data = 'h';
    i->data = 'i';

    a->L = b;a->R = c;
    b->L = d;b->R = e;
    c->L = f;
    c->R = g;
    d->L = h;d->R = i;

    int count = countFullNodes(head);
    printf("Full nodes are: %d \n",count);

    trace(head);
    printf("\n");

	
}
