#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=data;
        next=NULL;
    }
};
Node* create(int x)
{
    Node *temp=new Node(x);
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void revprint(Node *head)
{
     Node *temp=head;
    if(temp==NULL)
    return;
    revprint(temp->next);
    cout<<temp->data<<" ";
    return;
}
int main()
{
    int n,x;
    Node *head=NULL,*last;
    last=head;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Node *temp;
        cin>>x;
        if(head==NULL)
         {
            head=create(x);
            last=head;
        }
        else
        {
            temp=last;
            temp->next=create(x);
            last=last->next;
        }
    }
    cout<<"he";
    revprint(head);
    cout<<"llo";
    return 0;

}