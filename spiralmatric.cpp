//boilerplate code

#include<iostream>
using namespace std;
int main()
{
	int arr[4][4];
	cout<<"Enter the element of array"<<endl;
for(int i=0;i<4;i++)
{
	
	for(int j=0;j<4;j++)
	{
		cin>>arr[i][j];
	}
	
}
for(int i=0;i<4;i++)
{
	
	for(int j=0;j<4;j++)
	{
		cout<<"\t"<<arr[i][j]<<"\t";
	}
	cout<<endl;
	
	
}
//logic for spiral array
int k=0,l=0,m=4,n=4;
//k=starting row index
//l=starting column index 
//m=ending row index
//n=ending column index
while(k<m && l<n)
{
	for(int i=l;i<n;i++)
	{
		cout<<arr[k][i];//1 row left to right
			}
			k++;
			
	for(int i=k;i<m;i++)
	{
		cout<<arr[i][n-1];//	printoing up to bottom rows
			}		n--;
			
			if(k<m)
			{      
			for(int i=n-1;i>=l;i--)
			cout<<arr[m-1][i];
			m--;}
			if(l<n)
			{
				for(int i=m-1;i>=k;i--)
				cout<<arr[i][l];
				
			}
			l++;
			     	
			}
			return 0;
			
			
}
//starting or end wale loop ka bad haesha increment hoga and beech ak don ome decrement

