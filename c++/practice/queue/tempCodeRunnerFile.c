#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node* create()
{
    struct Node *t=(struct Node*) malloc(sizeof(struct Node));
    t->next=NULL;
    return t;
}
struct Queue
{
    struct Node *fnt,*rer;
}q;
void enqueue(int x)
{
    struct Node *t=create();
    if(t==NULL)
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        t->data=x;
        if(q.fnt==NULL)
        {
            q.fnt=q.rer=t;
        }
        else{
            q.rer->next=t;
            q.rer=t;
        }
        
    }
}
int dequeue()
{
    int x=-1;
    if(q.fnt==NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
       struct Node  *p=q.fnt;
       q.fnt=q.fnt->next;
       x=p->data;
       free(p);
    }
    return x;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        enqueue(t);
    }