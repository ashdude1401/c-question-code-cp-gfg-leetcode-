#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x1,x2;
    printf("Enter the value of a,b,c in ax2+bx+c=0\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("your quaritic equation is %dx2+%dx+%d=0\n",a,b,c);
    D=b*b-4*a*c;
    printf("Discriment of the equation is %ld\n",D);
    if(D>=0)
    {
        printf("The given equation has real roots\n");
        if(D=0)
        {
            printf("Also two roots are equal\n");
        }
        printf("%f IS D\n",sqrt(D));
        x1=(-b+sqrt(D))/2*a;
        x2=(-b+sqrt(D))/2*a;
        printf("x1=%f and x2=%f are two roots\n",x1,x2);
    }
    else
    {
        printf("The roots of given equation are imaginary\n");
        printf("x1=-%d+i%f/%d and x2 =-%d-i%f/%d ",b,sqrt(-D),2*a,b,sqrt(-D),2*a);
    }
    return 0;
}