//{ Driver Code Starts
#include<iostream>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    // void swap(int &x,int &y)
    // {
    //     int temp=x;
    //     x=y;
    //     y=temp;
    // }
    void sort012(int a[], int n)
    {
        // code here 
        
        int l=0;
        int h=n-1;
        int m=0;
        while(m<=h)
        {
            switch(a[m])
            {
                case 0:
                //if the element is zero 
                swap(a[m],a[l]);
                m++;l++;
                break;
                //if the element is 1
                case 1:
                m++;
                //if the element is 2
                case 2:
                swap(a[m],a[h]);
                h--;
                break;
            }
            
        }
    }
    
};

//{ Driver Code Starts.
int main() {

        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    return 0;
}


// } Driver Code Ends