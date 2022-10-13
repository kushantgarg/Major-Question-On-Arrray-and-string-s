#include<iostream>
using namespace std;
int main()
{
    int *arr,n;
     cin>>n;
     int N=n;
     arr=new int[n];
     int sum=N*(N+1)/2;
     int temp=0;
     for(int i=0;i<n;i++)
     {
     	cin>>arr[i];
     	
     	
	 }
     for(int i=0;i<n;i++)
     {
         temp+=arr[i]; 
     }
     int missing=sum-temp;
     cout<<missing;
}
