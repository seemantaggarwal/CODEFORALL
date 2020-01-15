#include <iostream>
#include <algorithm>
using namespace std;
class edge{
public:
	int source;
	int dest;
	int weight;


};
class set
{
public:
	int rank;
	int parent;
};
int find(set *s, int i)
{
	if(s[i].parent != i)
	{
		s[i].parent = find(set, s[i].parent);

	}
	return s[i].parent;
}
void unionf(set *s, int v1, int v2)
{
	int v1r = find(set,v1);
	int v2r = find(set, v2);
	if(set[v1r].rank < set[v2r].rank)
	{
		set[v1r].parent = v2r;
	}
	else if(set[v1r].rank > set[v2r].rank)
	{
		set[v2r].parent = v1r;
	}
	else
	{
		set[v2r].parent = v1r;
		set[v1r].rank++;
	}
}
bool comp(edge e1, edge e2)
{
	return e1.weight < e2.weight;
}
void kruskal(edge *input, int n, int e)
{
	sort(input, input+e, comp);
	edge *output = new edge[n-1];
	set *s = new set[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		s[i].rank = 0;
		s[i].parent = i;
	}
	int counter = 0;
	int i=0;
	while(counter<n-1)
	{
		edge curredge = input[i];
		int sp = find(s, curredge.source);
		int dp = find(s, curredge.dest);
		if(sp!=dp)
		{
			output[counter] = curredge;
			unionf(set,sp, dp);
			counter++;

		}
		i++;

	}
	for (int i = 0; i < n-1; ++i)
	{
		/* code */
		cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight;
		cout<<endl;
	}

}
int main(int argc, char const *argv[])
{
	/* code */
	int v, e;
	cin>>v>>e;
	edge *input = new edge[e];
	for (int i = 0; i < e; ++i)
	{
		/* code */
		int s, d, w;
		cin>>s>>d>>w;
		input[i].source = s;
		input[i].dest = d;
		input[i].weight = w;
	}

	return 0;
}