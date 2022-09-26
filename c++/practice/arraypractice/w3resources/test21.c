#include<stdio.h>
int sumOfDivisors(int num)
{
    int sum=0;
     for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int intNum,finNum,sum;
    printf("Enter the  starting of ending number of range \n");
    scanf("%d%d",&intNum,&finNum);
    for(int i=intNum;i<=finNum;i++)
    {
        sum=sumOfDivisors(i);
    if(sum==i)
    {
        printf("%d ",i);
    }
    }
    printf("\n");
    printf("Above are all perfect number lying between the given range \n");
    return 0;
}