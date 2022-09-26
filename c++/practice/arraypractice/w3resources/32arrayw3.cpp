#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];  
    cout<<"enter the elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"enter the sum\n";
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
           {
                cout<<"sum of the two indices "<<i<<" "<<j;
                return 0;
           }
        }
    }
    cout<<"there is no such element";
    return 0;

}
