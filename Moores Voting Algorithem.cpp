//moores voting algorithem for findting the majority element in array
#include<iostream>
using namespace std;
int findcandidate(int a[], int size)
{
	int maj_index = 0, count = 1;
	for (int i = 1; i < size; i++) {
		if (a[maj_index] == a[i])
			count++;
		else
			count--;
		if (count == 0) {
			maj_index = i;
			count = 1;
		}
	}
	return a[maj_index];
}
//cout<<maj;

bool ismajority(int arr[],int size, int candidate)
{
	int count=0;
	for(int i=0;i<size;i++){
		if(candidate==arr[i])
		count++;
	}
	if(count>size/2)
	return 1;
	else 
	return false;
}
			
void printmajority(int arr[], int size)
{
	int candidate=findcandidate(arr,size);
if(ismajority(arr,size,candidate))
cout<<"The element is"<< candidate;
else
cout<<"No majority element is found\n";

}

int main()
{
int arr[]={1,1,4,1,1,4,1};
int size=sizeof(arr)/sizeof(arr[0]);
printmajority(arr,size);	
}
//boilerplate code


