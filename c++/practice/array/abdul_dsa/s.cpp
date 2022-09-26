 #include<iostream>
 #include<vector>
 using namespace std;
 vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long sum=0;
        int str,end;
        vector<int> sol;
        if(s==0)
            return {-1};
        else 
        {
            str=end=0;
            sum=arr[0];
            while(str<=end&&end<n)
            {
               if(sum==s)
               {
                    str++;
                    end++;
                   sol.push_back(str);
                   sol.push_back(end);
                    return sol;
               }
               else if(sum>s)
               {
                   sum=sum-arr[str];
                   str++;
               }
               else
               {
                    end++;
                    sum=sum+arr[end];
               }
             }
        }
         return sol;
    }
    int main()
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++)
             cin>>arr[i];
        vector<int> sol;
        sol=subarraySum(arr,n,s);
        for(int i=0;i<sol.size();i++)
            cout<<sol[i]<<" ";
        return 0;
    }