#include<iostream>
using namespace std;
int modulo(int a, int b, int m)
{
	if (b==0)
	{
		/* code */
		return 1;
	}
	else if (b%2==0)
	{
		/* code */
		int y= modulo(a,b/2,m);
		return (y*y)%m;
	}
	else
	{
		return ((b%m) * modulo(a,b-1,m))%m;
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	int a;
	int b;
	cin>>a;
	cin>>b;
	int m;
	cin>>m;
	int ans=modulo(a,b,m);
	return 0;
}