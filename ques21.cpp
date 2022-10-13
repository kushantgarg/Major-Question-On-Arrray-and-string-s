//boilerplate code
//ques21 Find if there is any subarray with sum equal to 0
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int>m1;
        int start=0;
        int end=-1;
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            curr_sum=curr_sum+arr[i];
            if(curr_sum==0)
            {
                return true;
            }
            if(m1[curr_sum])
            {
                
                return true;
            }
            m1[curr_sum]++;
        }
        return false;
    }
int main()
{
int arr[]={4,2,-3,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
if(subArrayExists(arr,n))
{
	cout<<"Yes";
}
else 
cout<<"False";
return 0;

}

