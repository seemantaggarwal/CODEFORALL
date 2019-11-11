#include <iostream>
using namespace std;
int tiling(int n)
{
	if(n<=0)
	{
		return 0;
	}
	if(n<4)
	{
		return 1;
	}
	if(n==4)
	{
		return 2;
	}
	return tiling(n-1) + tiling(n-4);
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ans = tiling(n);
	cout<<ans;
	return 0;
}