//Naive String Matching algorithrm
#include<iostream>
#include<string.h>
using namespace std;
void search(char *pat,char*txt)
{
  	int m=strlen(txt);//lenght of text
int n=strlen(pat);//length of pattern

for(int i=0;i<=m-n;i++)
{
	int j;
	for( j=0;j<n;j++)
	{
		if(txt[i+j]!=pat[j])
		break;
		
		
	}
	//if pattern math then this condition will work
	if(j==n)
		cout<<"Pattern is found at"<<i<<endl;
}
}
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}//boilerplate code


