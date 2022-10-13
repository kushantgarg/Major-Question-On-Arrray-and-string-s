#include<iostream>
using namespace std;
int main()
{
 cout<<"enter the number of elements in array";
 int n;
 cin>>n;
 int *p;
 p=new int[n];
 cout<<"Enter the element of array";
 for(int i=0;i<n;i++)
 {
 	cin>>p[i];
 }
 //checkk for duplicate element in array 
 for(int i=0;i<n;i++)
 {
 	for(int j=i+1;j<n;j++)
 	{
 		if(p[i]==p[j])
 		cout<<"Duplicate elemnt found"<<p[i]<<endl;
	 }
 }
}
