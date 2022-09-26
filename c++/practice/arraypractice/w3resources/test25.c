#include<stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int j=row;j>i+1;j--)
        {
            printf(" ");
        }
        int temp=1,num,deno;
        num=i;
        deno=1;
        for(int j=1;j<=i+1;j++)
        {
            printf("%d ",temp);
            temp=(temp*num)/deno;
            num--;
            deno++;
        }
        printf("\n");
    }
}