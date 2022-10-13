//boilerplate code
//sorting array
#include<iostream>
using namespace std;
void selectionsort(int *arr,int n)
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
	cout<<"Sorted array using selection sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void bubblesort(int *arr,int n)
{
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
	cout<<"Sorted array using buble sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void insertionsort(int *arr,int n)
{
	int temp;
for(int i=1;i<n;i++)
{
	temp=arr[i];
			int j=i-1;
	while(j>=0 && arr[j]>temp)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<endl;
}

}


int main()
{
int n;
cout<<"Enter the number of character in array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
selectionsort(arr,n);
bubblesort(arr,n);
insertionsort(arr,n);
return 0;

}

