//boilerplate code
//count inversion question by bruteforce method
//tc=o of nsquare
#include<iostream>
using namespace std;
int countInversion(int arr[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			count++;
		}
	}
	
	return count;
}
int main()
{
int arr[]={2,4,1,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Count is "<<countInversion(arr,n);

return 0;

}

