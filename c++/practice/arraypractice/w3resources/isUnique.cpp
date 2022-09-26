#include<iostream>
using namespace std;
int isUnique(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                count--;
                break;

            }
            

        }
        count ++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<isUnique(arr,n);
    return 0;
}