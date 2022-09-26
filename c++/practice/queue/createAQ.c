#include<stdio.h>
#include<stdlib.h>
//stack implementation using Queue 
struct Queue
{
    int size;
    int fnt;
    int rer;
    int *Q;
}q;
void create(int x)
{
   q.size=x;
   q.fnt=q.rer=-1; 
   q.Q=(int *) malloc(q.size*sizeof(int));
}
void push(int x)
{
    if(((q.rer + 1)%q.size)==q.fnt)
    {
        printf("Queue is Full\n");
    }
    else
    {
        q.rer=((q.rer + 1)%q.size);
        q.Q[q.rer]=x;
    }
}
int pop()
{
    int x=-1;
    if(q.rer=q.fnt)
    {
        printf("Queue is empty\n");
    }
    else
    {
        x=q.Q[q.fnt];
        q.fnt++;
    }
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    create(n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        push(x);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",q.Q[i]);
    }
    printf("\n");
    return 0;
}