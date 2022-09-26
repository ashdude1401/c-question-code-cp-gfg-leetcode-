#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of an array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            

        }
        if(i>0)
        {   if(arr[i]!=arr[i-1])
            {

                 cout<<"second min element is "<<arr[i];
                 break;
                
            }
        }
       
    }
    return 0;
}