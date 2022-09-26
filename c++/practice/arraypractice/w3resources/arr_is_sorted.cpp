#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n)
{
    int j;
    for(j=1;j<n;j++)
    {
        if(arr[j]<arr[j-1])
        return false;
    }
     
    return true;
}
int main()
{   int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];

if(is_sorted(arr,n)==false)
cout<<"not sorted ";
else 
cout<<"is sorted";



    return 0;
}