#include<iostream>
using namespace std;
int main()
{
    int n,del,temp,k=0;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter values of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position to be deleted\n";
    cin>>del;
   // arr[del-1]=0;
    int arr1[n-1];
    for(int i=0;i<n;i++)
    {
        if(i!=del-1)
       {
            arr1[k]=arr[i];
            k++;      
        }

    }
    cout<<" new array is : ";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;



}