#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<3)
    {
        cout<<"invalid size of an array ";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {    int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;

}