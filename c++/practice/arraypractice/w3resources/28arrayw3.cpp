#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the size of square of matrices\n";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"enter the number at a["<<i+1<<"]"<<"["<<j+1<<"]";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {   
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {   
            
           if(i==j)
           {
               if(arr[i][j]!=1)
               {
                   cout<<" Not a identity matrix";
                   return 0;
               }
               
           }
           if(i!=j)
           {
               if(arr[i][j]!=0)
               {
                   cout<<"the given matrices is not identity";
                   return 0;
               }
               
           }
            
        }
        
    }

   cout<<"The given matrices is identity matrices";
    return 0;
}