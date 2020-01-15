#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;
template <typename T>
class graph
{
	std::map<T, list<pair<T, int>>> m;
public:
	graph()
	{

	}
	void addedge(T u, T v, int dist, bool bider=true)
	{
		m[u].push_back(make_pair(v,dist));
		if(bider)
		{
			m[v].push_back(make_pair(u,dist));
		}
	}
	void printedges()
	{
		for(auto e : m)
		{
			cout<<e->first<<"->";
			for(auto en : e->second)
			{
				cout<<en.first<<" : "<<en.second<<" ";
			}
			cout<<endl;
		}
	}
	void djikstra(T src)
	{
		std::map<T, int> dist;
		for(auto j : m)
		{
			dist[j.first] = INT_MAX;
		}
		set<pair<int, T>> s;
		dist[src] = 0;
		s.insert(make_pair(0,src));
		while(!s.empty())
		{
			auto p = *(s.begin());
			T node = p.second;
			int nodedist = p.second;
			s.erase(s.begin());
			for(auto neighbor : m[node])
			{
				if(nodedist + neighbor.second < dist[neighbor.first])
				{
					T dest =  neighbor.first,
					auto f = s.find(make_pair(dist[dest], dest));
					if(f!=s.end())
					{
						s.erase(f);
					}
					dist[dest] = nodedist + neighbor.second;
					s.insert(make_pair(dist[dest],dest));
				}
			}
		}
		for(auto d: dist)
		{
			cout<<d.first<<" "<<d.second<<endl;
		}
	}

};
