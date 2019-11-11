#include<iostream>
using namespace std;
bool issorted(int *a, int n)
{
	if(n==0)
	{
		return true;
	}
	if(a[0]<a[1] && issorted(a+1,n-1))
	{
		return true;
	}
	else
		return false;

}
bool issortedself(int a[], int curr,int n)
{
	if(n==0 || curr==n)
	{
		return true;
	}
	if (a[curr]<a[curr+1] && issortedself(a, curr+1, n))
	{
		/* code */
		return true;
	}
	return false;
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
	bool ans=issorted(arr, n-1);
	cout<<ans<<endl;
	bool ans2=issortedself(arr, 0, n-1);
	cout<<ans2;
	return 0;
}
