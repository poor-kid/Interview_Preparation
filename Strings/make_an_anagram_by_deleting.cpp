
/*Input Format

The first line contains a single string, .
The second line contains a single string, .

Constraints

    It is guaranteed that and consist of lowercase English alphabetic letters (i.e., through ).

Output Format

Print a single integer denoting the number of characters you must delete to make the two strings anagrams of each other.

Sample Input

cde
abc

Sample Output

4
*/



#include <bits/stdc++.h>

using namespace std;

int makeanagrams(string a,string b)
{
    int len1 = a.length();
    int len2 = b.length();
    int len;
    if(len1>len2)
        len = len1;
    else
        len = len2;
    int count_arr[256] = {0};
    int i;
    for( i=0;i<len1&& i<len2;i++)
    {
        count_arr[a[i]]++;
        count_arr[b[i]]--;
    }
    
    while(i<len)
    {
        if(len1 == len)
        {
            count_arr[a[i]]++;
        }
        else
            count_arr[b[i]]--;
        i++;
    }
    int res = 0;
        
    for(int i=0;i<256;i++)
    {
        //cout<<count_arr[i]<<'\t';
        if(count_arr[i]!=0)
        {
            if(count_arr[i]<0)
                res = res+(-1)*count_arr[i];
            else
                res = res+count_arr[i];
        }
        
    }
    return res;
}


int main()
{
    string a;
    getline(cin, a);

    string b;
    getline(cin, b);
    int res = makeanagrams(a,b);
    cout<<res<<endl;

    return 0;
}
