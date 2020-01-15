#include<iostream>
using namespace std;
int n, m, a[200], b[200];
int dp[1000][1000][8];
int longest(int i, int j, int k)
{
	if(i==n || j==m)
	{
		return 0;
	}
	if(dp[i][j][k]!=-1)
	{
		return dp[i][j][k];
	}
	int res = 0;
	if(a[i]==b[j])
	{
		res = 1 + longest(i+1, j+1, k);
	}
	else
	{
		if(k>0)
		{
			res = 1 + longest(i+1, j+1, k-1);
		}
		res = max(res, longest(i,j+1,k));
		res = max(res, longest(i+1,j, k));
	}
	dp[i][j][k] = res;
	return res;
}
int main(int argc, char const *argv[])
{
	/* code */
	memset(dp,-1, sizeof(dp));
	cinn>>m>>n;
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>b[i];
	}
	int k;
	cin>>k;
	int ans = longest(0,0,k);
	cout<<ans;
	return 0;
}