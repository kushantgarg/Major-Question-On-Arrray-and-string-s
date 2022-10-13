//program to find the maximum and minimum element of array
#include<iostream>
using namespace std;

void minmax(int arr[],int size)
{
	int min;
	int max;
	if(size==1)//hence only one element
	{
		min=max=arr[0];
	}
//if there is more then one element then
if(arr[0]>arr[1])
{
	max=arr[0];
	min=arr[1];
	
}
else 
{
	max=arr[1];
	min=arr[0];
}
//function to check the max and min element 
//using techniqoe of linear search for doing it
for(int i=0;i<size;i++)
{
	if(max<arr[i])
	{
		max=arr[i];
	}
	else if(min>arr[i])
	{
		min=arr[i];
	}
}
cout<<"Maximum element is "<<max<<" Minimum element is"<<min<<endl;
}
int main()
{
	int arr[]={-1,10,20,25,56,30,56,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	minmax(arr,n);
	return 0;
}
