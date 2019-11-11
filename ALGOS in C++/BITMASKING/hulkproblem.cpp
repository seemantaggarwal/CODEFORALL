#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ans=0;

	while(n>0)
	{
		n=n&(n-1);
	}
	cout<<n;
	return 0;
}