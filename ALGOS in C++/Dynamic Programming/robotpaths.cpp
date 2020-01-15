#include <iostream>
#include<memory>
#include <stdio.h>
#include <string.h>
using namespace std;
int dpb[100][100];
int countpath(int m, int n)
{
	if(dpb[0][0]==-1)
	{
		return 0;
	}
	for(int j=0; j<m ; ++j)
	{
		if(dpb[0][j]==-1)
		{
			break;
		}
		dpb[0][j]=1;
	}
	for(int j=0; j<n ; ++j)
	{
		if(dpb[j][0]==-1)
		{
			break;
		}
		dpb[j][0]=1;
	}
	for(int i=1; i<m;++i)
	{
		for (int j=1 ; j<n ; ++j)
		{
			if(dpb[i][j]==-1)
			{
				continue;
			}
			dpb[i][j]=0;
			if(dpb[i][j-1]!=-1)
			{
				dpb[i][j]=dpb[i][j-1];
			}
			if(dpb[i-1][j] !=-1)
			{
				dpb[i][j] = dpb[i][j] + dpb[i-1][j];
			}
		}
	}
	if(dpb[m-1][n-1]==-1)
	{
		return 0; 
	}
	return dpb[m-1][n-1];
}
int robopaths(int mat[][100], int m, int n)
{

	int dp[100][100];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < m; ++i)
	{
		/* code */
		if(mat[i][0]==0)
		{
			break;
		}
		else
		{
			dp[i][0]=1;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(mat[0][i]==0)
		{
			break;
		}
		else
		{
			dp[0][i]=1;
		}
	}
	for (int i = 1; i < m; ++i)
	{
		/* code */
		for (int j = 1; j < n; ++j)
		{
			/* code */
			if(mat[i][j]==0)
			{
				dp[i][j]=0;
				++j;
				while(j<n)
				{
					dp[i][j] = dp[i-1][j];
					j++;
				}
			}
			else if(mat[i][j]!=0)
			{
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
	}
	for(int i=0;i<m;++i)
	{
		for(int j=0 ; j<n; ++j)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[m-1][n-1];
}
int main(int argc, char const *argv[])
{
	/* code */
	memset (dpb, 0,sizeof(dpb));
	int n;
	int m;
	cin>>m>>n;
	int mat[100][100];
	for (int i = 0; i < m; ++i)
	{
		/* code */
		for (int j = 0; j < n; ++j)
		{
			/* code */
			cin>>mat[i][j];
		}
	}
	int ans = robopaths(mat, m, n);
	cout<<ans;
	int p;
	cin>>p;
	for (int i = 0; i < p; ++i)
	{
		
		int x, y;
		cin>>x>>y;
		dpb[x-1][y-1]=-1;
	}
	int ans2 = countpath(m, n);
	cout<<ans2;
	return 0;
}
