//program to shift all negative number  to one side of array and positive to ine side of the arrays
//time complexiity = o(N)
//using two pointer approach
#include<iostream>
using namespace std;
//utility function to print the array
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void shift(int arr[],int n)
{
	//make two pointer left and right 
	int left=0;
	int right=n-1;
	while(left<right){
	
	if(arr[left]<0 &&arr[right]<0)
	{
		left++;
	}
	else if(arr[left]>0 && arr[right]<0)
	{
		int temp;
		temp=arr[right];
		arr[right]=arr[left];
		arr[left]=temp;
		left++;
		right--;
		
	}
	else if(arr[left]<0 && arr[right]>0)
	{
		right--;
	}
	else if(arr[left]>0&& arr[right]>0)
	{
		right--;
	}
	else 
	{
		left++;
		right--;
	}
}

}
int main()
{
		int n;
	cout<<"Enter the number of elements to be stored in array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of th array\n";
	for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
 shift(arr,n);
 cout<<"The updates array\n";
 print(arr,n);
}
