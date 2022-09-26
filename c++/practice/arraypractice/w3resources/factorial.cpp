#include<iostream>
using namespace std;
int main()
{
    int n,i,k=1;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        k=k*i;
    }
    cout<<k;
    return 0;
}