#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr1[]={1,2,3,4,5};
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        
        arr2[i]=arr1[i];
        
    }
    for(int i=0;i<n;i++)
    {
        
      cout<<arr1[i]<<" ";
        
    }
    cout<<sum;
}