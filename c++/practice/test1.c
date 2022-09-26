#include<stdio.h>
int main()
{
    float math,hindi,english,science,cs,percent,agregate;
    printf("Enter your marks in maths,hindi,english,science,and computer \n ");
    scanf("%f%f%f%f%f",&math,&hindi,&english,&science,&cs);
    agregate=math+hindi+english+science+cs;
    percent=(agregate*100)/500.00;
    printf("Your agregate marks is %f and your total %f",agregate,percent);
    return 0;

}