#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class stacklinklist
{
	node *top;
public:
	stacklinklist()
	{
		top=NULL;
	}
	void push(int);
	void pop();
	void display();
};
void stacklinklist::push(int item)
{
	node *temp= new node;
	temp->data=item;
	temp->next=top;
	top=temp;
}
void stacklinklist::pop()
{
	if(top==NULL)
	{
		cout<<"stack is empty";
	}
	else
	{
		top=top->next;
	}
}
void stacklinklist::display()
{
	node *temp=new node;
	temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	stacklinklist obj;
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	obj.push(9);
	obj.display();
	obj.pop();
	cout<<endl;
	obj.display();
}
