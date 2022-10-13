//Given an array of size n and a number k, fin all elements that appear more than " n/k " times.

#include<iostream>
#include<unordered_map>
using namespace std;
void printElements(int arr[], int n,int k)
{
	unordered_map<int,int>find;
	int x=n/k;
	for(int i=0;i<n;i++)
	{
		//putting all the elements in a hash map 
		//with the inde numbers
		find[arr[i]]++;
	}
	for(auto e:find)
	{
		if(e.second>x)
		{
			cout<<e.first;
		}
	}
	return ;
}
int main()
{
	  int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
 
    printElements(arr, n, k);
}
