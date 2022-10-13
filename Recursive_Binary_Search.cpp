#include<iostream>
using namespace std;
int binarySearch(int arr[],int low, int high, int key)
{
	if(low<=high)
	{
		int mid=low+(high-1)/2;
		if(key==arr[mid])
		return mid;
		 if(key<arr[mid])
		{
			return binarySearch(arr,low, mid-1, key);
		}
		//else the element can only be present in right subarray
		
			return binarySearch(arr,mid+1,high,key);
	}
	//if not found yet then it is not present
	return -1;
}
int main()
{
	int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}
