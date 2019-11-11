#include <iostream>
using namespace std;
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
	while(s<=e)
	{
		int mid = (s+e)/2;
		if(mid<e && arr[mid]>arr[mid+1])
		{
			cout<<arr[mid+1]<<"->"<<mid+1;
			break;
		}
		else if(mid>s && arr[mid]<arr[mid-1])
		{
			cout<<arr[mid-1]<<"->"<<mid-1;
			break;
		}
		if(a[s]>=a[mid])
		{
			e = mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return 0;
}
