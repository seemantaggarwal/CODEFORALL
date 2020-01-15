#include <iostream>
using namespace std;
int dp[100]={0};
int catalan(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(dp[n]!=0)
	{
		return dp[n];
	}
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		ans+= catalan(n-i)*catalan(i-1);
	}
	dp[n]=ans;
	return ans;
}
int main(int argc, char const *argv[])
{
	/* code */
	for(int i=0;i<=5;++i)
	{
		cout<<catalan(i);
	}
	return 0;
}