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
	int bfs(T src,  T dest)
	{
		queue<T> q;
		map<T, int> dist;
		map<T,T> parent;
		q.push(src);
		dist[src] = 0;
		parent[src] = src;
		for(auto i : m)
		{
			dist[i->first]=INT_MAX;
		}
		while(!q.empty())
		{
			T node = q.front();
			cout<<node<<" ";
			q.pop();
			for(auto neighbor: m[node])
			{
				if(dist[neighbor]==INT_MAX)
				q.push(neighbor);
				dist[neighbor] += 1;
				parent[neighbor]=node;
			}
		}
		T temp = dest;
		while(temp != src)
		{
			cout<<temp<<"  ";
			temp = parent[temp];
		}
		return dist[dest];
	}
};
int main(int argc, char const *argv[])
{
	/* code */
	graph<int> g;
	int board[50] = {0};
	board[2]=13;
	board[5]=2;
	board[9]=18;
	board[18]=11;
	board[17]=-13;
	board[20]=-14;
	board[24]=-8;
	board[25]=-10;
	board[32]=-2;
	board[34]=-22;
	for (int i = 0; i < 36; ++i)
	{
		/* code */
		for(d=1; d<=6; ++d)
		{
			v=u+d+board[u + d];
			g.addedge(u,v, false);
		}
	}
	g.bfs(0,36);
	return 0;
}