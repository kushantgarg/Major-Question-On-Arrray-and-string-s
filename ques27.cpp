//finding weather array1 is subset of another or not using hasp map 
#include<iostream>
#include<unordered_map>
using namespace std; 
string issubset(int a1[], int a2[], int n, int m)
{
	unordered_map<int,int>map1;
	for(int i=0;i<n;i++)
	{
		map1[a1[i]]=i+1;
	
	}
		int count=0;
		for(int i=0;i<m;i++)
		{
		    if(map1[a2[i]]!=0)
		    {
		        count++;
		    }
		}
		if(count==m)
		return "YES";
		else 
		return "NO";
}
int main()
{
int a1[] = {11, 1, 13, 21, 3, 7};
int a2[] = {11, 3, 7, 1};
int n=sizeof(a1)/sizeof(a1[0]);
int m=sizeof(a2)/sizeof(a2[0]);
cout<<isusbset(a1,a2,n,m);
}
