/**/
#include <bits/stdc++.h>

using namespace std;

bool pairwithsum(int arr[],int n,int sum)
{
	int l,r,i;
	for( i=0;i<n;i++)
	{
		if(arr[i]>=arr[i+1])
			break;
		
	}
	l = (i+1)%n;
		r = i;
	while(l!=r)
	{
	if(arr[r]+arr[l] == sum)
		return true;
 	if(arr[r]+arr[l]<sum)
		l = (l+1)%n;
	else 
		r = (n+r-1)%n;
	
	}
	return false;
}

int main()
{
	int n,sum;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>sum;
	if(pairwithsum(arr,n,sum))
	{
		printf("yes the pair exists\n");
	}
	else
	printf("the pair doesn't exists\n");
}