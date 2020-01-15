#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;
template <typename T>
class graph
{
	std::map<T, list<T>> m;
public:
	graph()
	{

	}
	void addedge(T u, T v, bool bider=true)
	{
		m[u].push_back(v);
		if(bider)
		{
			m[v].push_back(u);
		}
	}
	void printedges()
	{
		for(auto e : m)
		{
			cout<<e->first<<"->";
			for(auto en : e->second)
			{
				cout<<en<<" ";
			}
			cout<<endl;
		}
	}
	void topologicalsort()
	{
		queue<T> q;
		std::map<T, bool> visited;
		std::map<T, int> indegree;
		for(auto i : m)
		{
			T node = i.first;
			visited[node] = false;
			indegree[node] = 0;

		}
		for(auto i: m)
		{
			T u = i.first;
			for( T v : m[u])
			{
				indegree[v]++;
			}
		}
		for(auto i : m)
		{
			T node = i.first;
			if(indegree[node]==0)
			{
				q.push(node);
			}
		}
		while(!q.empty())
		{
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			for(auto neighbor : m[node])
			{
				indegree[neighbor]--;
				if(indegree[neighbor] == 0)
				{
					q.push(neighbor);
				}
			}
		}
	}
};
