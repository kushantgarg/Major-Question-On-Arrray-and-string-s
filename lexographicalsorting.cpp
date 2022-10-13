#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char **names;
	char t[50];
	cout<<"Enter the number of students";
	int n;
	cin>>n;
	names=new char*[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the name";
		cin>>t;
		int l=strlen(t);
		names[i]=new char[l];
		strcpy(names[i],t);
	}
	//sorting
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(names[i],names[j])>0)
			{
				char t[50];
				strcpy(t,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],t);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<names[i]<<endl;
		delete []names[i];
	}
	delete [ ]names;
}
