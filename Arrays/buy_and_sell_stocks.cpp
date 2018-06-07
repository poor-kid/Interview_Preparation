#include <bits/stdc++.h>

using namespace std;

struct Interval
{
	int buy;
	int sell;
	
};

void buyandsell(int arr[],int n)
{
	Interval stock[n/2+1];		//optimal max size required
	int i=0,count =0;
	while(i<n-1)				
	{
		while((i<n-1) && arr[i] >= arr[i+1])   // finding local minima if arr is descensing order no sol 
			i++;								//NOTE: the limit is n-2 as we are comparing present ele to next ele
		if(i==n-1)
			return;
		stock[count].buy = i;					//store local minima index to buy
		i++;

		while((i<n) && arr[i] >= arr[i-1])		//finding local maxima NOTE: limit is n-1 as we are comparing present to prev ele
			i++;
		stock[count].sell = i-1;				//store local maxima index to sell 
		count++;								//number of pairs
	}

	if(count == 0)
		cout<<"not possible"<<endl;
	else
	{
		for(int i=0;i<count;i++)
			cout<<"buy at "<<stock[i].buy<<"  and sell at "<<stock[i].sell<<endl;
	}
	return;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	buyandsell(arr,n);
}