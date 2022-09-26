#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node* create(int x)
{
    Node *p=new Node(x);
    return p;
}
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void del_last(Node **head)
{
    Node *temp=*head;
    while((temp->next->next)!=NULL)
    { 
        temp=temp->next;
    }
   Node *p=temp->next;
   temp->next=NULL;
   free(p);
   p=NULL;
}
void del_mid(Node **head)
{
    Node *p,*q,*r;
    p=q=*head;
    r=NULL;
    while(p->next!=NULL)
    {
         p=p->next;
         if(p->next!=NULL)
         {
            p=p->next;
         }
         r=q;
         q=q->next;
    }
    r->next=q->next;
    free(q);
    q=NULL;
}

int main()
{
    int n;
    cin>>n;
    Node *head=NULL,*p=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(head==NULL)
        {
            head=create(x);
            p=head;
        }
        else
        {
            p->next=create(x);
            p=p->next;
        }
    }
    display(head);
     del_mid(&head);
    display(head);
    return 0;
}