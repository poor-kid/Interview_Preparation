/*Given an array, only rotation operation is allowed on array. We can rotate the array as many times as we want. Return the maximum possbile of summation of i*arr[i].

Example:

Input: arr[] = {1, 20, 2, 10}
Output: 72
We can 72 by rotating array twice.
{2, 10, 1, 20}
20*3 + 1*2 + 10*1 + 2*0 = 72

Input: arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
Output: 330
We can 330 by rotating array 9 times.
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
0*1 + 1*2 + 2*3 ... 9*10 = 330

but IT IS O(n^2) we can do it in O(n)
*/


#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp= arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void rotatearray(int arr[],int n,int d)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);

}

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"rotated array: "<<arr[i]<<endl;
	}
}

int main()
{
	int n,max =0,sum;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		sum =0;
		rotatearray(arr,n,1);
		for(int j=0;j<n;j++)
		{
			sum = sum+arr[j]*j;
			if(max<=sum)
			{
				//printarray(arr,n);
				max = sum;
			}

		}
		
	}
	//printarray(arr,n);
	cout<<"the maimum sum is: "<<max<<endl;
}