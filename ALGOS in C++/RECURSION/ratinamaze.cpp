#include<iostream>
using namespace std;
void mazesolve(int board[][100], int n, int row, int col, int ans[][100])
{
	if(row==n-1 && col==n-1)
	{
		ans[row][col]=1;
		return;
	}
	else if(row==n-1)
	{
		if(board[row][col+1]!=1)
		{
			mazesolve(board, n, row-1, col+1,ans);
			ans[row][col]=0;
		}
		
		else
		{
		mazesolve(board, n, row, col+1,ans);
		ans[row][col]=1;
		}
	}
	else if(col==n-1)
	{
		if(board[row+1][col]!=1)
		{
			mazesolve(board, n, row+1, col-1,ans);
			ans[row][col]=0;
		}
		else
		{
		mazesolve(board, n, row+1, col, ans);
		ans[row][col]=1;
		}
	}
	else if(board[row+1][col]==1)
	{
		mazesolve(board, n,  row+1, col, ans);
		ans[row][col]=1;
	}
	else if(board[row][col+1]==1)
	{
		mazesolve(board, n,  row, col+1, ans);
		ans[row][col]=1;
	}

}
void inputmat(int board[][100], int n)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=0;j<n;j++)
		{
			cin>>board[i][j];
		}
	}
}
void inputansmat(int board[][100], int n)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=0;j<n;j++)
		{
			board[i][j]=0;
		}
		cout<<endl;
	}
}
void outputmat(int mat[][100],int m, int n)
{
	for(int r=0; r<m; ++r)
	{
		for(int c=0;c<n;++c)
		{
			cout<<mat[r][c];
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int board[100][100];
	inputmat(board, n);
	int ans[100][100];
	inputansmat(ans, n);
	mazesolve(board, n, 0 , 0, ans);
	outputmat(ans,n,n);
}
