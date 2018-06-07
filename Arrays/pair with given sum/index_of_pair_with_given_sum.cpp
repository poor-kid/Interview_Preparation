#include <bits/stdc++.h>

using namespace std;

void pairwithsum(vector<int> arr,int n,int sum)
{
	vector<int> copy(arr);
	sort(copy.begin(),copy.end());
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
		if(copy[l]+copy[r] == sum)
		{
			for(int i=0;i<n;i++)
			{
				if(arr[i]==copy[l])
					cout<<i<<" ";
				else if(arr[i] == copy[r])
					cout<<i<<" ";
			}
			cout<<endl;
			return;
			//cout<<*it1<<" "<<*it2<<endl;
		}
		else if(copy[l]+copy[r]<sum)
		{
			l=(l+1)%n;
		}
		else
			r = (n+r-1)%n;
	}
	
} 

int main()
{
	int n,sum,T;
	cin>>T;
	while(T--)
	{
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//cout<<"sorted"<<endl;
	cin>>sum;
	pairwithsum(arr,n,sum);
	
	}

}