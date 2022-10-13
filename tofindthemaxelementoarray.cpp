//boilerplate code

#include<iostream>
using namespace std;
int main()
{
int n,*p;
cout<<"PLease enter the number of elements that has to be enterd in array";
cin>>n;
p=new int[n];//p[n]
cout<<"Enter the elemnts off array";
for(int i=0;i<n;i++)
{
	cin>>p[i];
}
//logic to find the maximum elements
int max=p[0];
for(int i=0;i<n;i++)
{
	if(max<p[i])
	{
		max=p[i];
	}
	else
	continue;
}
cout<<"maximum element of array is"<<max;
delete [] p;
return 0;

}

