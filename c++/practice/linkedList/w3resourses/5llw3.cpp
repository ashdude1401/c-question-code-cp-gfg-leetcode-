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
    Node *temp;
    temp=new Node(x);
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
void ins_at_end(Node *head)
{
    int x;
    cout<<"Enter the value to be inserted\n";
    cin>>x;
    Node *p=head;
    while(p!=NULL)
    {
        if(p->next==NULL)
            break;
        p=p->next;
    }
    p->next=create(x);
}
int main()
{
    int n;
    cin>>n;
    Node *head=NULL,*temp=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(head==NULL)
        {
            temp=new Node(x);
            head=temp;
        }
        else
        {
            temp->next=create(x);
            temp=temp->next;
        }
    }
    cout<<endl;
    display(head);
    ins_at_end(head);
    display(head);
    return 0;
}
