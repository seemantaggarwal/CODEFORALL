
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin>>a>>b;
	int c = a^b;
	int count=0;
	while(c>0)
	{
		count+=(c&1);
		c= c>>1;
	}
	cout<<count;
	count=0;
	c = a^b;
	while(c>0)
	{
		count++;
		c= c&(c-1);
	}
	cout<<count;
}
