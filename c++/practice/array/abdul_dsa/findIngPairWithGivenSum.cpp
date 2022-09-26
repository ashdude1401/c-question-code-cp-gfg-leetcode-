#include<iostream>
using namespace std;
void minMax(int *arr,int n)
{
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        else if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<min<<" "<<max;
}
void leftShift(int *arr,int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void all0AtEnd(int *arr,int n)
{
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(arr[i]!=0)
        {
            i++,j=i+1;
        }
        else if(arr[j]==0)
        {
            j++;
        }
        else
        {  
            int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            i++;j++;
        }
    }
}
int rmDub(int *arr,int &n)
{
    int i=0,j=1;
    while(i<n&&j<n)
    {
        if(arr[i]!=arr[j])
        {
            arr[++i]=arr[j++];
        }
        else
        j++;
    }
    n=i+1;
    return n;
}
void secondLargest(int *arr,int n)
{
    int max,smax;
    if(arr[0]>arr[1])
    {
        max=arr[0];
        smax=arr[1];
    }
    else if(arr[0]<arr[1])
    {
        max=arr[1];
        smax=arr[0];
    }
    else
    {
        max=arr[0];
        smax=-1;
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]<max && smax<arr[i])
        {
            smax=arr[i];
        }
    }
        cout<<smax;
        return;
}
void srtAndEnd(int *arr,int n,int val)
{
    int i=0,j=n-1;
    bool srt=0,end=0;
    while(i<j)
    {
       if(srt==0) //For starting point 
        {
        if(arr[i]!=val)//if the element i
            {
                i++;//If the element not equal to value move to the next value by increasing i by one 
            }
            else
            srt=1; //if equal to the value 
        }
        //For ending point
        if(end==0) 
        {
            if(arr[j]!=val)
            j--;//if the elemnt is not equal to value move to the left or next element by decreasig j by one 
            else
            end=1;
          }//if the element is found then then simply print 
          if(srt==1&&end==1) 
          {
            break;
          }

    }
    cout<<i<<" "<<j;
}
int main()
{
    int n;
    int arr[100];
    cout<<"Size of an array"<<endl;;
    cin>>n;
    cout<<"Enter the element of an array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    // cout<<"Enter the value\n";
    // cin>>val;
    leftShift(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   

    
    return 0;

}