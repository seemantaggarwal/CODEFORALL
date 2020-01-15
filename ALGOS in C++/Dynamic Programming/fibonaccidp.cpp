#include<iostream>
using namespace std;
int memo[1000];
int fib(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	if(memo[n]!=-1)
	{
		return memo[n];
	}

	int ans= fib(n-1) + fib(n-2);
	memo[n] = ans;
	return ans;
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		memo[i] = -1;
	}
	int ans = fib(n);
	return 0;
}