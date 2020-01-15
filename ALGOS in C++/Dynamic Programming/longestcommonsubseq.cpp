#include <iostream>
#include<cstring>
using namespace std;
int longestcommon(char s1[], char s2[])
{
	int dp[101][101];
	int m=strlen(s1);
	int n =  strlen(s2);
	for (int i = 0; i <= m; ++i)
	{
		/* code */
		dp[0][i] = 0;
	}
	for (int i = 0; i <= n; ++i)
	{
		/* code */
		dp[i][0] = 0;
	}
	for (int i = 1; i <= m; ++i)
	{
		/* code */
		for (int j=1; j <= n; ++j)
		{
			/* code */
			int q=0;
			if(s1[i-1]==s2[j-1])
			{
				q = 1 + dp[i-1][j-1];
			}
			else
			{
				q = max(dp[i-1][j],dp[i][j-1]);
			}
			dp[i][j] = q;

		}
	}
	return dp[m][n];
}
int main(int argc, char const *argv[])
{
	/* code */
	char s1[100], s2[100];
	cin>>s1>>s2;
	int ans= longestcommon(s1,s2);
	cout<<ans;
	return 0;
}
