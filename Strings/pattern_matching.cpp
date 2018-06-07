//Z  ALGORITHM

#include <bits/stdc++.h>

using namespace std;



void Zalgo(string str,int Z[])
{
	int L =0,  R =0,k;
	int len = str.length();
	for(int i=1;i<len;i++)
	{
		if(i>R)
		{
			L=R=i;
			while(R<len && str[R-L] == str[R])
				R++;
			Z[i] = R-L;
			R--;
		}
		else
		{
			 k = i-L;
			if(Z[k]< R-i+1)
			{
				Z[i] = Z[k];
			}
			else
			{
				L = R =i;
				while(R<len && str[R-L] == str[R])
					R++;
				Z[i] = R-L;
				R--;
			}
		}
	}
}

void strStr(string text,string pattern)
{
	string concat = pattern+"$"+text;
	cout<<concat<<endl;
	int len = concat.length();
	int Z[len];
	int flag =0;
	Zalgo(concat,Z);
	for(int i=0;i<len;i++)
	{
		if(Z[i] == pattern.length())
		{
			flag = 1;
			cout<<"the substring is present in the index "<<i-pattern.size()-1<<endl;
		}
	}
	if(flag = 0)
		cout<<"-1"<<endl;
		
}


  
   /* void Zalgo(string str,int Z[])
    {
        int L=0,R=0,k;
        int len = str.length();
        for(int i=1;i<len;i++)
        {
            if(i>R)
            {
                L = R =i;
                while(R<len && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
            else
            {
                k = i-L;
                if(Z[k]<R-i+1)
                    Z[i] =Z[k];
                else
                {
                    L=R=i;
                    while(R<len && str[R-L] == str[R])
                        R++;
                    Z[i] = R-L;
                    R--;
                }
            }
        }
    }

      int strStr(string haystack, string needle) 
    {
        if(needle.length() == 0)
            return 0;
        string str = needle+"$"+haystack;
        int len = str.length();
        int Z[len];
        cout<<needle.length()<<endl;
        int flag=0;
        Zalgo(str,Z);
        for(int i=0;i<len;i++)
        {
        	cout<<Z[i]<<'\t';
            if(Z[i] == needle.length())
            {
                flag =1;
                cout<<endl;
                cout<<i-needle.length()-1<<endl;
                return i-needle.length()-1;
            }
        }
        if(flag ==0)
             return -1;
        
    }*/

int main()
{
	string text,pattern;
	getline(cin,text);
	//cout<<text<<endl;
	getline(cin,pattern);
	 strStr(text,pattern);
	//cout<<index<<endl;
}