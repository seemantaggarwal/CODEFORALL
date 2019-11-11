#include <iostream>
using namespace std;
int main()
{
	/* code */
	int a;
	int b;
	cin>>a;
	cin>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a;
	cout<<b<<endl;
	int ith;
	cin>>ith;
	int res;
	res = a&(1<<ith);
	cout<<(res==0)?0:1;
	cout<<endl;
	mask = 1<<ith;
	b=(b|mask);
	cout<<b;
	int newmask= ~mask;
	b = (b&mask);
	cout<<b;
	return 0;
}
