#include<iostream>
using namespace std;
int aVeryBigSum( int *arr,int n)
{
    int sum;
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<aVeryBigSum(arr,n);
    return 0;
    
}
