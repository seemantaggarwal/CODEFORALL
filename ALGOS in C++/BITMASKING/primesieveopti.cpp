#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int p[n+1]={0};
	p[0]=p[1]=0;
	p[2]=1;
	for(int i=3; i<=n; i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=n; i+=2)
	{
		if(p[i])
		{
			for(int j=i*i; j<=n;j+=(2*i))
			{
				p[j]=0;
			}
		}
	}
	return 0;
}