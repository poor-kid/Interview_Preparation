#include <bits/stdc++.h>

using namespace std;

int maxdiff(int arr[],int n)
{
	int max_diff = arr[1] - arr[0];
	int min_ele = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]-min_ele > max_diff)
			max_diff = arr[i]-min_ele;
		if(arr[i]<min_ele)
			min_ele = arr[i];
	}
	return max_diff;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int max=maxdiff(arr,n);
	cout<<max<<endl;
}