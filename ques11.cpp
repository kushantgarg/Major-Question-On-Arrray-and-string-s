//finding the duplicate element in array of n+1 integer
#include<iostream>
using namespace std;
int duplicate(int arr[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				
                      
			}
			if(count>1)
			return arr[i];
			
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
cout<<"The duplicate element is "<<duplicate(arr,n);
}
