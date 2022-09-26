#include<stdio.h>
int digitSum(int num)
{
    int rem,sum=0;
    while(num)
    {
        rem=num%10;
        sum=sum+rem;
    }
    return sum;
}
int  rev(int num)
{
    int res=0,rem;
    while(num)
    {
        rem=num%10;
        res=res*10+rem;
        num/=10;
    }
    return res;
}
int main()
{
   int num,revNum,temp;
   printf("Enter the number\n");
   scanf("%d",&num);
    printf("Enter  the opreation you want perform on the number\n");
    printf("1 for reversing the given number \n ");
    printf("2 for checking it's divibility with 9\n");
   revNum=rev(num); 
   printf("Number after reversing is %d\n",revNum);
   return 0;
}