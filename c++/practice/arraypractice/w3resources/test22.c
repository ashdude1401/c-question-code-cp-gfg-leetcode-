#include<stdio.h>
int Sum(int temp)
{    
    int rem,sum=0;
     while(temp)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp/=10;
    }
    return sum;

}
int main()
{
    int intl,fin,sum=0,temp;
    printf("Enter a the starting and ending point of the of the number \n");
    scanf("%d%d",&intl,&fin);
    for(int i=intl;i<fin;i++)
    {
        sum=Sum(i);
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
    
}