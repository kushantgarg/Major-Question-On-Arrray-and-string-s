//finding the sum of triplet in array
#include<iostream>
#include<unordered_set>
using namespace std;
bool find3Numbers(int arr[], int n,int sum)
{
	for(int i=0;i<n-1;i++)
	{
		//declare a set for each iteration 
		unordered_set<int>s;
		{
			for(int j=i+1;j<n;j++)
			{
				int x=sum-(arr[j]+arr[i]);
				//now check weather differcmce exist in a set or not 
				if(s.find(x)!=s.end())
				{
					return true;
				}
				else
				s.insert(arr[j]);
			}
		}
	}
	return false;
}
int main()
{
	int arr[]={1,4,45,6,10,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(find3Numbers)
	{
		cout<<"Number exits in array that sum is equal"<<endl;
	}
	return 0;
}
