#include<iostream>
#include<cstring>
using namespace std;
//just haven't used the value of matrices, use the values in place of row, col as mat[index][index]
int countmazepath(int row, int col)
{
	if(row==1 || col==1)
	{
		return 1;
	}
	
	return mazepath(row-1, col) + mazepath(row, col-1) + mazepath(row-1, col-1) ;

}
int mazepath(int n, int row, int col, string curr=" ")
{
	if(row==n-1 && col==n-1)
	{
		cout<<curr;
	}
	else if(row==n-1)
	{
		mazepath(n, row, col+1, curr+to_string(row));
	}
	else if(col==n-1)
	{
		mazepath(n, row+1, col, curr+to_string(col));
	}
	else
	{
		mazepath(n, row+1, col, curr+to_string(col));
		mazepath(n, row, col+1, curr+to_string(row));
		mazepath(n, row+1, col+1, curr+to_string(row));
	}
}
int main()
{
	int n;
	cin>>n;
	int mat[n][n];
	int row=0;
	int col=0;
	int ans=countmazepath(n, n);
	mazepath(n, row, col);
	cout<<ans;

}