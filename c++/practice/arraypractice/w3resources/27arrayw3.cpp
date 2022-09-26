#include<iostream>
using namespace std;
int main()
{
    int m,n,count=0;
    cout<<"enter the number of rows and number of coloumns\n";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"enter the number at a["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   
            cout<<arr[i][j]<<" ";
            if(arr[i][j]==0)
            {
                count++;
            }
        }
        cout<<endl;
    }
    cout<<"no of zeros "<<count<<endl;
    if(count>(m*n)/2)
    {
        cout<<"the given matrices is sparce matrix\n";
    }
    else
    cout<<"not a sparese matrix";
    return 0;
}