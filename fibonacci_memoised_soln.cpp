#include <bits/stdc++.h>

using namespace std;

int nthfibo(int memo[],int n)
{
	int result;
	if(memo[n]!= 0)
		return memo[n];
	if(n == 1 || n == 2)
		result = 1;
	else
		result = nthfibo(memo,n-1)+nthfibo(memo,n-2);
	memo[n] = result;
	return result;
}

int main()
{
	int n;
	cin>>n;
	int memo[n+1] = {0};
	int res = nthfibo(memo,n);
	cout<<res<<endl;
}