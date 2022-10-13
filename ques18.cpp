//finding all the pair with given sum
#include<iostream>
#include<unordered_map>
using namespace std;
int getpaircount(int arr[], int n, int k)
{
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	int twicecount=0;
	for(int i=0;i<n;i++)
	{
		twicecount+=m[k-arr[i]];	
		if(k-arr[i]==arr[i])
		{
			twicecount--;
		}
	}
	//cout<<twicecount;
	return twicecount/2;
}
int main()
{
	int arr[]={1,5,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k;
	cout<<"Enter the value of k\n";
	cin>>k;
	cout<<"Number of pairs are"<<" "<<getpaircount(arr,n,k);
}
