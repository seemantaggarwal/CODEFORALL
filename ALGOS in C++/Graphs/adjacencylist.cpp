#include <iostream>
#include <unordered_map>
#include<list>
using namespace std;
class graph
{
	int v;
	list <int> *l;
public:
	graph(int data)
	{
		v=data;
		l = new list<int>[v];
	}
	void addedge(int u, int v , bool bider = true)
	{
		l[u].push_back(v);
		if(bider)
		{
			l[v].push_back(u);
		}
	}
	void printlist()
	{
		for(int i=0; i<v;++i)
		{
			cout<<i<<"->";
			for(int vertex: l[i])
			{
				cout<<vertex;
			}
			cout<<endl;
		}
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}