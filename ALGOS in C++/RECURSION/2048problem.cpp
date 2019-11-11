#include <iostream>
using namespace std;
void printnum(int n)
{
	if(n==0)
	{
		return;
	}
	if(n/10==0)
	{
		cout<<"number"<<n;
		return;
	}
	printnum(n/10);
	cout<<"number"<<n%10;

}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	printnum(n);
	return 0;
}
