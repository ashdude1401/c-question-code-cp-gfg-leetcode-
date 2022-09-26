#include<stdio.h>
int main ()
{
    int n;
    float sum=0;
    printf("Enter the value of terms and value of x\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("The sum is %f\n",sum);
    return 0;
}