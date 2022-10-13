  //boilerplate code
//given all array elements are unique or distinct
//we will given input as array elements and a kth term we have to tell that musch lowest element in array;
#include<iostream>
using namespace std;
int ktheminlement(int arr[],int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int t;
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	k=k-1;
	return arr[k];
	
	
}
kthmaxelement(int arr[],int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				int t;
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	k=k-1;
	return arr[k];
}
int main()
{
int n;
cout<<"Enter the number of elements of array"<<endl;
cin>>n;
int *arr=new int[n];
cout<<"Enter the elements of array"<<endl;
int i;
while(i<n)
{
	cin>>arr[i];
	i++;
}
int k;
cout<<"Enter the kth term";
cin>>k;
ktheminlement(arr,n,k);
cout<<"The kth smallest element is"<<ktheminlement(arr,n,k)<<endl;
cout<<"The Kth maximum element is"<<kthmaxelement(arr,n,k)<<endl;
delete []arr;
return 0;

}

