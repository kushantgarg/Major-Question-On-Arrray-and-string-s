//boilerplate code
//count inversion using merge sort
//time complexity o(nlogn)
#include<iostream>
using namespace std;
int count=0;
void merging(int a[], int l, int mid, int r)
{
	//funciton for merggin to sorted subarrays
	//int size=(mid-l)+(r-mid)+1;
	int b[100];
	int i,j,k;
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=r)
	{
		
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
		j++;
			k++;
        count++;
		}
	
	}
	
		while(j<=r)
		{
				//cout<<"b";
			b[k]=a[j];
			j++;
			k++;
		}

	
		while(i<=mid)
		{
			//cout<<"a";
			b[k]=a[i];
			i++;
			k++;
		}
	for(int i=l;i<=r;i++)
	{
		a[i]=b[i];
	}
}

void mergesort(int arr[], int l,int r)
{
	
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merging(arr,l,mid,r);
	}
}
int countInversion(int arr[], int n)
{
	int left=0;
	int right=n-1;
	mergesort(arr,left,right);
	int res=count;
	count=0;
	return res;

}
int main()
{
int arr[]={2,1,4,3,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Count is "<<countInversion(arr,n);

return 0;

}

