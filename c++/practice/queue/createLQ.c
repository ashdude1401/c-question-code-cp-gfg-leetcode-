#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Tnode *data;
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
void enqueue(struct Tnode *x)
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
struct Tnode* dequeue()
{
    struct Tnode *x=NULL;
    if(q.fnt==NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
       struct Node *p=q.fnt;
       if(q.fnt->next==NULL)
       {
        q.rer=q.rer->next;
       }
       q.fnt=q.fnt->next;
       x=p->data;
       free(p);
    }
    return x;
}
int isEmpty()
{
    if(q.fnt==q.rer&&q.fnt==NULL)
    {
        return 1;
    }
    else
    return 0;
}
struct Tnode
{
    struct Tnode *lchild,*rchild;
    int data;
};
struct Tnode *root;
void createTree()
{
    struct Tnode *p=NULL,*t=NULL;
    int x;
    printf("Enter data of root\n");
    scanf("%d",&x);
    root=(struct Tnode*) malloc(sizeof(struct Tnode));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(root);
    do
    {
        p=dequeue();
        printf("Enter left child (%d) \n",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Tnode*) malloc(sizeof(struct Tnode));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(t);

        }
        printf("Enter right child of (%d)\n",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Tnode*) malloc(sizeof(struct Tnode));
            t->data=x;
            t->rchild=t->lchild=NULL;
            p->rchild=t;
            enqueue(t);
        }
    }while(!isEmpty());
}
void pre( struct Tnode *t)
{
       if(t!=NULL)
       {
            printf("%d ",t->data);
            pre(t->lchild);
            pre(t->rchild);
        }
} 
int main()
{
    createTree();
    pre(root);
    return 0;
}