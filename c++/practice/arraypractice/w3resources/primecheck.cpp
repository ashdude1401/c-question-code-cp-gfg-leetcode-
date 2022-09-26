#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n==0||n==1)
    {
        cout<<"neither prime nor composite";
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
}