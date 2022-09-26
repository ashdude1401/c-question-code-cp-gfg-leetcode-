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
    Node* temp=new Node(x);
    return temp;
}
void display(Node* head)
{
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int NodeCount(Node *head)
{
    int count=0;
    Node *p=head;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count ;
}
int main()
{
    int n,x;
    Node *head=NULL;
    Node *last=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        Node *p;
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
    cout<<"node count is " <<NodeCount(head);
    return 0;

}