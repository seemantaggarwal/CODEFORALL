#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class queuelinklist
{
	node *front, *rear;
public:
	queuelinklist()
	{
		rear=NULL;
		front=NULL;
	}
	void insert(int);
	void del();
	void display();
};
void queuelinklist::insert(int item)
{
	node *temp= new node;
	temp->data=item;
	temp->next=NULL;
	if(rear==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void queuelinklist::del()
{
	if(front!=NULL)
	{
		/*node *temp= new node;
		temp=front;
		front=temp->next;*/
		front=front->next;
	}
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		cout<<"underflow";
	}
}
void queuelinklist::display()
{
	node *temp= new node;
	temp=front;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	queuelinklist obj;
	obj.insert(2);
	obj.insert(3);
	obj.insert(4);
	obj.insert(5);
	obj.insert(6);
	obj.insert(9);
	obj.display();
	obj.del();
	cout<<endl;
	obj.display();
}
