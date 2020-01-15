#include <iostream>
#include<cstring>
#include <vector>
#include<list>
using namespace std;
void longestcommon(char s1[], char s2[])
{
	int dp[101][101];
	int m=strlen(s1);
	int n = strlen(s2);
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
	int k = dp[m][n];
	vector<char> v;
	int i = m;
	int j = n;
	
	while(i>0 && j>0 && k>0)
	{
		if(dp[i-1][j]==dp[i][j-1] && dp[i][j]>dp[i][j-1])
		{
			v.push_back(s1[i-1]);
			i--;
			j--;
			k--;
		}
		else if( dp[i][j-1] == dp[i][j])
		{
			j--;
		}
		else
		{
			i--;
		}
	}
	for(int z = v.size()-1; z>=0; --z)
	{
		cout<<v[z];
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	char s1[100], s2[100];
	cin>>s1>>s2;
	longestcommon(s1,s2);
	return 0;
}
