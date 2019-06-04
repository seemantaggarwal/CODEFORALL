#include<iostream>
#include<math.h>
using namespace std;
bool canplace(int board[][3],int n, int r, int c, int num)
{
	for(int i=0; i<3;i++)
	{
		if(board[i][c]==num)
			return false;
	}
	for(int i=0; i<3;++i)
	{
		if(board[r][i]==num)
			return false;
	}
	int sboardr=0;
	int sboardc=0;
	sboardc=c;
	sboardr=r;
	for(int i=sboardr; i<sboardr+3;i++)
	{
		for(int j=sboardc;j<sboardc+3;j++)
		{
			if(board[i][j]==num)
				return false;
		}
	}
	return true;

}
bool solveboard(int board[][3], int n , int r, int c)
{
	if(r==n)
	{
		return true;
	}
	//ensuring c is in bound
	if(c==n)
	{
		return solveboard(board, n , r+1, 0);
	}
	//if the cell is fixed cell
	if(board[r][c]!=0)
	{
		return solveboard(board, n , r, c+1);
	}
	//if the cell is not fixed cell
	for(int num=1; num<=n; ++num)
	{
		bool check= canplace(board, n, r, c, num);
		if(check)
		{
			board[r][c]=num;
			bool status= solveboard(board, n , r, c+1);
			if(status)
			{
				return true;
			}
			else
			{
					board[r][c]=0;
			}
		}
	}
	/*if(r==n)
	{
		return true;
	}
	for(int c=0; c<n; ++c)
	{
		board[r][c]=0;
	}
	for(int c=0; c<n; c++)
	{	
		int num=1;
		
		if(check)
		{
			board[r][c]=n;
			bool status= solveboard(board, n , r+1);
			if(status)
			{
				return true;
			}
			else
			{
					board[r][c]=0;
					num++;
			}
		}	
	}*/
	return false;
}
void outputmat(int mat[][3],int m, int n)
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
void inputmat(int board[][3])
{
	for(int i=0; i<3; ++i)
	{
		for(int j=0;j<3;j++)
		{
			cin>>board[i][j];
		}
	}
}
void clearboard( int board[][3], int n , int m)
{
	for(int r=0; r<m; ++r)
	{
		for(int c=0;c<n;++c)
		{
			board[r][c]=0;
		}
	}
}
int main()
{
	int board[3][3];
	clearboard(board, 3 ,3);
	inputmat(board);
	bool success= solveboard(board,3,0,0);
	if(success)
	{
		outputmat(board, 3 , 3);
	}
	else
	{
		cout<<"can't solve";
	}
}
