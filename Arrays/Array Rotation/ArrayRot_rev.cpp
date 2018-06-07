#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp = arr[start];
		arr[start]  = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftrotate(int arr[],int d,int n)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

void printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<'\t';
}

int main()
{
	int n,inp,d;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>inp;
		arr[i] = inp;
	}
	cout<<"no of ele to rotate"<<endl;
	cin>>d;

	leftrotate(arr,d,n);
	printarr(arr,n);
	
}