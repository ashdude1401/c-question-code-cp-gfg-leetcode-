#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n],arr1[n];
    cout<<"enter the elements of an array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=-1;

    }
    cout<<"entered array ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr1[j]=0;
                count++;
            }
        }
        if(arr1[i]!=0)
       { 
              arr1[i]=count;
            if(count%2!=0)
        {
            cout<<arr[i]<<" occurs odd numbers of time"<<endl;
        }
        
       }
    }
  
    
    return 0;
}