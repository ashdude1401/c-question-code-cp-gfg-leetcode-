#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cout<<"enter the size of an array \n";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"The given array is :";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int sum;
    // for(int i=0;i<n;i++)
    // {   
    //     for(int j=i+1;j<n;j++)
    //     {   ;
    //         for(int k=i+1;k<=j;k++)
    //         {  int temp; 
    //             temp=arr[i]+arr[j];
    //         }
    //         if(sum>temp)
    //         {
    //             temp=sum;
    //         }
    //     }
    // }
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of given array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int k=0;k<n;k++)
    {
        for(int i=k;i<n-1;i++)
    {   int temp=0;
        for(int j=0;j<=i;j++)
        {
            temp=temp+arr[j];

        }
        if(temp>sum)
        {
            sum=temp;
        }
    }
    }
    cout<<"The largest sum of subarray is "<<sum;
    return 0;


    
}