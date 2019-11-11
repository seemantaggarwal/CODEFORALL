#include <iostream>
using namespace std;
int multi(int a, int b)
{
	if(b==1)
	{
		return a;
	}
	if(b>0)
		return a+multi(a,b-1);
	else
		return -multi(a,-b);
	//-10, -2, -20
}
int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	cin>>a>>b;
	int ans=multi(a,b);
	cout<<ans;
	return 0;
}
