#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	unordered_map<string, int> m;
	m["mango"] = 100;
	m.insert(make_pair("apple", 120));
	if(m.count("apple")==1)
	{
		cout<<m["apple"];
	}
	if(m.count("guava")==0)
	{
		cout<<"does not exist";
	}
	if(m.find("mango") != m.end())
	{
		cout<<"present"<<f.second;
	}
	m.erase("mango");
	return 0;
}