#include<iostream>
using namespace std;
//function to reverse an array or string
//using template so that no need to make another function to reverse string
template<class t>
void reverse(t arr[],int start,int end)
{
	t temp;
	while(end>start)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
template<class a>//using template so that any type weather int or char can be printed or operates uaing a single funciton code
void printarray(a arr[],int start, int end)
{
	int i=0;
	for(i=0;i<end;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
//	char arr[]={'a','b','c','d'};
int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,size-1);
	printarray(arr,0,size);
	return 0;
	
}
