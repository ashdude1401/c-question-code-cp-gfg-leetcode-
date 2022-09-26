#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"entered  array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {   int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        
        if(count>(n/2))
        {
            cout<<"the major element :"<<arr[i];
            return 0;
        }

    }
    cout<<"there no major element ";
    return 0;
    

}