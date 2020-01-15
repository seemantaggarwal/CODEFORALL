#include<iostream>
#include<list>
#include<queue>
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
	bool isbipartite(int s)
	{
		queue<int> q;
		q.push(s);
		int *colors = new int[v];
		for (int i = 0; i < v; ++i)
		{
			/* code */
			colors[i]=-1;
		}
		colors[s]=0;
		bool ans = true;
		while(!q.empty() && ans)
		{
			int u = q.front();
			q.pop();
			for (auto v : l[u])
			{
				/* code */
				if(colors[v] == -1)
				{
					colors[v] = 1- colors[u];
					q.push(v);
				}
				else if(colors[v]==colors[u])
				{
					return false;
				}
			}
		}
		return true;
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}