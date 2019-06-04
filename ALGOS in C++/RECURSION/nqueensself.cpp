#include<iostream>
using namespace std;
// problem: given and NXN board, place n queens such that they do not cut each other
//mujhe sirf ek hi row sambhalni hai baki recursion smbhal lega
// har queen ko rkhne s pehle check krna h ki vo maregi toh nahi, yeh cheez recursion se hogi, keep a queen and let recursion do the work
//recursion should return whether or not was it successful to keep a queen there, hm logo ne rkhi thi and recursion successful hai th problem solve hogyi vnra hata lenge
//fucntion canplace m hm board and coordinates denge and bool value se uska success status puchenge
//agar har jgh fail hojae th not solvable and hence upar wali rani galat hai
//recursive funtion ek row lega jaha s vo shuru krega, ek board lega, board mtlb uski dimensions and return krega bool whether or not is it successful
bool canplace( char board[][100], int n, int r, int c)
{
	//check for column by for loop on board 
	//check for right diagonal
	//check for left diagonal
	//if present, return false for all
	//above comments are a blunder, do not do this, reason mentionaed below(LAW)
	for(int x=0; x<r; x++)
	{
		if(board[x][c]=='Q')
			return false;
	}
	int nextrow, nextcol;
	for(int up=1; up<n; up++)
	{
		nextrow=r-up;
		nextcol=c-up;
		if (nextrow<0 )
			break;
			if(nextcol>=0)
		if(board[nextrow][nextcol]=='Q')
			return false;
		nextcol=c+up;
		if(nextcol<n)
		if(board[nextrow][nextcol]=='Q')
			return false;
	}
	return true;

}
// LAW 1: always check that arrays' indices are within bound before accessing the array.
//X means khali and Q is queen
bool solvenqueen(char board[][100],int n, int r)
{
	//ab kuch hai hi nahi krne ko mtlb kam ho rkha h 
	if(r==n)
	{
		return true;
	}
	//lets try to place queen in row 
	for(int c=0; c<n; c++) {
		board[r][c]='X';
	}
	for(int c=0; c<n; c++)
	{
		// for each column we check
		bool check= canplace(board, n, r, c);
		//if check passes we place the queen
		if(check)
		{
			board[r][c]='Q';
			//place krne k bad status puchenge
			bool status= solvenqueen(board, n , r+1);
			//agar status pass hogaya th kam khatam, hm successful ho gaye hai
			if(status)
			{
				return true;
			}
			//varna rani hatani pdegi
			else
			{
					board[r][c]='X';
			}
		}	
	}

	//agar kuch hua hi nhi mtlb kuch bacha nhi th bahar ajao
	return false;
}
void outputmat(char mat[][100],int m, int n)
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
void clearboard( char board[][100], int n , int m)
{
	for(int r=0; r<m; ++r)
	{
		for(int c=0;c<n;++c)
		{
			board[r][c]='X';
		}
	}
}
int main()
{
	//const int n=10;
	//char board[n][n] wrong because n has to be a compile time constant but it does work it is wrong although if we define n as const not initialize
	// but define it's data type as const ye tb hi chalega!
	//char board[n][n];
	char board[100][100];
	int n;
	cin>>n;
	clearboard(board, n ,n);
	bool success= solvenqueen(board, n , 0);
	if(success)
	{
		outputmat(board, n , n);
	}
	else
	{
		cout<<"not possible";
		cout<<endl;
	}

}
