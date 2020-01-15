#include <iostream>
#include <list>
#include<map>
using namespace std;
class graph
{
	int v;
	list<pair<int, int>> *l;
public:
	graph(int vertices)
	{
		v = vertices;
		l = new list<pair<int,int>>[v];
	}
	void addedge(int u, int v, int w, bool bider=true)
	{
		l[u].push_back(make_pair(v,w));
		if(bider)
		{
			l[v].push_back(make_pair(u,w));
		}
	}
	int dfshelper(int node, bool *visited, int *count, int &ans)
	{
		visited[node] = true;
		count[node] = 1;
		for(auto neighbor : l[node])
		{
			int idx = neighbor.first;
			if(!visited[idx])
			{
				count[node]+=dfshelper(v, visited, count);
				int s = count[idx];
				int edgecost = neighbor.second;
				ans+=2*min(s, v-s)*edgecost;
			}
		}
		return count[node];

	}
	void dfs()
	{
		bool *visited = new bool[v];
		for (int i = 0; i < v; ++i)
		{
			/* code */
			visited[i]=0;
		}
		int *count = new int[v]{0};
		int ans = 0;
		dfshelper(0, visited, count, ans);
	}
}
int main(int argc, char const *argv[])
{
	/* code */

	return 0;
}