#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node *next=NULL;
}Node;
Node * create()
{
    Node *n=(Node*) malloc(sizeof(Node));
    return n;
}
void display(Node *first)
{
    Node *p=first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    Node *t,*last,*first;
    first=last=NULL;
    for(int i=0;i<n;i++)
    {
       Node *temp=create();
       scanf("%d",&temp->data);
       temp->next=NULL;
       if(first==NULL)
       {
           first=last=temp; 
       }
       else
       {
            last->next=temp;
            last=temp;
       }
     }
     printf("Your Enetered linked list is :\n");
     display(first);
     return 0;
}