#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    bool t;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    { 
        if(i%2==0)
        t=0;
        else
        t=1;
        for(int j=1;j<=i;j++)
        {
        printf("%d",t);
        t=!t;
        }
        printf("\n");
    }
    return 0;
}