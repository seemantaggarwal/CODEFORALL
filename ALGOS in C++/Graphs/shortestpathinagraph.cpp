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
	void bfs(T src)
	{
		queue<T> q;
		map<T, int> dist;
		map<T,T> parent;
		q.push(src);
		dist[src] = 0;
		parent[src] = src;
		for(auto i : m)
		{
			dist[i->first]=INT_MAX;
		}
		while(!q.empty())
		{
			T node = q.front();
			cout<<node<<" ";
			q.pop();
			for(auto neighbor: m[node])
			{
				if(dist[neighbor]==INT_MAX)
				q.push(neighbor);
				dist[neighbor] += 1;
				parent[neighbor]=node;
			}
		}
		for(auto i: m)
		{
			T node = i.first;
			cout<<dist[node]<<" ";
		}
	}
};
