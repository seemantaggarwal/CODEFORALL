#include<iostream>
#include <cmath>
using namespace std;
bool canplace(int mat[][9], int i, int j, int n, int num)
{
	for(int x=0;x<n;++x)
	{
		if(mat[i][x]==num||mat[x][j]==num)
			return false;
	}
	int rn = sqrt(n);
	int sx= (i/rn)*rn;
	int sy = (j/rn)*rn;
	for(int x=sx; x<sx+rn; x++)
	{
		for(int y=sy; y<sy+rn; y++)
		{
			if(mat[x][y]==num)
			{
				return false;
			}
		}
	}
	return true;
}
bool sudoku(int mat[][9],int i, int j, int n)
{
	if(i==n)
	{
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for(int j=0;j<n;++j)
			{
				cout<<mat[i][j];
			}
		}
		return true;
	}
	if(j==n)
	{
		return sudoku(mat,i+1,0,n);
	}
	if(mat[i][j]!=0)
	{
		return sudoku(mat,i,j+1,n);
	}
	for(int num=1;num<=9;num++)
	{
		if(canplace(mat,i,j,n ,num))
		{
			mat[i][j]=num;
			bool couldwesolve = sudoku(mat,i,j+1,n);
			if(couldwesolve)
			{
				return true;
			}
		}

	}
	mat[i][j]=0;
	return false;
}
int main(int argc, char const *argv[])
{
	/* code */
	int board[9][9]={0};
	for (int i = 0; i < 9; ++i)
	{
		/* code */
		for (int j = 0; i < 9; ++j)
		{
			/* code */
			cin>>board[i][j];
		}
	}
	return 0;
}