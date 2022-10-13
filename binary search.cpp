//boilerplate code

#include<iostream>
using namespace std;

int binarysearch(int *arr,int n,int ele)
{
	int mid,s=0,e=n-1;
	while(e>=1)
	{
      	mid=(s+e)/2;
      	if(arr[mid]==ele)
      	return mid;
      	else if(ele>arr[mid])
      	{
      		s=mid+1;
		  }
		  else if(ele<arr[mid])
		  {
		  	e=mid-1;
		  }
	}
return 0;
}
int main()
{
int n;
cout<<"Enter the number of elements in array";
cin>>n;
int arr[n];
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
	cout<<"Element at"<<i+1<<": ";
	cin>>arr[i];
}
for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-i-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			int t;
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
	}
}

int ele;
cout<<"Enter the element to be searcheed"<<endl;
cin>>ele;
binarysearch(arr,n,ele);
if(binarysearch(arr,n,ele))
cout<<"Foud at"<<binarysearch(arr,n,ele)+1;
else
cout<<"not found";
return 0;

}

