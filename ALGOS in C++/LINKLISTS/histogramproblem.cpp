#include<iostream>
#include<stack>
using namespace std;
int histogram(int arr[], int n)
{
	int best=-1;
	typedef pair<int, int> ii;
	stack<pair<int, int>> s;
	for(int i=0; i<=n; i++)
	{
		int y=i;
		int index=i;
		int cur= i==n? -1 : arr[i];
		while(s.empty() == false && s.top().first>cur)
		{
			ii previous = s.top(); s.pop();
			int height = previous.first;
			index= previous.second;
			int curarea=height*(y-index);
			best = max(best, curarea);
		}
		s.push(make_pair(cur, index ));
	}
	return best;
}
int main()
{
	/*for(every element +1)
	keep last element as -1
	agar sentinel hai toh y=n
	c is popped index
	area = y-c *pop()
	while(stack.empty() is false and stack ka top is greater than current element)
	compute area and pop and slect best area
	push curr with index of last pop*/
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	int ans=histogram(arr, n);
	cout<<ans;
}