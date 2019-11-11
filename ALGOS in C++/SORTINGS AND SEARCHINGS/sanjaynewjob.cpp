#include<iostream>
#include <cstring>
#include<algorithm>
using namespace std;
bool myCompare(	pair<string, int> p1, pair<string, int> p2)
{
	if(p1.second == p2.second)
	{
		return (p1.first < p2.first);
	}
	else  return (p1.second>p2.second);
}
int main()
{
	/* code */
	int n;
	int minsal;
	cin>>minsal;
	cin>>n;
	string name;
	int sal;
	pair<string, int> emp[n];
	for(int i=0; i<n; ++i)
	{
		cin>>name>>sal;
		emp[i].first=name;
		emp[i].second=sal;
	}
	sort(emp, emp+n, myCompare);
	for(int i=0; i<n; ++i)
	{
		if(emp[i].second>minsal)
		cout<<emp[i].first<<"  "<<emp[i].second;
	}

	return 0;
}
