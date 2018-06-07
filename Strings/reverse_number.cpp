#include <bits/stdc++.h>

using namespace std;

int reversenum(int num)
{
	int rev_num =0,prev_rev_num =0,current_num;
	int num1 = num;
	if(num1<0)
	{
		num1 = num1*(-1);
	}
	while(num1>0)
	{
		current_num = num1%10;
		rev_num = rev_num*10+current_num;
		if((rev_num )/10!=prev_rev_num)
		{
			return 0;
		}
		prev_rev_num = rev_num;
		num1 = num1/10;
	}
	if(num<0)
		return rev_num*(-1);
	return rev_num;
}

int main()
{
	int n;
	cin>>n;
	int n1 =reversenum(n);
	cout<<n1<<endl;
}