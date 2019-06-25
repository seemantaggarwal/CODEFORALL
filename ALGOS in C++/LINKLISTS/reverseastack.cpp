#include<iostream>
#include<stack>
using namespace std;
/*pop the top element and vacate rest of the elements into the other stack now push the top 
and push oth{er elements back again and repeat the process for one less element each time*/
void vacate(stack<int> &s, stack<int> &s2, int n )
{
	for(int i=0; i<n; ++i)
	{
		s2.push(s.top());
		s.pop();
	}
}
void reverseStack(stack <int> &s)
{
	stack<int> temp;
	int n=s.size();
	for(int i=0; i<n; ++i)
	{

		int curr= s.top();
		s.pop();
		int elementstovacate= n-i-1;
		vacate(s, temp, elementstovacate);
		s.push(curr);
		vacate(temp, s, n-i-1);
	}
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
}
