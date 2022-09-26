#include<iostream>
using namespace std;
void missingElement(int *arr,int n,int d)
{
    int ctr=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=arr[0]+(ctr*d);
        if(temp==arr[i])
        {
            ctr++;
        }
        else
        {
        do
        {
            cout<<temp<<" ";
            ctr++;
            temp=arr[0]+(ctr*d);
        }
        while(temp!=arr[i]);
        ctr++;
        } 
    }
}
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the difference \n";
    int d;
    cin>>d;
    missingElement(arr,n,d);
    return 0;

    
}