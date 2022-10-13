//finding the duplicate element in array using sorting approach with the time complexity as o(n)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&nums)//utility function to print the array created using the vectors
{
		vector<int>::iterator p;
	for(p=nums.begin();p!=nums.end();p++ )
	cout<<*p<<endl;
}
int findduplicate(vector<int>&nums)
{
	sort(nums.begin(),nums.end());
	//int sizea=nums.size();
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i]==nums[i-1])
		return nums[i];
	}
	return 0;
}
	
int main()
{
	vector<int>nums;
	cout<<"Enter the elements in array as much as you want"<<endl;
    int i;
	while(i!=-1)
	{//sentinal check condition
		cout<<"Enter the -1 to exit loop or when you are finish entering the elements in array"<<endl;
		//int element;
		cin>>i;
		if(i!=-1)
		nums.push_back(i);
	}
cout<<"The Duplicate elememet is "<<findduplicate(nums);//calling the findduplicate function


}
//time complexity of this program is o(nlogn) 
