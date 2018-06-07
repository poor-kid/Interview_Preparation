#include <bits/stdc++.h>

using namespace std;


bool checkanagram(string str1,string str2)
{
	int count[256] = {0};
	int len1 = str1.size();
	int len2 = str2.size();
	if(len1!=len2)
		return false;
	for(int i=0;i<len1;i++)					//O(n)
	{
		count[str1[i]]++;
		count[str2[i]]--;
	}
	for(int i=0;i<256;i++)
		if(count[i]!=0)
			return false;
	return true;
}

/*bool checkanagram(string str1,string str2)
{
	int len1 = str1.size();
	int len2 = str2.size();
	if(len1!=len2)
		return false;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());				//O(nlogn)
	for(int i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])
			return false;

	}
	return true;
}*/

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	if(checkanagram(str1,str2))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}