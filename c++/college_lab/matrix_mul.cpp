#include<stdio.h>
#include<stdlib.h>
void input(int **arr,int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
        
}
void display(int **arr,int m,int n)
{
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {    
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }    
}
void mul(int **a,int **b,int **c,int m,int n,int p)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
        {
            int sum=0;
            for(int k=0;k<n;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
}
void del(int **a,int m,int n)
{
    for(int i=0;i<m;i++)
        free(a[i]);
    free(a);
}
int main()
{
    int m,n,q,p;
    do
    {
        printf("Enter the no. of rows and colomns in first\n");
        scanf("%d%d",&m,&n);
        printf("Enter the no. of rows and colomns in second\n");
        scanf("%d%d",&q,&p);
        if(q!=n) printf("Multiplication not possible \n");
    }while(q!=n);
    int **a=(int **) malloc(m*sizeof(int *));
    int **b=(int **) malloc(n*sizeof(int *));
    int **c=(int **) malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
        a[i]=(int *) malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
        b[i]=(int *) malloc(p*sizeof(int *));
    for(int i=0;i<m;i++)
        c[i]=(int *) malloc(p*sizeof(int *));
    printf("Enter the elements of first matrix\n");
    input(a,m,n);
    display(a,m,n);
    printf("Enter the elements of second matrix\n");
    input(b,n,p);
    display(b,n,p);
    mul(a,b,c,m,n,p);
    display(c,m,p);
    del(a,m,n);
    del(b,n,p);
    del(c,m,p);
    return 0;
}