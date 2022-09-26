#include<iostream>
using namespace std;
int main()
{
    int a,b,i,k;
    cin>>a>>b;
    k=max(a,b);
    for(i=k;i<=(a*b);i++)
    {
        if((i%a)==0&&(i%b)==0)
        {cout<<i;
        break;}
        else 
        continue;
    }
    return 0;
}