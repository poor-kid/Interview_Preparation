#include <bits/stdc++.h>

using namespace std;

bool check_palindrome(string str)
{
	int len = str.size();
	int left = 0;
	int right = len-1;

	/*for(int i=0;i<len;i++)
	{
		str[i] = tolower(str[i]);	
	}*/

	transform(str.begin(),str.end(),str.begin(),::tolower);
	
	while(left<right)
	{
		if(str[left]==str[right])
			{
				left++;
				right--;
			}
		else if(!(isalnum(str[left])))
			left++;
		else if(!(isalnum(str[right])))
			right--;
		else
			return false;
	}
	return true;
}

int main()
{
	string str;
	getline(cin,str);
	cout<<str<<endl;
	if(check_palindrome(str))
		cout<<"true"<<endl;
	else 
		cout<<"false"<<endl;
}