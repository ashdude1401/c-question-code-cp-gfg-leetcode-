#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        for(int j=1;i<=n;j++)
        printf("%dx%d=%d\n ",j,i,i);
    }
    return 0;
}