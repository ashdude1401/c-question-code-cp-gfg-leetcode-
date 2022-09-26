#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,i,j;
    cin>>a>>b;
    if(a>b)
    {
        c=a;
        d=b;
    }
    else
    {
        c=b;
        d=a;
    }
    for(i=1;i<=d;i++)
    {
        if((d%i)==0&&(c%i)==0)
        j=i;//to assing the last value to j
        else
        continue;
    }
    cout<<j;
    return 0;
}