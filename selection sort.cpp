#include<iostream>
using namespace std;
int main()
{
	int n,min;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"unsoerted array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	//selection sort
	cout<<endl;
	cout<<"Sorted array"<<endl;
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<arr[i])
		{
				int t;
		t=arr[j];
		arr[j]=arr[i];
		arr[i]=t;
		}
		
	}
}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
