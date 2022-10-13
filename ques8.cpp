//find the largest sub contigious subarray
//using bruteforce
#include<iostream>
using namespace std;
int subarraysum(int A[], int n)
{
	 int max_sum = 0;
    for ( int i = 0;i<n;i++)
    {   
      int  sum=0;
       for( int j = i;j<n;j++) 
       {  
         sum = sum +  A[j];
         if (sum > max_sum)
             max_sum = sum;
        }
    }
return max_sum;
}
int main()
{
	int arr[]={1,2,3,-2,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"largest sum is "<<subarraysum(arr,n);
}
