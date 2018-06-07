#include <bits/stdc++.h>

using namespace std;

void reversearr(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<'\t';
	}
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	vector<int> v(arr,arr+size);				//ARRAY TO VECTOR
	reverse(v.begin(),v.end());			//inbuilt stl
	//reversearr(arr,0,size-1);		/*function for reverse*/
	std::vector<int>:: iterator it;
	for(it=v.begin();it<v.end();it++)
	{
		cout<<*it<<endl;
	}
	printarray(arr,size); 
}