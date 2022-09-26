#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            cout<<"The pivot element is "<<arr[i]<<endl;
         }
    }
    return 0;

}