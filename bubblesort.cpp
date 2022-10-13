//boilerplate code
//bubble sorting 
//repeately swap the adjacent element 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;//for number of elements in array
cout<<"Enter the number of elemnts in array"<<endl;
cin>>n;
int *arr=new int[n];
if(arr==NULL)
{
	cout<<"No memory available";
	return 0;
}

for(int i=0;i<n;i++)
{
	cout<<"Enter the elements"<<i+1<<":";
	cin>>arr[i];

}
//buble sorting logic
for(int i=0;i<n-1;i++)//for passes that are equal to n-1 times
{
	for(int j=0;j<n-i-1;j++)//j loop is used to check and swap adjacent element
	if(arr[j]>arr[j+1])
	{//logic for swapping
		int t;
		t=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=t;
	}

	
	
	
}
	cout<<"Sorterd array"<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<endl;;
	}
	delete[] arr;


return 0;

}

