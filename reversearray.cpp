#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
 	for(int i=0,j=n-1;i<j;i++,j--)
		 	{
		 		int t;
		 				t=a[i];
		 				a[i]=a[j];
		 				a[j]=t;
             }
    }
return 0;
}

