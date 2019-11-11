#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a==0)
	{
		return b;
	}
	else
	{
		return gcd(b%a, a);
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	int a;
	cin>>a;
	int b;
	cin>>b;
	cout<<gcd(a,b)<<"lcm"<<((a*b)/gcd(a,b));
	return 0;
}