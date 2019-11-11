#include <iostream>
using namespace std;
int searchin(int a[], int s, int e, int key)
{
	if(s>e)
	{
		return -1;
	}
	int mid = (s+e)/2;
	if(a[mid]==key)
	{
		return mid;
	}
	else if(a[s]<=a[mid])
	{
		if(key>=a[s] && key<=a[mid])
		{
			return searchin(a,s,mid-1,key);
		}
		else
		{
			return(a,mid+1,e,key);
		}
	}
	else if(key>=mid &&key<=a[e])
	{
		return searchin(a,mid+1,e,key);
	}
	else
	{
		return searchin(a,s,mid-1,key);
	}
}
int main()
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	int num;
	cin>>num;
	int s=0;
	int e = n-1;
	int ans = searchin(arr,s,e,num);
	cout<<arr[ans]<<ans;
	return 0;
}
