#include<iostream>
using namespace std;
class cicularqueue
{
	int a[10];
	int front, rear;
public:
	cicularqueue()
	{
		front=-1;
		rear=-1;
	}
	void insert(int);
	void del();
	void display();
};
void cicularqueue::insert(int item)
{
	if((rear==9 && front==0) || (front==rear+1))
	{
		cout<<"overflow";
		return;
	}
	else if(rear==9)
	{
		rear=0;
		a[rear]=item;
	}
	else if(rear==-1)
	{
		front++;
		rear++;
		a[rear]=item;
	}
	else
	{
		rear++;
		a[rear]=item;
	}
}
void cicularqueue::del()
{
	if(front==-1)
	{
		cout<<"underflow";
		return;
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==9)
	{
		front=0;
	}
	else
	{
		front++;
	}
}
void cicularqueue::display()
{
	if(front==-1 && rear==-1)
	{
		cout<<"nothing to display";
		return;
	}
	else
	{
		int temp;
		temp=front;
		do
		{
			cout<<a[temp]; 
			temp=(temp+1)%10;
		}
		while(temp!=(rear+1)%10);
	}
}
int main()
{
	cicularqueue obj;
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
	obj.insert(100);
	cout<<endl;
	obj.display();
	return 0;
}
