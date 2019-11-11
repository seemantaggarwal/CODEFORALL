#include <iostream>
#include <cstring>
using namespace std;
void filterchars(char *a, int no)
{
	int i=0;
	while(no>0)
	{
		cout<<((no&1)?a[i]:"");
		++i;
		no = no>>1;
	}
}
void gensubs(char *a)
{
	int len = strlen(a);
	for(int i=0; i<(1<<n)-1;++i)
	{
		filterchars(a, i)
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	char a[40];
	cin>>a;
	gensubs(a);

	return 0;
}