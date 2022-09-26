#include<iostream>
using namespace std;
int SimpleArraySum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+i;
    }
    return 0;
}
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<SimpleArraySum( arr, n);
    return 0;
}