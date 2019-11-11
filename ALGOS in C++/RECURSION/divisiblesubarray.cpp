#include<iostream>
#include <cstring>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	int prefixsum[n]={0};
	prefixsum[0]=1;
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
		sum+=a[i];
		sum%=n;
		sum = (sum+n)%n;
		prefixsum[sum]++;
	}
	return 0;
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int no=prefixsum[i];
		ans+=no*(no-1)/2;
	}
	cout<<ans;
}