#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	queue<ch> q;
	unordered_map <char, int> map;
	char ch;
	cin>>ch;
	while(ch!= '.')
	{
		q.push(ch);
		mp[ch]++;
		while(!q.empty())
		{
			if(mp[q.front() - 'a'] >1)
			{
				q.pop();
			}
			else
			{
				cout<<q.front();
				break;
			}
		}
		cin>>ch;
	}
	return 0;
}