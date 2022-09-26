#include<iostream>
using namespace std;
int count_distinct(int arr[],int n)
{
    int count=0;
    bool is_distinct=true;
    for(int i=0;i<n;i++)
    {
        for(int j=(i-1);j>=0;j--)
        {
            is_distinct=true;
            if(arr[i]==arr[j])
            {
                is_distinct=false;
                break;
            }

        }
        if(is_distinct==true)
        count++;
    }
    return count;

    
     
    
}
int main()
{   int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
cout<<count_distinct(arr,n);



    return 0;
}