#include<iostream>
#include<sstream>
#include<cstring>
#include<cstdlib>
using namespace std;
int r=0;
int countpaths(int m, int n)
{
	if(n==0)
	{
		r++;
		return r;
	}
	if(n<0)
	{
		return r;
	}
	for(int i=1; i<m+1; ++i)
	{
		countpaths(m, n-i);
	}
	return r;
}
void paths(int m, int n,  string curr=" ")
{
	if(n==0)
	{
		cout<<curr<<"  ";
		return;
	}
	if(n<0)
	{
		return;
	}
	for(int i=1; i<m+1; ++i)
	{
		paths(m, n-i, curr+ to_string(i));
	}
}
int main()
{
	int n, m;
	cin>>n;	//dimension of board
	cin>>m; //no of faces of dice
	paths(m,n);
	int num= countpaths(m, n);
	cout<<"\n"<<"number of paths"<<num;
}