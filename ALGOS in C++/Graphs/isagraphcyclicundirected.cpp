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
	bool iscyclic(T src)
	{
		std::map<T, bool> visited;
		std::map<T, int> parent;
		queue<T> q;
		q.push(src);
		visited[src] = src;
		parent[src] = src;
		while(!q.empty())
		{
			T node = q.front();
			q.pop();
			for(auto neighbor : m[node])
			{	
				if(visited[neighbor] && parent[node]!=neighbor)
				{
					return true;
				}
				else if(!visited[neighbor])
				{
					visited[neighbor]=true;
					parent[neighbor]= node;
					q.push(neighbor);
				}
			}
		}
		return false;
	}
};
