//rearrange the element in alternate order o positive and negative
#include<iostream>
#include<queue>
using namespace std;
int arrange(int arr[], int n)
{
	queue<int>v1,v2;
	int count_negative=0;
	int count_positive=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			v1.push(arr[i]);
			count_negative++;
		}
		else
		{
				count_positive++;
				v2.push(arr[i]);
		}
	
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0 && count_negative!=0)
		{
			
			arr[i]=v1.front();
			v1.pop();
			count_negative--;
			
		}
		else{
		arr[i]=v2.front();
		v2.pop();	
		}
		
	}
	return 0;
}
 int main()
 {
 	 int arr[] ={1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    arrange(arr,n);
    for(int i = 0; i <n;i++)
    {
    	cout<<arr[i]<<" ";
	}
 }
