#include <bits/stdc++.h>

using namespace std;

int checksubstring(string str,string needle)
{
	int len1 = str.size();
	int len2 = needle.size();
	if(len2>len1)
		return -1;
	int j=0,i=0,index=-1;
	if(len1==0 || len2==0)
		return 0;
	while(i<len1 && j < len2)
	{
		if(str[i] == needle[j])
		{
			if(index == -1)
			{
				index = i;
				cout<<index<<endl;
			}
			i++;
			j++;
			cout<<i<<'\t';
			
		}
		else
		{
			
			if(index !=-1 && j!=len2)
			{
				index = -1;
				j=0;
				//break;
			}
			else if(j==len2)
				break;
			i++;
		}
	}
	return index;
}

int main()
{
	string str,needle;
	cin>>str>>needle;
	int res =checksubstring(str,needle);
	cout<<res<<endl;
}