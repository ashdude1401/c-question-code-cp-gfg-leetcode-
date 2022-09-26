#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,temp;
    printf("Enter the number of terms of series\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        temp=pow(10,i)-1;
        sum=sum+temp;
    }
    printf("The sum of the given is %d",sum);
    return 0;
}