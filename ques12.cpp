//merging two sorted arrays without using any extra space
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
using namespace std;
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int c=0;
	   vector<int>v1;
	   vector<int>v2;
	   for(int i=0;i<n;i++)
	   {
	       v1.push_back(arr1[i]);//pusing values of array 1 into vector1	
	   }
	   for(int j=0;j<m;j++)
	   {
	   	v2.push_back(arr2[j]);
	   }
	   vector<int>v3(v1);
	   v3.insert(v3.end(),v2.begin(),v2.end());
	   sort(v3.begin(),v3.end());
	   v1.clear();
	   v2.clear();
	   for(int i=0;i<n;i++)
	   {
	   	v1.push_back(v3[i]);
	   	c++;
	   }
	    for(int i=c;i<n+m;i++)
	   {
	   	v2.push_back(v3[i]);
	   	
	   }
	   for(int i=0;i<n;i++)
	   {
	   	arr1[i]=v1[i];
	   }
	   for(int i=0;i<m;i++)
	   {
	   	arr2[i]=v2[i];
	   }
	    
	 
	}
	
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
