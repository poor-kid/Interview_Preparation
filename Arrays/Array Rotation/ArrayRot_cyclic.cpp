#include <bits/stdc++.h>

using namespace std;

void cyclicrotate(int arr[],int n,int d)
{
	while(d>0)
	{
		int x = arr[n-1];
		for(int i=n-1;i>0;i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = x;
		d--;
	}
}

void printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<'\t';
}


int main()
{
	int n,inp,d;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>inp;
		arr[i]=inp;
	}

	cin>>d;

	cyclicrotate(arr,n,d);
	printarr(arr,n);

}