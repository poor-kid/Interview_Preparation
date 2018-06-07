#include <bits/stdc++.h>

using namespace std;

bool checkduplicates(int arr[],int n)
{
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]== arr[i+1])
			return true;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(checkduplicates(arr,n))
		cout<<"yes duplicates are present"<<endl;
	else
		cout<<"unique elements"<<endl;
}