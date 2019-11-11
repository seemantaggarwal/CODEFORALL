#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int p[n+1]={1};
	for (int i = 2; i < =n; ++i)
	{
		/* code */
		if(p[i])
		{
			for (int j = i*i; i <= n; j+=i)
			{
				/* code */
				p[j]=0;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(p[i])
			cout<<p[i];
	}
	return 0;

}