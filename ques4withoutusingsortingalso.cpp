//sorting an array having only 0 1 and 2 withour using any sorting algorithem
#include<iostream>
#include<stdio.h>
using namespace std;
 int main()
 {
 	int n;
 	cout<<"ENter the number of elements to be stored in array"<<endl;
 	cin>>n;
 	int arr[n];
 	cout<<"Enter the elemtns in arrays"<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];
	 }
	 //to sort an array we are using the counting method
	 int countzero=0,countone=0,counttwo=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(arr[i]==0)
	 	{
	 		countzero++;
		 }
		 else if(arr[i]==1)
		 {
		 	countone++;
		 }
		 else
		 counttwo++;
	 }
	 //now string back values in the array 
	 for(int i=0;i<countzero;i++)
	 {
	 	arr[i]=0;
	 }
	 for(int i=countzero;i<countone+countzero;i++)
	 {
	 	arr[i]=1;
	 }
   for ( int i = countzero + countone ; i < n ; i++ )  
    {  
        arr[ i ] = 2 ;  
    }  
    //printing the sorted array
    cout<<"\nSorted array\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
 }
