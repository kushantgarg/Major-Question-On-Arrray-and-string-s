//boilerplate code
#include<math.h>
#include<iostream>
using namespace std;
class Points{
	public:
         //two cordinates for each point		
		int x;
		int y;
};
Points closestpoint(Points P[], int n)
{
	Points index;
	float distancemin=INT_MAX;
	float d;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
	{
	    float x=P[i].x-P[j].x;
	 float y=P[i].y-P[j].y;
	 float diff=(float)pow(x,2)+(float)pow(y,2);
	 d=sqrt(diff);
		//cout<<d<<endl;
		if(d<distancemin)
		{
			distancemin=d;
			index.x=i;
			index.y=j;
		}
		
	}

	
	}
	cout<<"Minimum Idstance"<<distancemin<<endl;
	return index;
}
int main()
{
	//define various points
	Points P[]={{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
int n=sizeof(P)/sizeof(P[0]);
Points l=  closestpoint(P,n);
cout<<"points are"<<endl;
cout<<l.x<<l.y;
return 0;

}

