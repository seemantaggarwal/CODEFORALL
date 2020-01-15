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
	bool iscyclicdfshelper( T node, std::map<T, bool> &visited, T parent)
	{
		visited[node] = true;
		for(auto neighbor : m[node])
		{
			if(!visited[neighbor])
			{
				bool cycled = iscyclicdfshelper(neighbor, visited, node);
					if(cycled)
				{
					return true;
				}
			}
			else if(neighbor!=parent)
			{
				return true;
			}
			
		}
		return false;
	}
	bool iscyclicdfs()
	{	
		std::map<T, bool> visited;
		for(auto i : m)
		{
			T node = i.first;
			if(!visited[node])
			{
				 bool ans = iscyclicdfshelper(node, visited, node);
			}
			if(ans == true)
			{
				return true;
			}
		}
		return false;
	}
};
