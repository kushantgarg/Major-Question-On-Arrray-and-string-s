#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void bucketSort(float arr[], int n)
{
	//create a empty list
	vector<float>bucket[n];
	//put the list in each bucket
	for(int i=0;i<n;i++)
	{
		int bi=n*arr[i];
		bucket[bi].push_back(arr[i]);
	}
	//sort individual bucket
	for(int i=0;i<n;i++)
	{
		sort(bucket[i].begin(),bucket[i].end());
	}
	//contactinate into one
	int index=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<bucket[i].size();j++)
		{
			arr[index++]=bucket[i][j];
		}
	}

}
int main()
{
    float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
 
    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

