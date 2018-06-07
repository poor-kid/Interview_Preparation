#include <bits/stdc++.h>

using namespace std;

typedef struct pair
 {
 	int count;
	int index;
 }p;

int firstUniquechar(string str)
{
	int n= str.size(),result = INT_MAX;
	//int counts[256] = {0};
	p counts_arr[256] = {0};
	for(int i=0;i<n;i++)
	{
			(counts_arr[str[i]].count)++;
			if(counts_arr[str[i]].count == 1)
				counts_arr[str[i]].index = i;
	
	}
	for(int i=0;i<256;i++)
		if(counts_arr[i].count == 1 && result>counts_arr[i].index)
		{
			result = counts_arr[i].index;
			//return counts_arr[i].index;
		}
		return result;
}

int main()
{
	string str;
	cin>>str;
	int index = firstUniquechar(str);
	cout<<index<<endl;
}