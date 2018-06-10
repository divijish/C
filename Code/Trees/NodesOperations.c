#include<stdio.h>
#include<stdlib.h>

struct node{

    char data;

    struct node*L;
    struct node*R;
};

int countLeaves(struct node * h){

    if(!h){
        return 0;
    }

    if((!h->L && !h->R)){
        return(1);
    }

    return countLeaves(h->L)+countLeaves(h->R);


}

int countNonLeaves(struct node*h){

    if(!h){
        return 0;
    }

    if(!h->L && !h->R){
        return 0;
    }

    if(h->L||h->R){
        return (countNonLeaves(h->L)+countNonLeaves(h->R)+1);
    }

  //  return (countNonLeaves(h->L)+countNonLeaves(h->R)+1);
}

int countAllNodes(struct node *h){
if(h){
    return countAllNodes(h->L)+countAllNodes(h->R)+1;
}
return 0;
}

int countFullNodes(struct node* h){

    if(!h){
        return 0;
    }

    if(!h->L&&!h->R){
        return 0;
    }

//    printf("left %d",countFullNodes(h->L));
 //   printf("right %d",countFullNodes(h->R));

 //   return countFullNodes(h->L)+ countFullNodes(h->R);
    return countFullNodes(h->L)+ countFullNodes(h->R)+((h->L!=NULL&&h->R!=NULL)?1:0);
}

void main(){

    struct node * head;

  //  head = calloc(1,sizeof(struct node));

    struct node * a = (struct node *) calloc(1,sizeof(struct node));
    struct node * b = (struct node *) calloc(1,sizeof(struct node));
    struct node * c = (struct node *) calloc(1,sizeof(struct node));
    struct node * d = (struct node *) calloc(1,sizeof(struct node));
    struct node * e = (struct node *) calloc(1,sizeof(struct node));
    struct node * f = (struct node *) calloc(1,sizeof(struct node));
    struct node * g = (struct node *) calloc(1,sizeof(struct node));
    
    head = a;
    a->data = 'A';
    b->data = 'B';
    c->data = 'C';
    d->data = 'D';
    e->data = 'E';
    f->data = 'F';
    g->data = 'G';

    a->L = b;a->R = c;
    b->L = d;b->R = e;
    c->L = f;c->R = g;
    // d->L = NULL;

    // printf("Starting..");
    // for(struct node * i = a; i!=NULL; ){
    //     printf(" %c ->", i->data);
    //     i =i->L;
    // }

    printf("The number of leaves is %d", countLeaves(head));    
    printf("\nThe number of Non Leaves is %d", countNonLeaves(head));
    printf("\nThe number of nodes is %d", countAllNodes(head));
    printf("\nThe number of Full Nodes is %d", countFullNodes(head));
    getchar();
   

     

}