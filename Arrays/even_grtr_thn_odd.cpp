#include <bits/stdc++.h>

using namespace std;

void greateratevenplaces(int arr[],int n)
{
	sort(arr,arr+n);
	int start =0,end = n-1;
	int k=0,l=n-1;
	int ans[n];
	for(int i=0;i<n;i++)
	{
		if((i+1)%2 == 0)
		{
			ans[i] = arr[l];
			l--;
		}
		else
		{
			ans[i] = arr[k];
			k++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<'\t';
	}
	//return ans;
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
	int n;
	cin>> n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
	 greateratevenplaces(arr,n);
	//printarray(res,n);
	

}