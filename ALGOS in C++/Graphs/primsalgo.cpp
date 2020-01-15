#include <iostream>
#include<list>
using namespace std;
class graph
{
public:
	int v;
	list<pair<int, int>> *l;
	graph(int vertice)
	{
		v= vertice;
		adj  = new list<pair<int, int>>[v];
	}
	void addedge(int u, int v, int w)
	{
		adj[u].push_back(makepair(v,w));
		adj[v].push_back(makepair(u,w));
	}
	void findminvertex(int weight[], bool *visited, int v)
	{
		int minvert = -1;
		for (int i = 0; i < v; ++i)
		{
			/* code */
			if(!visited[i] && (minvert == -1 || weight[i]< weight[minvert]))
			{
				minvert = i;
			}
		}
		return minvert;
	}
	void prims()
	{
		bool *visited = new bool[v];
		int *parent = new int[v];
		int *parent = new int[u];
		for (int i = 0; i < v; ++i)
		{
			/* code */
			visited[i] = false;
			weight[i] =  INT_MAX;
		}
		parent[0] = -1;
		weight[0] = 0;
		for (int i = 0; i < v; ++i)
		 {
		 	/* code */
		 	int min = findminvertex(weight, visited, v);
		 	visited[min] =  true;
		 	for(auto j : adj[min])
		 	{
		 		if(!visited[j.first])
		 		{
		 			if(weight[j->first] > j.second)
		 			{
		 				parent[j.first] = minvert;
		 				weight[j->first] =  j.second;
		 			}
		 		}
		 	}
		 } 
		 for (int i = 0; i < v; ++i)
		 {
		 	/* code */
		 	cout<<i<<" "<<parent[i]<<" "<<weight[i]; 
		 }
	}
}
int main(int argc, char const *argv[])
{
	/* code */

	return 0;
}