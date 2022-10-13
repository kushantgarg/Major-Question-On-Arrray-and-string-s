//finding the kth smallest element in array
#include<iostream>
#include<vector>
#include<array>
#include <algorithm>
using namespace std;
int main()
{
	array<int,6>arr={10,20,4,5,6,4};
	int k=0;
	int size=arr.size();
	cout<<"enter the kth element "<<endl;
	cin>>k;
	sort(arr.begin(),arr.end());
	cout<<arr[k];
}
