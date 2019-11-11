#include <iostream>
using namespace std;
int lastin(int arr[], int n, int m)
{
	if(n==-1)
	{
		return -1;
	}
	if(arr[n]==m)
	{
		return n;
	}
	return lastin(arr, n-1,m);
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
	int m;
	cin>>m;
	int index=lastin(arr,n-1,m);
	cout<<index<<" ";
	return 0;
}