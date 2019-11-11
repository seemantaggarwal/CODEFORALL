#include <iostream>
using namespace std;
bool ratinamaze(int maze[][10], int soln[][10], int i, int j, int n, int m)
{
	if(i==n-1 && j==m-1)
	{
		soln[i][j]=1;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < m; ++j)
			{
				/* code */
				cout<<soln[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	if(i>n || j>n)
	{
		return false;
	}
	if(maze[i][j]==-1)
	{
		return false;
	}
	soln[i][j]=1;
	bool rightsuccess=ratinamaze(maze,soln,i+1,j,n,m);
	bool downsucc=ratinamaze(maze,soln,i,j+1,n,m);
	soln[i][j]=0;
	if(rightsuccess || downsucc)
		return true;
	return false;
}
/*int countpaths(int maze[][10],int n, int m, int i, int j )
{
	if(i==n-1 && j==m-1)
	{
		cout<<
	}
}

void printpath(int maze[][10], int m , int n, int i , int j)
{
	if(i==n-1 && j==m-1)
	{
		for(int i=0; i<n;++i)
		{
			for (int j = 0; j < m; ++j)
			{
				/* code */
				/*cout<<maze[i][j];
			}
		}
		return;
	}
	if(maze[i+1][j]!=-1 && maze[i+2][j]!=-1 && maze[i+1][j+1]!=-1 && i+1<=n-1)
	{
		maze[i+1][j]=1;
		printpath(maze,m,n,i+1,j);	

	}
	else if(j+1<=m-1)
	{
		printpath(maze,m,n,i,j+1);	
	}
}*/
int  main(int argc, char const *argv[])
{
	/* code */
	int maze[10][10];
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=0; i<n;++i)
	{
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cin>>maze[i][j];
		}
	}
	int soln[10][10]={0};
	bool ans = ratinamaze(maze,soln,0,0,n,m);
	return 0;
}
