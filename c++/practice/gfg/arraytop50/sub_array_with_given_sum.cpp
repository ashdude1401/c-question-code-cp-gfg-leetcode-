// #include<stdio.h>
// #include<vector>


#include <iostream>
#include <vector>

using namespace std;

 void subarraySum(int n, long long s)
    {
        long long temp,sum;
        int str,end;
        vector<int> sol;
        str=end=-1;
        // sum=arr[str];
        // 5
        sol.push_back(-1);
        sol.push_back(-1);
        for (auto i = sol.begin(); i != sol.end(); ++i)
		cout << *i << " ";
    }

int main()
{
    int n;
    long long s=0;
    cin>>n>>s;
    subarraySum(n,s);
    // int arr[n];
	// for (int i = 1; i < n; i++)
	// 	{
    //         cin>>arr[i];
    //     }
    // cout << "Output of begin and end: ";

	// cout << "\nOutput of cbegin and cend: ";
	// for (auto i = g1.cbegin(); i != g1.cend(); ++i)
	// 	cout << *i << " ";

	// cout << "\nOutput of rbegin and rend: ";
	// for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
	// 	cout << *ir << " ";

	// cout << "\nOutput of crbegin and crend : ";
	// for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
	// 	cout << *ir << " ";

	return 0;
}
