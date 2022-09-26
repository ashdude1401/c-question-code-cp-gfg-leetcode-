#include<stdio.h>
int main()
{
    float a,b,ans;
    char op[20];
    scanf("%f%f",&a,&b);
    printf("add\n sub \n mul\n div\n ");
    scanf("%s",op);
    if(op=="add")
    ans=a+b;
    if(op=="sub")
    ans=a-b;
    if(op=="mul");
    ans=a*b;
    if(op=="div")
    ans=a/b;
    printf("%f",ans);
    return 0;

}