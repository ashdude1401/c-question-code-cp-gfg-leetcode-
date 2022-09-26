#include<iostream>
using namespace std;
int max_element(int arr[],int n)
{
    
    bool is_max=true;
    for(int i=0;i<n;i++)
    {   is_max=true;
        for(int j=(i+1);j<n;j++)
        {
           
            if(arr[i]<arr[j])
            {
                is_max=false;
                break;
            }

        }
        if(is_max==true)
        return arr[i];
    }
    

    
     
    
}
int main()
{   int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
cout<<max_element(arr,n);



    return 0;
}