//finding the next permutation of the given array or the vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findnextpermutation(vector<int>&nums)
{
	//called function and pass value by reference
	//call the stl algorithem function to find the next permutation
	 next_permutation(nums.begin(),nums.end());
        //printing the modified array
		for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
	
}
 int main()
 {
 	int arr[]={1,4,5,6,7};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	//creating and assigning vector with array
	 vector<int>nums(arr,arr+n);
 	findnextpermutation(nums);
 	
 }
