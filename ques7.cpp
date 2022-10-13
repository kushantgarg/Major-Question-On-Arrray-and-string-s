#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
	int temp;
	temp=arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=temp;
}
void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements to be stored in array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array before rotation"<<endl;
	print(arr,n);
	rotate(arr,n);
	cout<<"array after rotation"<<endl;
	print(arr,n);
}
