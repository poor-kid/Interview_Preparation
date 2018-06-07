#include <bits/stdc++.h>

using namespace std;

int countrotations(int arr[],int n)
{
	int min = arr[0];
	int min_index;
	for(int i=0;i<n;i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
			min_index = i;
		}
	}
	return min_index%n;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count =countrotations(arr,n);
	cout<<count<<endl;
}