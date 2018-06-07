#include <bits/stdc++.h>

using namespace std;

void transpose(vector< vector<int> > &arr)
{
	int R = arr.size();
	int C= arr[0].size();
	for(int i=0;i<R;i++)
	{
		for(int j=i;j<C;j++)
		{
			swap(arr[i][j],arr[j][i]);
		}
	}
}

void reverserows(vector< vector<int> > &arr)
{
	int R = arr.size();
	int C= arr[0].size();
	for(int i=0;i<C;i++)
	{
		for(int j=0, k=C-1;j<k;k--,j++)
		{
			swap(arr[i][j],arr[i][k]);
		}
	}

}

void rotateimage(vector <vector<int> > &arr,int n,int m)
{
	transpose(arr);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"complete"<<endl;	
	cout<<endl;
	reverserows(arr);

}

int main()
{
	int n,m,val;
	cin>>n>>m;
	vector< vector <int> > arr(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>val;
			arr[i].push_back(val);
		}

	}
	rotateimage(arr,n,m);
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