#include <bits/stdc++.h>

using namespace std;

bool pairwithsum(int arr[],int n,int sum)
{
	int i=(n-1),l,r;
	/*for(i=0;i<n;i++)
	{
		if(arr[i]>=arr[i+1])
			break;
	}*/
	 l = (i+1)%n;
	 r = i;
	while(l!=r)
	{
		if(arr[l]+arr[r] == sum)
			return true;
		else if(arr[l]+arr[r]<sum)
		{
			l=(l+1)%n;
		}
		else
			r = (n+r-1)%n;
	}
	return false;
}

int main()
{
	int n,sum,T;
	cin>>T;
	while(T--)
	{
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"sorted"<<endl;
	cin>>sum;
	if(pairwithsum(arr,n,sum))
	{
		cout<<"yes pair eixsts"<<endl;
	}
	else
		cout<<"doesn't eixsts"<<endl;
}

}