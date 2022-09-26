#include<iostream>
using namespace std;
int main()
{
    int n,i,k=1;
    cin>>n;
    for(i=1;n>10;i++)
    {
        n=n/10;
        k=k+1;
    }
    cout<<k;
    return 0;
}