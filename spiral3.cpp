#include<iostream>
using namespace std; int main()
{
	int r,c;
	cout<<"Enter the number of row and column in a  array matrix"<<endl;
	cin>>r>>c;
	int arr[r][c];
	cout<<"Enter the elements of a matrix";
	cout<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
		
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<" "<<arr[i][j]<<" ";
		}
	cout<<endl;	
	}
	int k=0,l=0,m=r,n=c;
	//n=column ending
	//m=row ending
	while(k<m&&l<n)
	{
		for(int i=l;i<n;i++)
		{
			cout<<arr[k][i]<<" ";
		}
		k++;
		for(int i=k;i<m;i++)
		{
			cout<<arr[i][n-1]<<" ";
		}
		n--;
	if(k<m)
	{
		for(int i=n-1;i>=l;i--)	
		{
			cout<<arr[m-1][i]<<" ";
		}
		m--;
		
	}
	if(l<n)
	{
		for(int i=m-1;i>=k;i--)
		{
			cout<<arr[i][l]<<" ";
			
		}
		l++;
	}
		
	}
	
	
	
}
