#include<iostream>
using namespace std;
int main()
{
int n;//for number of elements in array
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
int pos;
cout<<"Enter the position where element is to be deleted";
cin>>pos;
pos=pos-1;
for(int i=pos;i<n;i++)
{
	arr[i]=arr[i+1];
	
}
cout<<"updated arrya"<<endl;
for(int i=0;i<n-1;i++)
{
	cout<<arr[i]<<endl;
}
}
