#include<iostream>
#include <queue>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	int ans[n];
	stack<int> s;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		int curprice = arr[i];
		while(!s.empty() && arr[s.top()]<curprice)
		{
			s.pop();
		}
		int betterday = s.empty() ? 0 : s.top();
		int span = i - betterday;
		ans[i] = span;
		s.push(i);
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<ans[i];
	}
	return 0;
}