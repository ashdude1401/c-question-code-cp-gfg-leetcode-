#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        int value=1;
        for(int k=1;k<=2*i-1;k++)
        {
          if(k<i)
          {
            printf("%d ",value);
            value++;
          }  
         else if(k>=i)
          {
            printf("%d ",value);
            value--;
          }
        }
        printf("\n");
    }
    return 0;

}