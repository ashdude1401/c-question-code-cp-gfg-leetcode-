#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
   
    
        for(i=2;n>1;i++)
        {
        
            {
                cout<<i;
                n=n/i;
            }
        }
    
    return 0;
}