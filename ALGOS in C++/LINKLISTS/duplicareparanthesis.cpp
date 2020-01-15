#include<iostream>
#include <cstring>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	char a[100];
	cin>>a;
	int len = strlen(a);
	stack<char> s;
	int i =0;
	while(i<len)
	{
		if(a[i] == ')')
		{
			char top = s.top();
			s.pop();
			int elementsinside = 0;
			while(top != '(')
			{
				elementsinside++;
				top = s.top();
				s.pop();
				
			}
			if(elementsinside<1)
			{
				cout<<"unbalance";
				break;
			}
		
		}
		else
		{
			s.push(a[i]);
		}
		i++;
	}
	return 0;
}
