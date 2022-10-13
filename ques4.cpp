//program to sort an array with only 0 1 2 as an entries
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int partition(int a[],int low, int high)
{
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
     
    //swaping a[low] and temp
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;

    }
    void quicksort(int a[],int low,int high)
    {
        int partitionindex=0;
        if(low<high)
        {
        partitionindex=partition(a,low,high);
        quicksort(a,low,partitionindex-1);
        quicksort(a,partitionindex+1,high);
        }
        
    
	}
	int main()
	{
		int n;
		cout<<"Enter the number of elements you want to store in array"<<endl;
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of the array";
		int i=0;
		while(i<n)
		{
			cin>>arr[i];
			i++;
		}
		quicksort(arr,0,n-1);
		cout<<"Printing the sorted array with the entries as 0 1 and 2"<<endl;
		for(int j=0;j<n;j++)
		{
			cout<<arr[j]<<endl;
		}
	 
	}
    

