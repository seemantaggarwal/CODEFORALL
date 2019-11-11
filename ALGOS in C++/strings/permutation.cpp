#include <iostream>
#include<algorithm>
using namespace std;
void permute(char a[],  int i)
{
	if(a[i]=='\0')
	{
		cout<<a<<endl;
		return;
	}
	int flag=1;
	for(int j=i;a[j]!='\0';j++)
	{
		for(int k=i; k<j;++k)
		{
			if(a[k]==a[j])
			{
				flag=0;
			}
		}
		if(flag)
		{
			swap(a[i], a[j]);
			permute(a,i+1);
			swap(a[i], a[j]);
		}

	}
}
int main(int argc, char const *argv[])
{
	/* code */
	char a[10];
	cin>>a;
	permute(a,0);
	return 0;
}
