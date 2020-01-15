#include <iostream>
#include <cstring>
using namespace std;
int memo[100][100];
int maxprofit(int arr[], int be, int en, int year)
{
	if(be>n)
	{
		return 0;
	}
	if(memo[beg][end]!=-1)
	{
		return memo[be][en];
	}
	int q1 = arr[be]*year + maxprofit(arr, beg+1, en, year+1);
	int q2 = arr[en]*year  + maxprofit(arr, beg, en-1, year+1);
	int ans = max(q1,q2);
	memo[be][en] = ans;
	return ans;
}
int maxprofitdp(int arr[], int n)
{
	int dp[100][100] = {};
	int year = n;
	for (int i = 1; i <= n ; ++i)
	{
		/* code */
		dp[i][i] = year*arr[i];
	}
	for(int i=2; i<=n ; ++i)
	{
		int str = 0;
		int end = n-i;
		while(str < = end)
		{
			int endofwin = str + i -1 ;
			dp[str][endofwin] = max(arr[str] *year + dp[str+1][endofwin], arr[endofwin]*year + dp[str][endofwin-1]);
			++str;
		}
		--year;
	}
	return dp[0][n-1];
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
	memset(memo, -1, sizeof(memo));
	int ans = maxprofit(arr, 0, n-1, 1);
	return 0;
}