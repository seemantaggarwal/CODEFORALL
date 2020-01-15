#include <iostream>
#include <cstring>
#include <unordered_map>
#include<climits>
using namespace std;
string minwindowsub(string str, string pat)
{
	int len1 = str.size();
	int len2 = pat.size();
	if(len2>len1)
	{
		cout<<"no window";
		return "";
	}
	int hashstr[256] = {0};
	int hashpat[256] = {0};
	for (int i = 0; i < len2; ++i)
	{
		/* code */
		hashpat[pat[i]] +=1; 
	}
	int start =0;
	int startindex = -1, minlen = INT_MIN;
	int count = 0;
	for (int j = 0; j < len1; ++j)
	{
		/* code */
		hashstr[str[i]]+=1;
		if(hashpat[str[j]]!=0 && hashstr[str[j]]<= hashstr[str[j]])
		{
			count++;
		}
		if(count==len2)
		{
			while(str[str[start]] > hashpat[str[start]] || hashpat[str[start]]==0)
			{
				if(hashstr[str[start]] > hashpat[str[start]])
					hashstr[str[start]]-=1;
				start++;
			}
			int lenwindow = j - start +1;
			if(minlen > lenwindow)
			{
				minlen = lenwindow;
			}
		}
	}
	if(start == -1)
	{
		return "";
	}
	else
		return str.substr(startindex , minlen);
int main(int argc, char const *argv[])
{
	/* code */
	string s1, s2;
	cin>>s1>>s2;
	cout<<minwindowsub(s1,s2);
	return 0;
}