//finding the common elenet in three sorted array using vecors and maps
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //coinde here.
            map<int,int>map1;
            vector<int>s1;
            for(int i=0;i<n1;i++)
            {
             s1.push_back(A[i]);
                 map1[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
             
               s1.push_back(B[i]);
            //   if(map1[B[i]]==1)
              // continue;
                 map1[B[i]]++;
                
            }
            for(int i=0;i<n3;i++)
            {
             
                s1.push_back(C[i]);
                map1[C[i]]++;
                
                
            }
            vector<int>s2;
            
            for(int i=0;i<map1.size();i++)
            {
                if(map1[s1[i]]>1)
                {
                      if(find(s2.begin(),s2.end(),s1[i])!=s2.end())
                      continue;
                        s2.push_back(s1[i]);
                }
                
            }
            
return s2;
        }

};

// { Driver Code Starts.

int main ()
{

        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    
}  // } Driver Code Ends
