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
	bool dfshelper(T node, std::map<T, bool> &visited, std::map<T, bool> &instack)
	{
		visited[node] = true;
		instack[node] = true;
		for(auto neighbor : m[node])
		{
			if((!visited[neighbor] && iscyclic(neighbor, visited, instack) || (instack[neighbor])))
			{
				return true;
			}

		}
		instack[node]=false;
		return false;
	}
	bool iscyclic()
	{
		std::map<T, bool> visited;
		std::map<T, bool> instack;
		for(auto i : m)
		{
			T node = i.first;
			if(!visited[node])
			{
				bool cyclepresent = dfshelper(node, visited, instack);	
				if(cyclepresent)
				{
					return true;
				}
			}
		}
		return false;

	}
};
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}