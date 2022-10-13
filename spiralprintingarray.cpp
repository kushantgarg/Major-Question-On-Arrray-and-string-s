//spiral matrix
#include<iostream>
using namespace std;
#define R 3
#define C 6
int main()
{
	int a[R][C]={{1,2,3,4,5,6},
	                {7,8,9,10,11,12},
	                {13,14,15,16,17,18}
					};
					cout<<"Array printed in simple form"<<endl;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
					}	
					
					cout<<"Array In a spiral form"<<endl;	
					int k=0,l=0,m=R,n=C;
					 /*
					 k=starting index of rows
					 l=starting colummn index
					 m=ending row index
					 n=ending column index*/
					 
				
				while(k<m && l<n)
				{
					for(int i=l;i<n;++i)
					{
						cout<<a[k][i]<<" ";
					}
					k++;
					
					for(int i=k;i<m;++i)
					{
						cout<<a[i][n-1];
					}
					n--;
				    if(k<m)
				    {
				    	for(int i=n-1;i>=l;--i)
				    	{
				    		cout<<a[m-1][i];
						}
						m--;
					}
					if(l<n)
					{
						for(int i=m-1;i>=k;i--)
						{
							cout<<a[i][l];
						}
						l++;
					}
					
				}
					 // int i, k = 0, l = 0,m=R,n=C;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
					
	return 0;						
}
