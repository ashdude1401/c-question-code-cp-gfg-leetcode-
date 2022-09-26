#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            printf("not a prime number");
        return 0;
        }
    }
    printf("prime number");
    return 0;
}