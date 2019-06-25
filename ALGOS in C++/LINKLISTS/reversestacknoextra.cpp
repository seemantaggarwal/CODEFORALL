#include<iostream>
using namespace std;
#include<stack>
void insertbottom(stack<int>&s, int curr)
{
	if(s.empty())
	{
		s.push(curr);
		return;
	}	
	int element=s.top();
	s.pop();
	insertbottom(s, curr);
	s.push(element);

}
void reverseStack(stack<int>&s)
{
	if(s.empty())
	{
		return;
	}
	int curr=s.top();
	s.pop();
	reverseStack(s);
	insertbottom(s, curr);
}
int main()
{
	stack<int> s;
	while(true)
	{
		int x;
		cin>>x;
		if(x==-1)
		{
			break;
		}
		s.push(x);
	}
	reverseStack(s);
	while(s.empty()==false)
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}
