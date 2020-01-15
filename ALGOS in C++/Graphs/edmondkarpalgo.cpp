#include <bits/stdc++.h>
using namespace std;
bool bfs(int **residualcapacity, int source, int sink, int n, int *parent)
{
	bool visited[n];
	memset(visited, 0, sizeof(visited));
	queue<int> q;
	visited[source] = true;
	q.push(source);
	bool foundaugmentedpath = false;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int v = 0; v < n; ++v)
		{
			/* code */
			if(visited[v] == false && residualcapacity[u][v]>0 )
			{
				parent[v]=u;
				visited[v] = true;
				q.push(v);
				if(v==sink)
				{
					foundaugmentedpath = true;
					break;
				}
			}
		}
	}
	

	return foundaugmentedpath;

}
void printaugmentedpath(std::vector<std::vector<int>> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		for (int j = 0; j < v[i].size(); ++j)
		{
			/* code */
			cout<<v[i][j]<<" "
		}
		cout<<endl;
	}
}
int maxflow(int **capacity, int source, int sink, int v)
{
	int **residualcapacity = new int*[v];
	for (int i = 0; i < v; ++i)
	{
		/* code */
		residualcapacity[i] = new int[v];
	}
	int *parent = new int[1000];
	std::vector<std::vector<int>> v;
	int maxflowv = 0;
	while(bfs(residualcapacity, source, sink, v, parent))
	{
		std::vector<int> currpath;
		int flow = INT_MAX;
		int s = sink;
		while(s!=source)
		{
			v.push_back(s);
			int u = parent[s];
			if(flow>residualcapacity[u][s])
			{
				flow= residualcapacity[u][v];
			}
			v=u;
		}
	}
	v.push_back(currpath);
	

}
int main(int argc, char const *argv[])
{
	/* code */
	int v,e;
	cin>>v>>e;
	int **capacity = new int*[v];
	for (int i = 0; i < v; ++i)
	{
		/* code */
		capacity[i] = new int[v];
	}
	for (int i = 0; i < e; ++i)
	{
		/* code */
		int u,v,e;
		cin>>u>>v>>e;
		capacity[u][v] = e;
	}
	return 0;
}