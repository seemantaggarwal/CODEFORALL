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
	void dfshelper( T src, std::map<T, bool> &visited, list<T> &ordering)
	{
		visited[src] = true;
		for(neighbor : m[src])
		{
			if(!visited[neighbor])
			{
				dfshelper(neighbor, visited, ordering);

			}
			
		}
		ordering.push_front(src);
	}
	void dfstopological( T src)
	{
		std::map<T, bool> visited;
		list<T> ordering;
		for(auto i : m)
		{
			T node = i.first;
			if(!visited[T])
			{
				dfshelper(node, visited, ordering);

			}
		}
		for(T element : ordering)
		{
			cout<<element<<" ";
		}
	}
};
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}