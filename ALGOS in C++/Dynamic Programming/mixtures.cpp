#include <iostream>
using namespace std;
int dp[100][100];
int a[100];
int sum(int a, int b)
{
	for(int i=a, i<=b; ++i)
	{
		ans+=a[i];
		ans%100;
	}
	return ans;
}
int mixtures(int i, int j)
{
	if(i>=j)
	{
		return 0;
	}
	if(dp[i][j]=-1)
	{
		return dp[i][j];
	}
	dp[i][j] = INT_MAX;
	for(int k=i; k<=e; ++k)
	{
		dp[i][j] = min(dp[i][j], mixtures(i,k) + mixtures(k+1, j) + sum(i,k)*sum(k+1, j));
	}
	return dp[i][j];
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0; i<n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i <=n; ++i)
		{
			/* code */
			for (int j=0; j<=n ; ++j)
			{
				/* code */
				dp[i][j]=-1;
			}
		}
		cout<<mixtures(0,n-1);
	}
	return 0;
}