#include<iostream>
using namespace std;
class queuearr
{
	int a[10];
	int front, rear;
public:
	queuearr()
	{
		rear=-1;
		front=-1;
	}
	void insert(int);
	void del();
	void display();
};
void queuearr::insert(int item)
{
	if(rear==9)
	{
		cout<<"queue overflow";
		return;
	}
	else if(rear==-1)
	{
		front++;
	}
	rear++;
	a[rear]=item;
}
void queuearr::del()
{
	if(rear==-1)
	{
		cout<<"underflow";
		return;
	}
	else if(rear==front)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		front++;
	}
}
void queuearr::display()
{
	if(front==-1)
	{
		cout<<"nothing to display";
		return;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i];
		}
	}
}
int main()
{
	queuearr obj;
	int n;
	cin>> n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n;++i)
	{
		obj.insert(arr[i]);
	}
	obj.display();
	obj.del();
	cout<<endl;
	obj.display();
	return 0;
}
