//boilerplate code

#include<iostream>
using namespace std;
int main()
{
int n,*arr;
cout<<"enter the number of elements of array";
cin>>n;
arr=new int [n];
int arr1[n],arr2[n];
cout<<"Ener the element of aray"<<endl;
int i;
while(i<n)
{
	cin>>arr[i];
	i++;
	
}
int j=0;
int temp[n];
for(int i=0;i<n;i++)
{
	if(arr[i]>0)
	temp[j++]=arr[i];
}

for(int i=0;i<n;i++)
{
	if(arr[i]<0)
	temp[j++]=arr[i];
}
for(int i=0;i<n;i++)
{
	cout<<temp[i]<<endl;
}
return 0;


}

