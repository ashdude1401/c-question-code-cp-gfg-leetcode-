#include<stdio.h>
#include<math.h>
int deciToBin(int num)
{
    int res=0,rem,w=0;
    while(num)
  {  
    rem=num%2;
    res=res+rem*pow(10,w);
    num=num/2;
    w++;
  }
  return res;
}
int binToDec(int num)
{
    int res=0,rem,w=0;
    while(num)
    {
    rem=num%10;
    res=res+rem*pow(2,w);
    num=num/10;
    w++;
    }
    return res;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",deciToBin(num));
    scanf("%d",&num);
    printf("%d\n",binToDec(num));
    return 0;
}