#include<iostream>
using namespace std;
int secondSmalest(int *arr,int n)
{
    int first=arr[1],second=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==first)
        continue;
            if(arr[i]<first)
            {
                second=first;
                first=arr[i];
            }
            else
            {
                if(arr[i]<second)
                {
                    second=arr[i];
                }
            }
        
    }
    return second;
}
int secondLargest(int *arr,int n)
{
    int first=arr[0],second=arr[1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==first)
        {
            continue;
        }
        else if(arr[i]>first)
            {
                second=first;
                first=arr[i];
            }
        else
            {
                if(arr[i]>second)
                {
                    second=arr[i];
                }
            }
        
    }
    return second;
}
void del(int *arr,int &n,int index)
{
    for(int i=index;i<n-1;i++)
    {
       arr[i]=arr[i+1]; 
    }
    n--;
}
void insert(int *arr,int &n,int elmt,int index)
{
    for(int i=(n-1);i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=elmt;
    n++;
}
void sortedInsert(int *arr,int &n,int elmt)
{
    int j,pos;
        for( j=0;j<n;j++)
        {
            if(arr[j]>elmt)
            {
                pos=j;
                break;
            }
        }
        for(int i=n-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=elmt;
        n++;
}
void copyEven(int *arr,int n,int *arr1,int &n1,int *arr2,int &n2)
{
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr1[p]=arr[i];
            p++;
        }
        else
        {
            arr2[q]=arr[i];
            q++;
        }
    }
    n1=p;
    n2=q;
}
void printFrequency(int *arr,int n)
{
 
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        break;
        int count=1,ctr=0,j;
        for(  j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
            count++;
           } 
           else
           {
            ctr=j;
            break;
           }
        }
        cout<<arr[i]<< " appears "<<count<<endl;
        if(j==n)
        break;
            i=j-1;
    }
}
void copy(int *arr1,int *arr2,int *arr,int n)
{
    for(int i=0;i<2*n;i++)
    {
        if(i<n)
        arr[i]=arr1[i];
        else
        arr[i]=arr2[i-n];
    }
}
void sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int t;
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int countDublicate(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int ctr=0;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
            }
        }
        if(ctr==1)
        {
            count++;
        }
        
    }
    return count ;
}
void printUnique(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main ()
{
    int arr[100],elmt,n,index;
    cout<<"Enter the size of an array\n";
    cin>>n;
    cout<<"Enter the element of an array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Second largest element is  "<<secondLargest(arr,n)<<endl;
    return 0;
}