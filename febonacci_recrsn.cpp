#include <bits/stdc++.h>

using namespace std;

int nthfeb(int n)
{
	int result;
	if(n == 1 || n == 2)
		result = 1;
	else
		result = nthfeb(n-1) + nthfeb(n-2);
	return result;
}

int main()
{
	int n;
	cin>>n;
	int res = nthfeb(n);
	cout<<res<<endl;
}