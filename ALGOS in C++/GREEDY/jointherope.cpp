#include<iostream>
#include <vector>
#include<algorithm>
#include <queue>
using namespace std;
int connecttheropes(int *ropes, int n)
{
	priority_queue<int , std::vector<int>, greater<int>> pq(ropes, ropes + ropes.size());
	int cost = 1;
	while(pq.size() > 1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		cost = cost + first + second;
		pq.push(first + second);
	}
	return cost;
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x;
		cin>>x;
		arr[i] = x;
	}
	cout<<connecttheropes(arr, n-1)<<endl;
	return 0;
}

