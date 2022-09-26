#include<iostream>
using namespace std;
int main()
{
    int n;
    int j=0,k=0;
    cout<<"enter the total number of inputs\n";
    cin>>n;
    int arr[n],odd[n],even[n];
     cout<<"enter the numbers\n";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }   
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
          even[j]=arr[i];
          j++;
      }
      else
      {
          odd[k]=arr[i];
          k++;
      }
    }
    cout<<" even terms :";
    for(int i=0;i<j;i++)
    cout<<even[i]<<" ";
    cout<<endl<<"odd terms :";
    for(int i=0;i<k;i++)
    cout<<odd[i]<<" ";
    

   /* int arr1[n],arr2[n],eve[n],od[n];
    cout<<"enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]=arr1[j])
            {
                arr2[j]=0;

            }
        }
        if(arr2[i]!=0)
        {
            arr2[i]=arr1[i];
            if(arr2[i]%2==0)
           {
               eve[even]=arr2[i];
               cout<<"even "<<eve[even];
               even++;

           } 
            else
          {
             od[odd]=arr2[i];
             cout<<" odd "<<odd;
             odd++;
          }  
        }
    }
   /* cout<<even<<" "<<odd;
    cout<<"even terms : ";
    for(int i=0;i<even;i++)
    cout<<eve[i]<<" ";
    cout<<endl;
    cout<<"odd trems : ";
    for(int i=0;i<odd;i++)
    cout<<od[i]<<" ";*/
    return 0;
}