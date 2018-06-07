#include <bits/stdc++.h>

using namespace std;

bool isnumeric(char x)
{
	if(x>='0' && x<='9')
		return true;
	return false;
}

bool isalpha(char c)
{
	if(c >='a' && c<='z' )
		return true;
	return false;
}

int myatoi(string str)
{
	int n = str.size();
	int sign = 1,flag =0;
	int res = 0,prev_res = 0;
	if(n <=0)
		return 0;
	for(int i=0;i<n;i++)
	{
		if(str[i] == '+' || str[i] == '-')
		{
			if(!(isnumeric(str[i+1])) || flag ==1)
				break;
			else
			{
				if(str[i]=='-')
					sign = -1;
				continue;
			}
		}
		else if(str[i]==' ')
		{

			if(i!=0 && flag == 1)
				break;
			else
			{
				continue;
			}
			//continue;
		}
		else if(str[i] == '.')
			break;
		else if(!(isnumeric(str[i])) && !(str[i]==' '))
		{
			if(res>0)
				break;
			else
				return 0;
		}
		

		else if(isnumeric(str[i]))
		{
			res = res*10+str[i]-'0';
			flag =1;
			if(res/10 != prev_res)
				return INT_MIN;
			prev_res = res;
		}

	}
	
	
		return sign*res;
}

int main()
{
	string str;
	cin>>str;
	int res = myatoi(str);
	cout<<res<<endl;
}