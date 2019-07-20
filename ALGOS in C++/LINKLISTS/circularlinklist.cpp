#include<iostream>
using namespace std;
struct  node
{
	int data;
	node *next;
};
class circularlinklist
{
public:
	node *head, *tail;
	circularlinklist()
	{
		head=NULL;
		tail=NULL;
	}
	void ciraddlinklist(int);
	void display();
	void addloop(int);
	void checkloop();
};
void circularlinklist::ciraddlinklist(int d)
{
	node *temp=new node;
	temp->data=d;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else if(tail==head)
	{
		tail->next=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
		tail->next=head;
	}
}
void circularlinklist::display()
{ 
	if(head==NULL)
	{
		cout<<"underflow"<<endl;
	}
	else if(head==tail)
	{
		cout<<head->data<<" ";
	}
	else
	{
		node *temp= new node;
		temp=head;
		do
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		while(temp->data!=tail->data);
		cout<<temp->data<<" ";
	}
}
void circularlinklist::addloop(int position)
{
	int counter=1;
	if(head==NULL)
	{
		cout<<"underflow";
	}
	else if(head->data==tail->data)
	{
		cout<<"only one node present";
	}
	else
	{
		node *temp = new node;
		temp=head;
		while(counter<=position)
		{
			temp=temp->next;
			++counter;
			if(counter==position)
			{
				tail->next=temp;
				break;
			}
		}
	}
}
void circularlinklist::checkloop()
{
	node *slow = new node;
	node *fast = new node;
	slow=head;
	fast=head;
	do
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==NULL)
		{
			cout<<"no loop";
			break;
		}
		else if(slow==fast)
		{
			cout<<"loop found";
		}
	}
	while(slow!=fast);
	slow=head;
	while(slow!=fast)
	{
		fast=fast->next;
		slow=slow->next;
		if(fast==NULL)
		{
			cout<<"no loop";
			break;
		}
	}
	cout<<"loop at"<<slow->data;
}
int main()
{
	circularlinklist obj;
	obj.display();
	obj.ciraddlinklist(4);
	obj.display();
	cout<<endl;
	obj.ciraddlinklist(10);
	obj.ciraddlinklist(9);
	obj.ciraddlinklist(5);
	obj.display();
	int pos;
	cin>>pos;
	cout<<endl;
	obj.addloop(pos);
	obj.checkloop();
	cout<<endl;
	obj.display();
	
}
