#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int q=1;q<=2*n+1;q++)
    {
        printf("*");
    }
    printf("\n");
    for(int l=n;l>=1;l--)
    {
        for(int m=n+1-l;m>=1;m--)
        {
            printf(" ");
        }
        for(int n=2*l-1;n>=1;n--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
