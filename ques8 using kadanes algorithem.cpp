//boilerplate code
//finding the largest sum subarray from the given array
//kadanes algorithem
#include<iostream>
using namespace std;
int maxsumsubarray(int arr[], int n)
{
	int curr_sum=0;//for adding all index till less than zero
	int max_sum=0;//for keeping the sum of last max subarray
	for(int i=0;i<n;i++)
	{
		curr_sum=curr_sum+arr[i];
		if(max_sum<curr_sum)
		{
			max_sum=curr_sum;//updating the value of max_sum
		}
		//if currsum is not more than max sum then
		if(curr_sum<0)
		{
			curr_sum=0;
		}
	}
	return max_sum;
}
int main()
{
	
int arr[]={-1,-2,-3,-4};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The largest sum subarray is :  "<<maxsumsubarray(arr,n);

return 0;

}

