#include<stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    float area,sp;
    scanf("%d%d%d",&a,&b,&c);
    sp=a+b+c/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
     printf("Area is %f ",area);
    return 0;


}