#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	std::vector<int> v;
	v.push_back(10);
	for(int i=0; i<=7; ++i)
	{
		v.push_back(i);
	}
	for(int i=0; i<v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	v.pop_back();
	sort(v.begin(), v.end());
	cout<<v.capacity();
}
