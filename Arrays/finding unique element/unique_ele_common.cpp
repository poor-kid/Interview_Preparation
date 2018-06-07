#include <bits/stdc++.h>

using namespace std;

void uniquenum(int arr[],int n,int d)
{
	int res =0;
	int x,sum;
	for(int i=0;i<32;i++)
	{
		x = 1 << i;				//x = (31 0's)1 after left shift (30 0's)10 so
		sum =0;
		for(int j=0;j<n;j++)
		{
			if(arr[j] & x)		//sum of all set bits in position 0 in 1st iteration
				sum++;
		}

		if(sum%d)		
		{		//check if that sum modulo d is not zero if d is fixed then we get 1 otherwise
			res =res | x;					//0 | 000000..1 = 1 this happens only when sum%d == 1
			//cout<<res<<" check"<<endl;
		}
	}
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
	uniquenum(arr,n,d);
}