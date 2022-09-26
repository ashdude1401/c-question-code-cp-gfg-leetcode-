#include<iostream>
using namespace std;
int main()
{
    int i, n,mn=1,ctr=0;
    cin>>n;
    int arr1[n],arr2[n],arr3[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=arr1[i];
        arr3[i]=0;

    }
    for(i=0;i<n;i++)
    {   mn=1;
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[j]=mn;
                mn++;
            }
        }


    }
    for(i=0;i<=n;i++)
    {
        if(arr3[i]==2)
        ctr++;

    }
    cout<<ctr;
    return 0;



}