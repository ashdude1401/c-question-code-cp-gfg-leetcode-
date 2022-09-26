#include<iostream>
using namespace std;
/*we are comparing ith term with remaining terms on right side of the element and doing swaping if 
we find some element greater then ith element .it is done till last element .
By doing so we get the greatest element at ith position among the compared elements*/
void des_sorting(int *arr3,int k)
{    int temp;      
    for(int i=0;i<k;i++)   /*Naive approach as time complexity is O(n2)*/
    {
        for(int l=i+1;l<k;l++)
        {
            if(*(arr3+i)<*(arr3+l))
            {
                temp=*(arr3+i);
                *(arr3+i)=*(arr3+l);
                *(arr3+l)=temp;

            }
        }
    }
}
void merge (int *arr1,int *arr2,int *p,int m,int n)
{
    int i=m-1,j=n-1,k=0; /*efficent approach as time complexity is O(n)*/

          while(i>=0&&j>=0)
            {
                if(arr1[i]>arr2[j])
                {
                    p[k]=arr1[i];
                    i--;
                }
                else
                {
                    p[k]=arr2[j];
                    j--;
                }
                k++;

            }
            for(;i>=0;i--)
            {
                p[k]=arr1[i];
                k++;
            }
            for(;j>=0;j--)
            {
                p[k]=arr2[j];
                k++;
            }
            

}
int main()
{   
    int n,m,i,j;
    int arr1[1000],arr2[1000],arr3[1000];
    cout<<"enter the size of array 1 and array 2\n";
    cin>>n>>m;
    cout<<"enter element of first array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr3[i]=arr1[i];

    }

    cout<<"element of second array \n";
    for(j=0;j<m;j++)
    {
        cin>>arr2[j];
        arr3[n+j]=arr2[j];
    }
    for(int k=0;k<m+n;k++)
    cout<<arr3[k]<<" ";
    cout<<endl;
    des_sorting(arr3,(m+n));
    cout<<"sorted array in decending order :";
    for(int k=0;k<m+n;k++)
        cout<<arr3[k]<<" ";
    return 0;
}