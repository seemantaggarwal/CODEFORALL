#include <iostream>
#include <bitset>
using namespace std;
bitset<30> col,d1,d2;
void solveboard(int r, int n, int &ans)
{
	if(r==n)
	{
		ans++;
		return;
	}
	for (int c = 0; c < n; ++n)
	{
		/* code */
		if(!col[c] && !d1[r-c+n-1] && !d2[r+c])
		{
			col[c]=d1[r-c+n-1] =d2[r+c]=1;
			solveboard(r+1,n,ans);
			col[c]=d1[r-c+n-1] =d2[r+c]=0;
		}
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	char board[n][10]={'X'};
	int ans=0;
	solveboard(r,n,ans);

	return 0;
}