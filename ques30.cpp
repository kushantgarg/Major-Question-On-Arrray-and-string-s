// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long difference;
        long long min_difference=INT_MAX;
       long start=0;
       long end=0;
        sort(a.begin(),a.end());
    //    cout<<a.size();
        for(long long i=0;i+m-1<n;i++)
        {
            difference=a[i+m-1]-a[i];
        //    cout<<difference<<endl;
            //min_diff=min(min_diff,difference);
            if(min_difference>difference)
            {
                min_difference=difference;
                start=i;
                end=i+m-1;
            }
            
        }
    
        return a[end]-a[start];
    //code
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;

		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	
	return 0;
}  // } Driver Code Ends
