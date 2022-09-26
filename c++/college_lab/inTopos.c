#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stack
{
    int size;
    int top;
    char *S;
}st;
st s;
void create(int x)
{
    s.top=-1;
    s.S=(st*) malloc(x*sizeof(st));

}
void push (char c)
{
    if(s.top==strlen(s.S))
        printf("Stack Overflow\n");
    else{
        s.top++;
        s.S[s.top]=c;
        }
}
char pop()
{
    char c='\0';
    if(s.top==-1)
        printf("Stack underflow");
    else{
        c=s.S[s.top];
        s.top--;
    }
    return c;
}
int isOprnd(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return 1;
    else 
    return 0;
} 
int prece(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else
        return 2; 
}
char* convert(char* inf)
{
    create(strlen(inf));
    int i,j;
    i=j=0;
    while(inf[i]!='\0')
    {
        if(isOprnd)

    }
}