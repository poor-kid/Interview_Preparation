#include <bits/stdc++.h>

using namespace std;

void unionofarray(int arr1[],int n,int arr2[],int m)
{
	if(n>m)
	{
		int *tempp = arr1;
		arr1 = arr2;
		arr2 = tempp;

		int temp = n;
		n = m;
		m = temp;
	}

	sort(arr1,arr1+n);
	for(int i=0;i<n;i++)
		cout<<arr1[i]<<'\t';
	for(int i=0;i<m;i++)
	{
		if(!(binary_search(arr1,arr1+n,arr2[i])))
			cout<<arr2[i]<<'\t';
	}
	cout<<endl;
}

void intersection(int arr1[],int arr2[],int n,int m)
{
	if(n<m)		//if arr1 > arr2 making sure arr1 smaller
	{
		int *tempp = arr1;
		arr1 = arr2;
		arr2 = tempp;

		int temp = n;
		n = m;
		m = temp; 
	}

	sort(arr1,arr1+n);
	for(int i=0;i<m;i++)
	{
		if(binary_search(arr1,arr1+n,arr2[i]))	//if each element in larger array is present in sorted smaller array then print
			{
			//if(i==0 || arr2[i]!=arr2[i-1])
				cout<<arr2[i]<<'\t';
				int *pend =remove(arr1,arr1+n,arr2[i]);
			}
	}
	cout<<endl;

}

int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	intersection(arr1,arr2,n,m);
	unionofarray(arr1,n,arr2,m);
}