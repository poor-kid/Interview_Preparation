#include <bits/stdc++.h>

using namespace std;

vector<int> addtoarray(vector<int> arr,int n)
{
	if(n==0)
		return arr;
	arr[n-1] = arr[n-1]+1;
	int carry = arr[n-1]/10;
	arr[n-1] = arr[n-1]%10;
	for(int i=n-2;i>=0;i--)
	{
		if(carry==1)
		{
			arr[i] = arr[i]+carry;
			carry = arr[i]/10;
			arr[i] = arr[i]%10;
		}
	}
	if(carry==1)
		arr.insert(arr.begin(),1);
	return arr;
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	arr = addtoarray(arr,n);
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<'\t';
	cout<<endl;
}