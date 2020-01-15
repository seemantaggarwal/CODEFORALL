#include<iostream>
#include<list>
using namespace std;
class graph
{
public:
	int v;
	list<int> *l;
	graph(int vertice)
	{
		v=vertice;
		l = new list<int>[v];
	}
	void addedge(int u, int e)
	{
		l[u].push_back(e);
		l[e].push_back(u);
	}
	void dfshelper(int i, bool *visited, int &size)
	{
		visited[i] = true;
		size++;
		for(auto neighbor : l[i])
		{
			if(!visited[i])
			{
				dfshelper(neighbor, visited, size);
			}
		}
	}
	int dfs()
	{
		bool *visited = new bool[v];
		for (int i = 0; i < v; ++i)
		{
			/* code */
			visited[i]=false;
		}
		int totalways = v*(v-1)/2;
		for (int i = 0; i < v; ++i)
		{
			/* code */
			if(!visited[i])
			{
				int size = 0;
				dfshelper(i, visited, size);
				totalways - = (size*(size-1)/2);
			}
		}
		cout<<totalways;
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}