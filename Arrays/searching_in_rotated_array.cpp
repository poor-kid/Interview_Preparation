/*An element in a sorted array can be found in O(log n) time via binary search.
 But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand.
 So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.*/

#include <bits/stdc++.h>

using namespace std;

int search(int arr[],int l,int h,int key)
{
	if(l>h)				/*termination*/
		return -1;
	int mid = (l+h)/2;
	if(arr[mid] == key) /* if mid is the key*/ 
		return mid;
	if(l<mid && arr[l] <= arr[mid]) /* if first half is sorted NOTE: in rotated array either fst half or scnd hlf iwill be sorted*/
	{
		if(key>=arr[l] && key <= arr[mid]) /* if key is in the fst half*/
			return search(arr,l,mid-1,key);
		return search(arr,mid+1,h,key);	
	}
	if(key >= arr[mid] && key<=arr[h])	/*if fst not sorted then 2nd half will be sorted*/
		return search(arr,mid+1,h,key);
	return search(arr,l,mid-1,key);
}

int main()
{
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;
	int res = search(arr,0,n-1,key);
	if(res!=-1)
	{
		printf("element found at index: %d",res);
	} 
}