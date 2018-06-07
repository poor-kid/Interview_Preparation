/*Input Format

First line consists of T denoting number of test cases.
Next line consists of an string .

Output Format

Print "Rock" if length of the string excluding that number is equal to the number other wise print "Shock".

Constraints

1<=T<=100
1<=length of string<= 10^5
string will consists of lowercase letters and digits.*/

#include <bits/stdc++.h>
using namespace std;

bool isalpha(char c)
{
    if(c >='a' && c<='z')
        return true;
    return false;
}

string check_len(string str)
{
    int len = str.length();
    char copy[256];
    int j=0,n;
    for(int i=0;i<len;i++)
    {
        if(!isalpha(str[i]))
        {
            copy[j] = str[i];
            j++;
        }
    }
    n = atoi(copy);
    int str_len = len - j;
    if(str_len == n)
        return "Rock";
    return "Shock";
}

int main() {
	string str;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>str;
		string res = check_len(str);
		cout<<res<<endl;
	}
	//relevant code here

	return 0;
}