#include <bits/stdc++.h>

using namespace std;

void reverse(string str)
{
	int len = str.size();
	for(int i=len-1;i>=0;i--)
		cout<<str[i];
	cout<<endl;
}

int main()
{
	string str;
	cin>>str;
	/*reverse(str.begin(),str.end());
	cout<<str;*/
	reverse(str);
}