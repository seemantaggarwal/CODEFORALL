#include <iostream>
using namespace std;
int memo[1000] = {-1};
int maxprofit( int p[], int n)
{
	if(n==0)
	{
		return 0;
	}
	if(memo[n] !=-1)
	{
		return memo[n];
	}
	int best = 0;
	for(int  i = 1; i<=len ; ++i)
	{
		int netprofit = p[i] + maxprofit(p, n-i);
		best = max(best, netprofit);
	}
	memo[n] = best;
	return best;
}
int maxprofitdp(int p[], int n)
{
	if(n==0)
	{
		return 0;
	}
	int dp[1000]={0};
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		int best = 0;
		for (int j=1; j <=i ; ++j)
		{
			/* code */
			best =max(best, arr[j] + dp[i-j]);
		}
		dp[i] = best;
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	/* code */
	int p[100];
	int totallen;
	cin>>totallen;
	for (int i = 1; i <= totallen; ++i)
	{
		/* code */
		cin>>p[i];
	}
	int ans = maxprofit(p, totallen);
	return 0;
}
