#include<stdio.h>
int main()
{
    int n,x;
    float sum=0.0,temp=1.0;
    printf("Enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        sum=sum+temp;
        temp=(temp*x)/i;
    }
    printf("The sum is %f",sum);
}