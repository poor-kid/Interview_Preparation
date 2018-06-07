#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x[] = {10,20,30,40};
	int y[] = {10,20,30,40};
	int *a = &x[0];
	int *b = &y[0];
	 a++;
	 cout<< ++*b;
	 cout<<*a++;
	 b++;
	 a++;
	 cout<<*(--b);
	 cout<<(*a--);
	 *a = *(--b) + (*a--);
	 cout<<*a;
	 b++;
	 *b = *(--a) + (++*b);
	 cout<<*b;

}