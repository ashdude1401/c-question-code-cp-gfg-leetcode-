#include<iostream>
using namespace std;
int main()
{
    int n,ins,temp;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n+1];
    cout<<"enter values in assending order\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number to be inserted\n";
    cin>>ins;
    arr[n]=ins;
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<" new array is : ";
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;



}