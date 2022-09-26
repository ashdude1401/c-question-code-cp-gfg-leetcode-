#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"The size of square matrices\n";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i>j)
            {
                arr[i][j]=0;
            }

        }
    }
    cout<<"the new matrices :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }



}