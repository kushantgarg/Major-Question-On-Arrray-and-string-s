#include<bits/stdc++.h>
using namespace std;
//q=prime number
#define d 256//number of all available characters in cpp
bool search(char pat[], char txt[],int q)
{
	int M=strlen(pat);//length of pattern
	int N=strlen(txt);//length of text
	int i,j;
	int p=0;//hash values of pattern
	int t=0;//hash values of txt
	int h=1;//represt pow d raise to m-1
	//value of h
	bool flag;
	for(i=0;i<M-1;i++)
	{
		h=(h*d)%q;
		
	}
	//calculate hash values of patter and first window o text
	for(i=0;i<M;i++)
	{
		p=(d*p+pat[i])%q;//(d*p+pat[i])%q; formula to find the hash values
		t=(d*t+txt[i])%q;

	}
	//slide over a window and check
	for( i=0;i<=N-M;i++)
	{
		//first compare the hash values
		if(p==t)
		{
			//if hash value of pattern and txt match then only search char by char
			 flag=true;
			 for(j=0;j<M;j++)
			 {
			 	if(txt[i+j]!=pat[j])
			 	{
			 		flag=false;
			 		break;
				 }
			if(flag)
			 {
			 	//cout<<i<<" ";
			 }	 
			 }
			 
			 if(j==M)
			 {
			 	cout<<"Pattern found at position "<< i <<endl;
			 }
			 
		}
		//if hash values not matches then shift to hash vaue of next window that is add leading digit and remoe
		//remove the trailing digit
		if(i<N-M)
		{
			t = (d*(t - txt[i]*h) + txt[i+M])%q;
			if(t<0)
			{
				t=t+q;
			}
		}
		
	}
return flag;
}
int main()
{
	char txt[] = "kushant";
	char pat[] = "g";
	
	// A prime number
	int q = 101;
	
	// Function Call
bool res=	search(pat, txt, q);
	if(res==false)
	cout<<"PAttern not found";
	return 0;
}
