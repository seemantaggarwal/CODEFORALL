#include <iostream>
using namespace std;
long long dp[10000][2];
long long noofbinarystring(int n, int lastdigit = 0)
{
	if (n == 0)
      return 0;
    if (n == 1) {
    if (lastdigit)
         return 1;
      else
         return 2;
   }
   if(dp[n][lastdigit]!=0)
   {
   		return dp[n][lastdigit];
   }
   	if (lastdigit == 0)
      dp[n][0]= noofbinarystring(n - 1, 0) + noofbinarystring(n - 1, 1);
   	else
      dp[n][1]= noofbinarystring(n - 1, 0);
    return dp[n][lastdigit];
}
//iterative
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	long long ans = noofbinarystring(n);
	cout<<ans;
	int a[n+2], b[n+2];
	a[1] = 1;
	b[1]=1;
	for(int i=2; i<=n; ++i)
	{
		a[i] = b[i-1] + a[i-1];
		b[i] = a[i-1];
	}
	cout<<endl<<a[n]+b[n];
	return 0;
}
