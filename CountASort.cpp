#include<iostream>
using namespace std;
 void countsort(int arr[], int n)
 {
     //find the max element
     int k=arr[0];
     for(int i=0;i<n;i++)
     {
         k=max(arr[i],k);
     }
     int count[10]={0};
     //store the count for each distince element
     for(int i=0;i<n;i++)
     {
          count[arr[i]]++;
     }
    //now editingg the count array so as it gives the position
    for(int i=1;i<n;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    //now manke a new array as the output array
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        //now store the elemnt in output array
        // at 1-position at index of count
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    
    
 }
 int main()
 {
     int arr[]={1,3,2,3,4,1,6,4,3};
     countsort(arr,9);
     cout<<"Sorted array";
     for(int i=0;i<9;i++)
     {
         
         cout<<arr[i]<<" ";
     }
 }
