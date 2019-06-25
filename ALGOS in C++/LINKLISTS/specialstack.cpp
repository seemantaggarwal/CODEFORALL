#include<iostream>
#include<stack>
using namespace std;
class specialstack
{
private:
	stack<int> normal;
	stack<int> special;
public:
	void pushinspecial(int x)
	{
		normal.push(x);
		if(special.empty())
		{
			special.push(x);
			return;
		}
		if(x<special.top())
		{
			special.push(x);
		}
		else
		{
			special.push(special.top());
		}
	}
	void pushinnormal(int x)
	{
		normal.push(x);
	}
	void popinspecial()
	{
		special.pop();
	}
	void popinnormal()
	{
		normal.pop();
	}
	void findmin()
	{
		int curr=special.top();
		cout<<curr<<endl;
	}
	void findtop()
	{
		int curr=normal.top();
		cout<<curr<<endl;
	}
};
//complete this
int main()
{
	specialstack s;
	cout<<"enter a choice"<<endl;
	int choice;
	do
	{
		cout<<"1. push \n 2. POP \n 3. Find top\n 4. Find minimum \n press 0 to exit";
		cin>>choice;
		if(choice==1)
		{
			cout<<"enter the element to push";
			int x;
			cin>>x;
			s.pushinnormal(x);
			s.pushinspecial(x);
		}
		else if(choice==2)
		{
			s.popinnormal();
			s.popinspecial();	
		}
		else if(choice==3)
		{
			s.findtop();
		}
    	else if(choice==4)
		{
			s.findmin();
		}
	}while(choice!=0);

}