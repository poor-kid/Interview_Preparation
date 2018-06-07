

/* (3*sum of unique elements in array - sum of array)/2 gives required result */


#include <bits/stdc++.h>

using namespace std;

void singlenumber(int arr[],int n,int d)
{
	int i,uniq_sum=0,sum=0;
	sort(arr,arr+n);
	for( i=0;i<n-1;i++)
	{
		sum = sum+arr[i];
		if(arr[i]!=arr[i+1])
			uniq_sum = uniq_sum+arr[i];
	}
	uniq_sum = uniq_sum+arr[i];
	sum = sum+arr[i];
	int res = (3*(uniq_sum)- (sum))/2;		//formula only for repetition thrice
	cout<<res<<endl;
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
	singlenumber(arr,n,3);
}