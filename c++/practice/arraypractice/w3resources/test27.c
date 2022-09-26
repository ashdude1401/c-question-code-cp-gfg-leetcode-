#include<stdio.h>
int main()
{
    int row;
    char c='A';
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=row;j>i;j--)
        {
            printf(" ");
        }
        char ch=c;
        for(int k=1;k<=(2*i-1);k++)
        {
            if(k<i)
            {
                printf("%c",ch);
                ch++;
            }
            else if(k>i)
            {
                ch--;
                printf("%c",ch);
            }
            else{
                printf("%c",ch);
            }
        }
        printf("\n");
        
    }
    return 0;
}