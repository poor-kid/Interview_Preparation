#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void rightrotate(int arr[],int n,int d)
{
	reverse(arr,0,n-d-1);
	reverse(arr,n-d,n-1);
	reverse(arr,0,n-1);
}

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<'\t';
	}
}

int main()
{
	int n,d;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>d;
	rightrotate(arr,n,d);
	printarray(arr,n);

	return 0;
}