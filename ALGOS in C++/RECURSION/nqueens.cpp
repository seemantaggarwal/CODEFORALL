#include <iostream>
using namespace std;
bool issafe(int board[][10],int i, int j, int n)
{
	for(int row=0; row<i; ++row)
	{
		if(board[row][j]=='Q')
		{
			return false;
		}
	}
	int x=i;
	int y=j;
	while(x>=0 && y>=0)
	{
		if(board[x][j]=='Q')
		{
			return false;
		}
		x--;
		y--;
	}
	x=i;
	y=j;
	while(x>=0 && y<n)
	{
		if(board[x][j]=='Q')
		{
			return false;
		}
		x--;
		y++;
	}
	return true;
}
bool solveboard(char board[][10], int i,int n)
{	
	if(i==n)
	{
		return true;
		for(int x=0;x<n;++x)
		{
			for (int j = 0; i < n; ++j)
			{
				/* code */
				cout<<board[x][j];
			}
			cout<<endl;
		}
	}
	for(int j=0< j<n;++j)
	{
		if(issafe)
		{
			board[i][j]='Q';
			bool queencond = solveboard(board,i+1,n);
			if(queencond)
			{
				return true;
			}
			board[i][j]='X';
		}

	}
	return false;
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	char board[n][10]={'X'};
	solveboard(board,0, n);

	return 0;
}