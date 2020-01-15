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
	void dfshelper( T src, std::map<T, bool> &visited)
	{
		visited[src] = true;
		cout<<src<<" ";
		for(neighbor : m[src])
		{
			if(!visited[neighbor])
			{
				dfshelper(neighbor, visited);
			}
			
		}
	}
	void dfs( T src)
	{
		std::map<T, bool> visited;
		int component =1;
		dfshelper(src, visited);
		for(T i :m )
		{
			T check = i.first;
			if(!visited[check])
			{
				dfshelper(check, visited);
				component++;
			}
		}
	}
};
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}