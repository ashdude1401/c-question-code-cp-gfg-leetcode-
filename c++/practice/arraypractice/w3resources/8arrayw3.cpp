#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of inputs\n";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=-1;//because count can be any positive no. 

    }
    for(int i=0;i<n;i++)
    {   int count=1;//for counting;
        for(int j=i+1;j<n;j++)
       { if(arr1[i]==arr1[j])//comparing ith values with remaing one and countin it and assigning 0 to arr3[j] to stating that it has been counted
        {   arr2[j]=0;
            count++;
        
        }
       }
       if(arr2[i]!=0)
       {
           arr2[i]=count;//assinging frquency to corresponding arr2 th element if it is unique or already not counted;
       }
    }
    for(int i=0;i<n;i++)
    {   if(arr2[i]!=0)
     {  
        cout<<arr1[i]<<" occurs "<<arr2[i]<<" times \n";//printing the frequences of element
     }
 
   }
   return 0;
}