#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//make template to define point
class Point{
	public:
		//declared twwo variable for 2 coedinated
		int x;
		 int y;
};
//distance function to fiind the distance
float dist(Point p1, Point p2)
{
    return sqrt( (p1.x - p2.x)*(p1.x - p2.x) +
                (p1.y - p2.y)*(p1.y - p2.y)
            );
}
 
// A Brute Force method to return the
// smallest distance between two points
// in P[] of size n
float bruteforce(Point p[], int n)
{
    float min = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (dist(p[i], p[j]) < min)
                min = dist(p[i], p[j]);
    return min;
}

//making of compareXfunction 
int compareX(const void *a,const void *b)
{
	Point *p1=(Point *)a,*p2=(Point *)b;
	return (p1->x-p2->x);
}
int compareY(const void *a,const void *b)
{
	Point *p1=(Point *)a,*p2=(Point *)b;
	return (p1->y-p2->y);
}
float stripclosest(Point strip[], int size, float d)
{
    float min = d; // Initialize the minimum distance as d
 
    qsort(strip, size, sizeof(Point), compareY);
 
    // Pick all points one by one and try the next points till the difference
    // between y coordinates is smaller than d.
    // This is a proven fact that this loop runs at most 6 times
    for (int i = 0; i < size; ++i)
        for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j)
            if (dist(strip[i],strip[j]) < min)
                min = dist(strip[i], strip[j]);
 
    return min;
}
//the main function that find and return the smallest distance
// betwee n two piiints
//this method basicalloy make use of closestuit
float closestutil(Point p[], int n)
{
	//if there is 2 or 3 point use brute force approach
	//base comdition
	if(n<=3)
	{
		return bruteforce(p,n);
	}
	int mid=n/2;
	Point midpoint=p[mid];
	//call recursively this function for left and right subarray
	float dl=closestutil(p,mid);
	float dr=closestutil(p+mid, n-mid);
	float d=min(dl,dr);//taking smaller of two dl amd dr
	//now we will make our strin arrary
	Point strip[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(abs(p[i].x-midpoint.x)<d)
		{
			strip[j]=p[i];
			j++;
		}
	}
	//find the closest point in the strip by first sorting it according to 
	//to the y cordinate and then return min of two
	return (min(d,stripclosest(strip,j,d)));
}
float closest(Point p[], int n)
{
	// we are using here qsort function declare in stdlib.h library
	// it is used to sort the element of array
	//The sorting algorithm used by this function compares pairs of elements by calling the specified compar function with pointers to them as argument.
//1st step sort point according to x cordinate
qsort(p,n,sizeof(Point),compareX);//it always call for compare function
//use recursive function closeutil 
// to fnd the smallest distance
return closestutil(p,n);
	
}
int main()
{
Point p[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    int n = sizeof(p) / sizeof(p[0]);
    cout << "The smallest distance is " << closest(p, n);
    return 0;	
}
