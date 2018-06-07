#include <bits/stdc++.h>

using namespace std;

void zalgo(string concat,int z[],int len)
{
	int l,r,k;
	l = r =0;
	for(int i=1;i<len;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<len && concat[r-l] == concat[r])
				r++;
			z[i] = r-l;
			r--;
		}
		else
		{
			k = i-l;
			if(z[k] < r-i+1)
				z[i] = z[k];
			else
			{
				l = r=i;
				while(r<len && concat[r-l] == concat[r])
					r++;
				z[i] = r-l;
				r--;
			}
		}
	}
}

void longestsubstr(string text,string substring)
{
	int len1 = text.length();
	int len2 = substring.length();
	string concat = substring+"$"+text;
	int len = concat.length();
	int z[len];
	int index;
	zalgo(concat,z,len);
	int max = INT_MIN;
	z[0] = INT_MIN;
	for(int i=1;i<len;i++)
	{
		if(z[i]> max)
		{
			max = z[i];
			index = i-len2-1;
		}
	}
	if(max != INT_MIN)
	{
		cout<<max<<endl;
		for(int i=index;i<max;i++)
			cout<<text[i];
		cout<<endl;
	}
}

int main()
{
	string text,substring;
	getline(cin,text);
	getline(cin,substring);
	longestsubstr(text,substring);
}