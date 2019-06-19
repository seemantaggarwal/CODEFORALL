#include<iostream>
using namespace std;
class stack
{
	int arr[10];
	int top;
public:
	stack()
	{
		top=-1;
	}
	void push(int);
	void pop();
	void display();
};
void stack::push(int item)
{
	if(top==9)
	{
		cout<<"stack is full";
	}
	else
	{
		top++;
		arr[top]=item;
	}
}
void stack::pop()
{
	if(top==-1)
	{
		cout<<"stack is empty";
	}
	else
	{
		cout<<"deleted is"<<arr[top];
		top--;
	}
}
void stack::display()
{
	for(int i=top; i>=0; --i)
	{
		cout<<arr[i];
	}
}
int main()
{
	stack obj;
	int n;
	cin>> n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; ++i)
	{
		obj.push(arr[i]);
	}
	obj.display();
	cout<<endl;
	obj.pop();
	cout<<endl;
	obj.display();
}
