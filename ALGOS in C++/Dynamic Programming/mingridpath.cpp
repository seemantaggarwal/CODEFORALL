#include <iostream>
#include<algorithm>
using namespace std;
int mincost(int grid[][100], int row, int col)
{
	int dp[100][100] = {};
	dp[0][0] = grid[0][0];
	for(int i=1; i<col; i++){
		dp[0][i] = dp[0][i-1] + grid[0][i];
	}
	for(int i=1; i<row; i++){
		dp[i][0] = dp[i-1][0] + grid[i][0];
	}
	for (int i = 1; i < row; ++i)
	{
		/* code */
		for (int j = 1; j < col; ++j)
		{
			/* code */
			dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
		}
	}
	for (int i = 0; i < row; ++i)
	{
		/* code */
		for (int j = 0; j < col; ++j)
		{
			/* code */
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[row-1][col-1];
}
int main(int argc, char const *argv[])
{
	/* code */
	int row, col;
	cin>>row>>col;
	int mat[100][100];
	for (int i = 0; i < row; ++i)
	{
		/* code */
		for(int j=0; j<col; ++j)
		{
			cin>>mat[i][j];
		}
	}
	
	int ans= mincost(mat, row, col);
	cout<<ans;
	return 0;
}
