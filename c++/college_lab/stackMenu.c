#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *st;
}Stack;
Stack s;
void create(int x)
{
    s.size=x;
    s.top=-1;
    s.st=(int *) malloc(s.size*sizeof(struct stack));
}
void push(int x)
{
    if(s.top!=s.size-1)
    {
        printf("Stack overflow \n");
    }
    else
    {
        s.top++;
        s.st[s.top]=x;
    }
}
int pop()
{
    int x=-1;
    if(s.top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        x=s.st[s.top];
        s.top--;
    }
    return x;
}
void print()
{
    if(s.top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(s.top!=-1)
        {
            printf("%d ");
            s.top--;
        }
        printf("\n");
    }
}
int main()
{
    int size,ctr=1;
    scanf("%d",&size);
    create(size);
    do
    {
        if(ctr<4&&ctr>0)
        {
            printf("Enter \n 1:push\n 2:pop\n 3:print\n 4:exit\n");
            scanf("%d",&ctr);
            switch(ctr)
            {
                int x;
                case 1:
                    scanf("%d",&x);
                    push(x);
                    print();
                     break;
                case 2:
                    scanf("%d",&ctr);
                    printf("%d \n",pop(ctr));
                    print();
                    break;
                case 3:
                    print();
                    break;
                case 4:
                    break;
            }
        }
        else
        {
            printf("Invalid input\n");
        }
    }while(ctr!=4);
    return 0;
}