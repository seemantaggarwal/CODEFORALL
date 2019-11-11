#include <iostream>
using namespace std;
int binsearch(int a[], int e, int key, int s=0)
{
	int mid = (s+e)/2;
	if(s>e)
	{
		return -1;
	}
	if(a[mid]<key)
	{
		return binsearch(a,e,key,mid+1);
	}
	else if(a[mid]==key)
		{
			return mid;
		}
	else
		{
			return binsearch(a,mid-1,key,s);
		}

}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	int s;
	cin>>s;
	int ans = binsearch(arr,n,s);
	cout<<ans;
	return 0;
}
