#include <iostream>
#include <map>
#include <list>
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
};
