#include <bits/stdc++.h>

using namespace std;

vector<int> movezeroestoend(vector<int> arr,int n)
{
	int count =0;
	for(int i=0;i<n;i++)
		if(arr[i]!=0)
			arr[count++] = arr[i];
	for(int i= count;i<n;i++)
		arr[i] = 0;
	return arr;
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	arr = movezeroestoend(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<'\t';
	cout<<endl;
}