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
    Node *temp=new Node(x);
    return temp;
}
void display(Node *head)
{
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int  del(Node *head)
{
    int x;
    Node *p=head;
     head=head->next;
    x=p->data;
    free(p);
    p=NULL;
    return x;
}
int main()
{
    int n,x;
    cin>>n;
    Node *head=NULL,*temp=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(head==NULL)
        {
            head=create(x);
            temp=head;
        }
        else
        {
            temp->next=create(x);
            temp=temp->next;
        }
    }
    display(head);
    cout<<endl;
     int y;
    Node *p=head;
     head=head->next;
    y=p->data;
    free(p);
    p=NULL;
    cout<<y<<endl;
    display(head);
    return 0;
}