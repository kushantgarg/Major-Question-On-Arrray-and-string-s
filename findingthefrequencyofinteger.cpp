//boilerplate code

#include<iostream>
using namespace std;
int fre(int arr[],int n,int k)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		count++;
	}
return count;
}

int main()
{
	int n;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the elements of array";
	int i;
	while(i<n)
	{
		cin>>arr[i];
		i++;
		
	}
	cout<<"Enter the element whose frequecy is to be found";
	int k;
	cin>>k;
cout<<"frequesncy is "<<fre(arr,n,k);

return 0;

}

