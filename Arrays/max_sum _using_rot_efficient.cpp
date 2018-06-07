/*Let us calculate initial value of i*arr[i] with no rotation
R0 = 0*arr[0] + 1*arr[1] +...+ (n-1)*arr[n-1]

After 1 rotation arr[n-1], becomes first element of array, 
arr[0] becomes second element, arr[1] becomes third element
and so on.
R1 = 0*arr[n-1] + 1*arr[0] +...+ (n-1)*arr[n-2]

R1 - R0 = arr[0] + arr[1] + ... + arr[n-2] - (n-1)*arr[n-1]

After 2 rotations arr[n-2], becomes first element of array, 
arr[n-1] becomes second element, arr[0] becomes third element
and so on.
R2 = 0*arr[n-2] + 1*arr[n-1] +...+ (n?1)*arr[n-3]

R2 - R1 = arr[0] + arr[1] + ... + arr[n-3] - (n-1)*arr[n-2] + arr[n-1]

If we take a closer look at above values, we can observe 
below pattern

Rj - Rj-1 = arrSum - n * arr[n-j]

Where arrSum is sum of all array elements, i.e., 

arrSum = ∑ arr[i]
        i<=0<=n-1 */

#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[],int start,int end)
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

void rotate(int arr[],int n,int d)
{
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rotate(arr,n,1);
	int sum=0,currval = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum+arr[i];
		currval = currval + (i*arr[i]);
		
	}
	int max = currval;
	for(int i=1;i<n;i++)
	{
		currval = currval+ sum - (n*arr[n-i]);
		if(currval>=max)
		{
			max = currval;
		}
	}
	cout<<"ma value is : "<<max<<endl;

}