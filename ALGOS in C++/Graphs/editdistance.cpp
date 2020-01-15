#include <iostream>
using namespace std;
int editdist(char inp[], char out[])
{
	int dp[101][101];
	int m= strlen(inp);
	int n = strlen(out);
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		dp[0][i] = dp[0][i-1] + 1; 
	}
	for (int i = 1; i <= m; ++i)
	{
		/* code */
		dp[i][0] = dp[j-1][0] + 1;
	}
	for (int i = 1; i <= m; ++i)
	{
		/* code */
		for (int j = 1; j <= n; ++j)
		{
			/* code */
			int q1 = dp[i-1][j-1] ;
			int q2 = dp[i-1][j];
			int q3 =  dp[i][j-1];
			dp[i][j] = min(q1, min(q2,q3)) + (inp[i-1] !=  out[j-1]);
		}
	}
	return dp[m][n];
}
int main(int argc, char const *argv[])
{
	/* code */
	char inp[100], out[100];
	cin>>inp>>out;
	int ans = editdist(inp, out);
	return 0;
}