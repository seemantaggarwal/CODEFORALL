#include <iostream>
#include<vector>
#include <queue>
using namespace std;
typedef pair<int, pair<int, int> > cp;
std::vector<int> mergearrays(std::vector<std::vector<int>> v)
{
	std::vector<int> result;
	priority_queue<cp, std::vector<cp>, greater < cp> > pq;
	for (int i = 0; i < v.size() ; ++i)
	{
		/* code */
		pq.push({arr[i][0], {i, 0}});
	}
	while(!pq.empty())
	{
		cp curr = pq.top();
		pq.pop();
		int x = curr.second.first;
		int y = curr.second.second;
		result.push_back(curr.first);
		if(y+1<arr[x].size())
		{
			pq.push({arr[x][y+1], {a,y+1}});
		}
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int k;
	cin>>k;
	std::vector< std::vector<int> > v(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		v[i] = std::vector<int>(k);
		for (int j = 0; j < k; ++j)
		{
			/* code */
			int a;
			cin>>a;
			v[i][j] = a;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < k; ++j)
		{
			/* code */
			cout<<v[i][j];
		}
		cout<<endl;
	}
	std::vector<<int> output = mergearrays(v);
	for(auto x:output)
	{
		cout<<x<<" ";
	}
	return 0;
}
