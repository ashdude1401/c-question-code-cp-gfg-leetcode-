#include<stdio.h>
int main()
{
    int n,x;
    float sum=0,temp=1;
    printf("Enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(int i=1;i<n-1;i++)
    {
        sum+=temp;
        temp=temp*((-1*x*x)/((2*i)*(2*i-1)*1.0));
    }
    printf("The sum is series upto %d is %f\n",n,sum);
    return 0;

}