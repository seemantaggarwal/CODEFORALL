#include <iostream>
#include <map>
#include<algorithm>
#include<vector>
using namespace  std;
bool comp(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first < b.first); 
} 
int ans(int size[], int price[], int n, int s)
{
	  vector<pair<int, int>> vect;
  
    // Entering values in vector of pairs 
    for (int i=0; i<n; i++) 
        vect.push_back( make_pair(size[i],price[i]) ); 
    sort(vect.begin(), vect.end(), comp);
	int w = vect.size();
	int dp[w+1][s+1];
	for(int i=0; i<=s;++i)
	{
		dp[0][i] = 0;
	}
	for(int i=0; i<=w;++i)
	{
		dp[i][0] = 0;
	}
	auto it = vect.begin();
	for(int i=1; i<=w; ++i)
	{
		for(int j=1; j<=s; ++j)
		{
			if(j - it->first > 0)
				dp[i][j] = max(dp[i-1][j], dp[i-1][j - it->first] + it->second);
			else
				dp[i][j] = dp[i-1][j];
		}
		it++;
	}
	return dp[w][s];
}
int main(int argc, char const *argv[])
{
	/* code */
	int n,s;
	cin>>n>>s;
	int size[n], value[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>size[i];
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>value[i];
	}
	int answ = ans(size, value, n, s);
	cout<<answ;
	return 0;
}