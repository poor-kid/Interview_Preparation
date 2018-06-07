#include <bits/stdc++.h>

using namespace std;

void reverse(vector<vector<int> > &arr)
{
	int R =arr.size();
	int C = arr[0].size();
	for(int i=0;i<C;i++)
	{
		for(int j=0,k = C-1;j<k;j++,k--)
			swap(arr[j][i],arr[k][i]);
	}
}

void transpose(vector<vector<int> > &arr)
{
	int R =arr.size();
	int C = arr[0].size();
	for(int i=0;i<R;i++)
	{
		for(int j=i;j<C;j++)
		{
			swap(arr[i][j],arr[j][i]);
		}
	}
}

void rotateanticlock(vector< vector<int> > &arr,int n,int m)
{
	transpose(arr);
	reverse(arr);
}

int main()
{
	int n,m,val;
	cin>>n>>m;
	vector< vector<int> > arr(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>val;
			arr[i].push_back(val);
		}
		//cin>>'\n';
	}

	rotateanticlock(arr,n,m);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}