#include <iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	long long int n;
	cin>>n;
	map<long long int, long long int> m;
	long long int x;
	long long int y;
    long long int count = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>x;
		cin>>y;
        if(m.find(x)!=m.end())
		{
            count++;
            if(m.find(x)->second > y)
                m[x] = y;
        }
        else
        {
             m[x] = y;
        }
	}
	std::map<long long int, long long int>::iterator it = m.begin();
	long long int start = it->first;
    long long int end= it->second;
	long long int sum = it->first + it->second;
	int i=1;
	++it;
	while(it != m.end())
	{
        if( sum < it->first - it->second)
		{
			 sum = it->first + it->second;
             start = it->first;
             end= it->second;
		}
		else
		{
			count++;
		}
		++it;
	}
	cout<<count<<" ";
	return 0;
}