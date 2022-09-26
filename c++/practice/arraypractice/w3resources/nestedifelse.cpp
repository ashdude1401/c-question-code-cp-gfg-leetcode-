#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        if(n>0)
        cout<<"positive even";
        else if(n<0)
        cout<<"negetive even";
        else
        cout<<"zero";
    }
    else 
    {
        if(n>0)
        cout<<"positive odd";
        else if(n<0)
        cout<<"negetive odd";
        else
        cout<<"zero";
    }

    
    return 0;
}