//finding the minimum length of subarrat whoes sum is grater than the given sum
#include<iostream>
#include<stdio.h>
using namespace std;
int smallestSubwithSum(int arr[],int n,int sum)
{
	int min_len=n+1;
	//initialise variables to treverse array
	int start=0,end=0,curr_sum=0;
	while(end<n)
	{
	//keep adding array elements while sum is smaller than the given
	while(curr_sum<=sum&&end<n)
	{
		curr_sum=curr_sum+arr[end];
		end++;
	}
	//i current sum becomes greater then given
	while(curr_sum>sum&&start<n)
	{
		//update min_ln  if required
		if((end-start)<min_len)
		{
			min_len=end-start;
		}
		//remove the first elemtns from current sum
		//do it until our curr_sum is greater
		curr_sum=curr_sum-arr[start];
		start++;
	}
	}
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

