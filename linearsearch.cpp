//boilerplate code

#include<iostream>
using namespace std;
int main()
 {
int n;//for number of elements in array
cout<<"Enter the number of elemnts in array"<<endl;
cin>>n;
int *arr=new int[n];
if(arr==NULL)
{
	cout<<"No memory available";
	return 0;
}

for(int i=0;i<n;i++)
{
	cout<<"Enter the elements"<<i+1<<":";
	cin>>arr[i];

}
int seel;
cout<<"enter the element to be searched";
cin>>seel;
int count=0;
int pos;
for(int i=0;i<n;i++)
{
	if(seel==arr[i])
	{
		count++;
		pos=i;
		break;
	}
	
}
if(count>0)
cout<<"Element Found at positionm"<<pos+1;
else
cout<<"eleement not found";
return 0;

}

