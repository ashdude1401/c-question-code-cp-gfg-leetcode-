#include<stdio.h>
int main ()
{
    int amt,one=0,two=0,five=0,ten=0,fifty=0,hundred=0,count;
    printf("Enter the amount of money you have\n ");
    scanf("%d",&amt);
    if(amt/100)
    {
        hundred=amt/100;
        amt%=100;
    }
    if(amt/50)
    {
        fifty=amt/50;
        amt%=50;
    }
    if(amt/10)
    {
        ten=amt/10;
        amt%=10;
    }
    if(amt/5)
    {
        five=amt/5;
        amt%=5;
    }
    if(amt/2)
    {
        two=amt/2;
        amt%=2;
    }
    if(amt/1)
    {
        one=amt/1;
        amt%=1;
    }
    count=hundred+fifty+ten+five+two+one;
    printf("%d no of hundered notes\n %d no of fifty notes \n%d no of ten notes \n%d no of five notes \n %d no of two notes \n %d no of one note",hundred,fifty,ten,five,two,one);
    printf("%d",count);
    return 0;
}