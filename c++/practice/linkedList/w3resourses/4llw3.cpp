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
void insert_in_big(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    head=temp;
}
void input(Node *head,int n)
{
    Node *temp=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(head==NULL)
        {
            head=create(x);
            cout<<"head data "<<head->data<<head<<" "<<endl;

            temp=head;
        }
        else
        {
            temp->next=create(x);
            cout<<" head next next"<<head->next->data;
            temp=temp->next;
        }
    }
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
int main()
{
    int n,val;
    Node *head=NULL;
    cin>>n;
    Node *temp=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
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
    cout<<" Insert value"<<endl;
    cin>>val;
    Node *p=new Node(val);
    p->next=head;
    head=p;
    display(head);
    return 0;

}