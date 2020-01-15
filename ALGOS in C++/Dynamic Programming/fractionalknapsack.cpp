#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
using namespace std;
bool comp(const pair<float,int> &a, const pair<float,int> &b)
{
	return (a.first > b.first);
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	int s;
	cin>>n>>s;
	float value[n], weight[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>value[i];
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>weight[i];
	}
	std::vector<pair<float, int>> v;
    for (int i = 0; i < n; ++i)
	{
		/* code */
		float valwe = weight[i]/value[i];
		v.push_back(make_pair(valwe, value[i]));

	}
	sort(v.begin(), v.end(), comp);
    int ans =0;
	auto it = v.begin();
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(((*it).first)*((*it).second) + ans <= s)
		{
			ans +=((*it).first)*((*it).second);
		}
		else
		{
			int rem = s-ans;
			int key=1;
			while(ans<=s && key<= ((*it).second) -1)
			{
				ans += ((*it).first)*key;
				key++;
			}
		}
		it++;
		if(((*it).first) + ans > s)
		{
			break;
		}
	}
	cout<<ans;
	return 0;
}