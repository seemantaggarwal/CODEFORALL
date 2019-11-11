#include <iostream>
using namespace std;
void incr(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<" ";
	incr
}
void decr(int n)
{
	if(n==0)
	{
		return;
	}
	incr(n-1);
	cout<<n<<" ";
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	incr(n);
	decr(n);
	return 0;
}