#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	char s1[50],s2[50];
	int count[256]={0};
	cout<<"enter the first string";
	cin.getline(s1,50);
	cout<<"Enter the second string";
	cin.getline(s2,50);
	for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		//cout<<count[s1[i]]<<count[s2[i]]<<endl;
		//cout<<
		count[s1[i]]++;
		count[s2[i]]--;
		
	}
for(int i=0;i<256;i++)
	{
		if(count[i]!=0)
		{
			cout<<"not a anagram";
			exit(0);
		}
	}
	cout<<"anagram string";
	return 0;
}
