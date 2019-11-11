#include <iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	char a[20];
	cin>>a;
	int len=strlen(a);
	int ans=0;
	ans+=(1<<len-2);
	for (int i = len-1, int pos=0; i>=0; --i, ++pos)
	{
		/* code */
		if(a[i]=='7')
		{
			ans+=(1<<pos);
		}
	}
	cout<<ans+1;
	return 0;
}