#include<iostream>
using namespace std;
  inline int Linear(int arr[],int n,int item)
{
    int loc=0;
    for(int i=0;i<n;i++)
    {
        if(item==arr[i])
        {
            loc=i+1;
        }

    }
    return loc;
}
int main()
{
int *arr,item,n;
cin>>n;
arr=new int[n];
int i;
while(i<n)
{
    cin>>arr[i];
    i++;
}
cin>>item;
cout<<Linear(arr,n,item);
delete []arr;
return 0;



}
