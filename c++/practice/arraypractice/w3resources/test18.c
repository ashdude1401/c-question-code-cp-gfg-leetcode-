#include<stdio.h>
int main()
{
    int n,x;
    float temp,sum=0;
    printf("Enter the number of terms and value of x\n");
    scanf("%d%d",&n,&x);
    temp=x;
    for(int i=1;i<=n;i++)
    {
        sum=sum+temp;
        temp=temp*x*x*(-1);
    }
    printf("The sum of series is %f",sum);
    return 0;
}