#include <iostream>
using namespace std;
int powerfn(int a, int b)
{
	if(b==0)
	{
		return 1;
	}
	return a*powerfn(a,b-1);
}
int fastpower(int a, int b)
{
	if(b==0)
	{
		return 1;
	}
	int smallans = fastpower(a,b/2);
	smallans *= smallans;
	if(b&1)
	{
		return a*smallans;
	}
	else
		return smallans;
}
int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	cin>>a>>b;
	int ans =powerfn(a,b)
	return 0;
}