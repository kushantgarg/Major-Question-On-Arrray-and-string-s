//boilerplate code

#include<iostream>
using namespace std;
int minele(int arr[],int n)
{
	int i=0;
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(min>arr[i])
		min=arr[i];
	}
	return min;
}
int maxele(int arr[],int n)
{
	int i=0;
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i])
		max=arr[i];
	}
	return max;
}
int main()
{
int n;
cout<<"Enter the nunmber of elements in array"<<endl;
cin>>n;
int *arr=new int[n];
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	}
	int max=maxele(arr,n);
	int min=minele(arr,n);
	cout<<"minimum element of array is "<<min<<endl<<"Maximum element of array is"<<max;
return 0;

}

