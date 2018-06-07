#include <bits/stdc++.h>

using namespace std;

int removeduplicates(int arr[],int n)
{
	if(n == 0 || n == 1)
		return n;
	int j=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			arr[j] = arr[i];
			j++;
		}
	}
	arr[j++] = arr[n-1];
	//j++;
	return j;

}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int count = removeduplicates(arr,n);
	for(int i=0;i<count;i++)
		cout<<arr[i]<<'\t';
	cout<<"count :"<<count<<endl;
}