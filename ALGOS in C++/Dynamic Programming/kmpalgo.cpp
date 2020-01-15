#include <iostream>
#include <bits/stdc++.n>
#define max 1000005;
using namespace std;
int reset[max];
void kmppre(string pat)
{
	int i=0, j=-1;
	reset[0]=-1;
	while(i< pat.size())
	{
		while(j>=0 && pat[i]!=pat[j])
		{
			j = reset[j];
		}
		i++;
		j++;
		reset[i]=j;
	}
}
void kmp(string s, string pat)
{
	kmppre(pat);
	int i=0, j=0;
	while(i<s.size())
	{
		while(j>=0 && str[i]!=pat[j])
		{
			j = reset[j];
		}
		i++;
		j++;
		if(j == pat.size())
		{
			cout<<"pattern is found at"<<i-j;
			j=reset[j];
		}
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	string s, pat;
	cin>>s>>pat;
	kmp(s, pat);
	return 0;
}