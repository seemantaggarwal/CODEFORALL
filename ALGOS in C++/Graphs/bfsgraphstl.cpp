#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	unordered_map<int, list<int>> m;
	int n;
	cin>>n;
	v.assign(n, std::vector<int>())
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a,b;
		cin>>a>>b;
		m[a].push_back(b);
		b[b].push_back(a);
	}
			/* code */
	for(auto e : m)
	{
		cout<<e->first<<"->";
		for(auto en : e->second)
		{
			cout<<en<<" ";
		}
		cout<<endl;
	}

	
	return 0;
}