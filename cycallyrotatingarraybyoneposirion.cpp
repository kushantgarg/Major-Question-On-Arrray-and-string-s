#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
 int t=arr[size-1];
 for(int i=size-1;i>=0;i--)
 {
     arr[i+1]=arr[i];
 }   
 arr[0]=t;
 for(int i=0;i<5;i++)
 {
     cout<<arr[i];
 }
}
