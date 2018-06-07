#include <bits/stdc++.h>

using namespace std;

void singlenumber(int arr[],int n,int d)
{
	int res = arr[0];
	for(int i=1 ;i<n;i++)
		res= res^arr[i];
	cout<<res;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int d;
	cin>>d;
	singlenumber(arr,n,d);
}