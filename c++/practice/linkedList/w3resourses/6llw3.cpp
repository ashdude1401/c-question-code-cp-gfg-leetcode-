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
    cout<<endl;
}
void ins_in_mid(Node *head,int y)
{
    Node *p,*q,*mid;
    p=q=head;
    while(p!=NULL&&q!=NULL)
    {
        p=p->next;
        if(p->next!=NULL)
        {
            p=p->next;
        }
        q=q->next;
        cout<<"hello"<<endl;
    }
    cout<<q<<endl;
    Node *n=create(y);
    n->next=q->next;
    q->next=n;
    cout<<"done"<<endl;
}
int main()
{
    int n,x,y;
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
    cout<<"Enter the value to be inseted in the mid \n";
    cin>>y;
     Node *p,*q;
    p=q=head;
    while(p!=NULL&&q!=NULL)
    {
        p=p->next;
        if(p->next!=NULL)
        {
            p=p->next;
        }
        q=q->next;
    }
   Node *mid=create(y);
   mid->next=q->next;
   q=mid;
   display(head);
    return 0;
}