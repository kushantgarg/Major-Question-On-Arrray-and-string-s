//program to shift all negative number  to one side of array and positive to ine side of the arrays
//time complexiity = o(N)
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
	int j=0; //basically J will hold the index of positive element of the array whcih will be replaced by the negative element of the array 
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			j++;
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
