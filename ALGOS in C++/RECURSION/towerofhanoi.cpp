#include <iostream>
using namespace std;
void tower(int n, char src, char dest, char helper)
{
	if(n==0)
	{
		return;
	}
	tower(n-1,src,helper,dest);
	cout<<"move"<<n<<"from"<<src<<"to"<<dest;
	tower(n-1,helper,dest,src);
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	tower(n,'a','b','c');
	return 0;
}