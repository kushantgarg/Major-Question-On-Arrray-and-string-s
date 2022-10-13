#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
	int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int size=v.size();
		    if(size%2==0)
		    return (v[size/2]+v[(size-1)/2])/2;
		    else
		    return v[size/2];
		    
		}
		int main()
		{
			int arr1[5]={1,2,3,4,5};
			int arr2[5]={6,7,8,9,10};
			vector<int>v1;
			for(int i=0;i<5;i++)
			{
				v1.push_back(arr1[i]);
			}
			for(int i=0;i<5;i++)
			{
				v1.push_back(arr2[i]);
			}
			cout<<"Median is"<<" "<<find_median(v1);
		}
