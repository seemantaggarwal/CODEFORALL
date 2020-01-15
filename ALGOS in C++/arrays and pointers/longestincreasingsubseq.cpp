#include <iostream>
using namespace  std;
int longestinc(int a[], int n)
{
	int dp[n+1] = {0};
	dp[0] = 1;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		dp[i]= 1;
		for(int j=0; j<i; ++j)
		{
			if(arr[i]>arr[j] && dp[i] < dp[j] +1)
			{
				dp[i] = dp[j] +1;
			}
		}
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	int ans = longestinc(a, n);
	cout<<ans;
	return 0;
}
