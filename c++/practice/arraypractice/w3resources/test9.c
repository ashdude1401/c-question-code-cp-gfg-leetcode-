#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        sum=sum+(2*i-1);
    }
    printf(" sum is %d\n",sum);
    avg=sum/(n*1.0);
    printf("average is %f\n",avg);
    return 0;
    
}