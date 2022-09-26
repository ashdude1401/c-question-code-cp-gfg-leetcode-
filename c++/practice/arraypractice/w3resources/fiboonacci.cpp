#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=1,c=0,i;
    cin>>n;
    cout<<"1 1";
    for(i=2;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;

    }
    return 0;
}