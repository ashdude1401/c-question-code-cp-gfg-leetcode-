#include<stdio.h>
int main()
{
    int n,temp=0,sum=0;
    printf("Enter the number of terms \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        temp=temp*10+1;
        sum=sum+temp;
    }
    printf("The sum of the series is %d\n",sum);
    return 0;
}