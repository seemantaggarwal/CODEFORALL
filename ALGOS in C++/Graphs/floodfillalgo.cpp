#include <iostream>
using namespace std;
int r;
int c;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
void floodfill(char mat[][50],int i, int j, char ch, char color)
{
	if(i<0 || j<0 || i>=c || j>=r)
	{
		return;
	}
	if(mat[i][j]!==ch)
	{
		return;
	}
	mat[i][j] = color;
	for(int k = 0; k<4; ++k)
	{
		floodfill(mat, i+dx[k], j+ dy[k], ch, color);
	}
}
int main()
{
	cin>>r>>c;
	char input[15][50];
	for (int i = 0; i < r; ++i)
	{
		/* code */
		for (int j = 0; i < c; ++j)
		{
			/* code */
			cin>>input[i][j];
		}
	}
	int x,y;
	cin>>x;
	cin>>y;
	floodfill(mat, x,y,'.', 'r' );
	for (int i = 0; i < r; ++i)
	{
		/* code */
		for (int j = 0; i < c; ++j)
		{
			/* code */
			cout<<input[i][j];
		}
	}

}