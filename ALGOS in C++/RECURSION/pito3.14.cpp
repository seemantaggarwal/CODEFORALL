#include<iostream>
#include<cstring>
using namespace std;
void replacepi(char sample[] , int n  , int beg,  string curr="" )
{
	if(beg==n)
	{
		cout<<curr;
		return;
	}

		if(sample[beg]=='p' && sample[beg+1]=='i')
		{
			curr+="3.14";
			replacepi(sample, n, beg+2, curr);
		}
		else
		{
			curr+=sample[beg];
			replacepi(sample, n, beg+1, curr);
		}
}
int main()
{
	char sample[100];
	cin>>sample;
	replacepi(sample, strlen(sample), 0);
}
