#include <iostream>
using namespace std;
int mincost(int n, int x, int y, int z)
{
	int dp[1000]={0}
	dp[0] =1;
	dp[1]=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(i%2==0)
		{
			dp[i] = min(dp[i/2]+x, dp[i-1] + y);
		}
		else
		{
			dp[i] = min(dp[(i+1)/2]+x+z, dp[i-1] + y);
		}
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	/* code */
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	int ans= mincost(n,x,y,z);
	return 0;
}