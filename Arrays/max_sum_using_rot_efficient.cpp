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

void rotate(int arr[],int n,int d)
{
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rotate(arr,n,1);
	int sum=0,currval = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum+arr[i];
		currval = currval + (i*arr[i]);
		
	}
	int max = currval;
	for(int i=1;i<n;i++)
	{
		currval = currval+ sum - (n*arr[n-i]);
		if(currval>=max)
		{
			max = currval;
		}
	}
	cout<<"ma value is : "<<max<<endl;

}