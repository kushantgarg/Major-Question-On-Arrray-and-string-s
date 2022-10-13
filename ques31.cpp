//brute force solution off the solution for finding the minimum length of subarray whosee sum is greater then the given sum
#include<bits/stdc++.h>
using namespace std;
int smallestSubwithSum(int arr[], int n, int sum)
{
	int min_len=n+1;
	//i take min length to be greater then n+1 in initial case
	// so that if in main it is equal to this means no subarray exit
	
	//run a outer loop
	for(int i=0;i<n;i++)
	{
		int curr_sum=arr[i];//initialling curent sum with first value of main array
		
		//check if first element is itself greater
		if(curr_sum>sum)
		{
			return 1;
		}
		//now trevaerse with different end points
		for(int j=i+1;j<n;j++)
		{
			curr_sum=curr_sum+arr[j];
			if(curr_sum>sum && (j-i+1)<min_len)
			min_len=(j-i+1);
		}
	}
	//if sub array exist then min length will got updates else it wil return 
	//minlen equak to n+1
	return min_len;
}
int main()
{
	int arr[]={1,4,45,6,10,19};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=51;
		int res=smallestSubwithSum(arr,n,sum);
		//check for what is return
		(res==n+1)?cout<<"Not exist"<<endl:cout<<res;
}
