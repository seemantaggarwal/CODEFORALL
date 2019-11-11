#include <iostream>
using namespace std;
int linsearch(int arr[], int n, int s)
{
	if(n<0)
	{
		return -1;
	}
	if(arr[n]==s)
	{
		return n;
	}
	linsearch(arr,n-1,s);
		
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
	int ans = linsearch(arr, n-1,s);
	cout<<ans;
	return 0;
}
