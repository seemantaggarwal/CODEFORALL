#include <iostream>
using namespace std;
const int inf= (int)1e9;
int memo[10000] = {-1};
int reducenum(int n)
{
	if(n==1) return 0;
	int q1 = inf, q2 = inf, q3 = inf;
	if(memo[n]!=-1)
		return memo[n];
	if(n%3==0) q1 = 1 + reducenum(n/3);
	if(n%2) q2 = 1 +reducenum(n/2);
	q3 =  1+reducenum(n-1);
	memo[n] = min(q1,min(q2,q3));
	return memo[n];

}
int reducenumdp(int n)
{
	int dp[1000];
	dp[0] =0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	for (int i = 4; i < =n; ++i)
	{
		/* code */
		int q1 = inf;
		int q2 = inf;
		int q3 = inf;
		if(i%3==0) q1 = 1 + dp[i/3];
		if(i%2==0) q2 = 1 + dp[i/2];
		q3 = 1 + dp[i-1];
		dp[i] = min(q1,min(q2,q3));
	}
	return dp[n];
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ans = reducenum(n);
	return 0;
}