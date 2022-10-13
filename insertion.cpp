//boilerplate code

#include<iostream>
using namespace std;
int main()
{int n,pos;//for number of elements in array
cout<<"Enter the number of elemnts in array"<<endl;
cin>>n;
int *arr=new int[n];
if(arr==NULL)
{
	cout<<"No memory available";
	return 0;
}

for(int i=0;i<n;i++)
{
	cout<<"Enter the elements"<<i+1<<":";
	cin>>arr[i];

}
int ele;
cout<<"Enter the element to ne instered"<<endl;
cin>>ele;
cout<<"Enter the position where it to be instered";
cin>>pos;
pos=pos-1;
for(int i=n-1;i>=pos;i--)
{
	arr[i+1]=arr[i];
}
arr[pos]=ele;
cout<<"Updated array"<<endl;
for(int i=0;i<=n;i++)
{
	cout<<i+1<<":"<<arr[i]<<endl;
}
return 0;

}

