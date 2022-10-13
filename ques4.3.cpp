#include<iostream>
using namespace std;
int binaryinsert(int arr[],int n,int item)
{
	int s=0;
	int e=n-1;
	int mid;
	int loc=0;
	while(s<e)
	{
		mid=(s+e)/2;
		if(arr[mid]==item)
	 {   
	 	    
			return mid;
			
		}
		else if(item>arr[mid])
		{
			s=mid+1;
		}
		else if(item<arr[mid])
		{
			e=mid-1;
		}
	}
return 0;
}
int main()
{
	int *arr,n,loc,item;
cout<<"Enter the number of elements of array"<<endl;
cin>>n;
cout<<"Enter the elements\n";
arr=new int[n];
int i;
while(i<n)
{
cin>>arr[i];
i++;


}
//sorting
for(int i=0;i<n-1;i++)
{
	
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int t;
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
}
cin>>item;
if(binaryinsert(arr,n,item))
cout<<"Foud at"<<binaryinsert(arr,n,item)+1;
else
bineryinsert(arr,n,)
}
