#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class queue
{
	node *front;
	node *rear;
	public:
	queue()
	{
		front=NULL;
		rear=NULL;
	}
	void insert(int);
	void check(int);
	void display();
	void del();
};
void queue::insert(int item)
{
	node *temp = new node;
	temp->data=item;
	temp->next=NULL;
	if(front==NULL)
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
void queue::check(int item)
{
	if(front==NULL)
	{
		insert(item);
	}
	else
	{
		node *temp = new node;
		temp->data=item;
		temp->next=NULL;
		node *iter= new node;
		iter=front;
		if(iter->data==item)
		{
			temp->next=iter->next;
			iter->next=temp;
		}
		while(iter->data!=item)
		{
			if(iter->next==NULL)
			{
				insert(item);
				break;
			}
			else if(iter->next->data==item)
			{
				temp->next=iter->next;
				iter->next=temp;
			}
			iter=iter->next;
		}
	}

}
void queue::display()
{
	node *temp= new node;
	temp=front;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
void queue::del()
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

int main()
{
	queue c1, c2;
	cout<<"press E for adding and D for distributing and x for exit";
	char selection;
	cin>>selection;
	while(selection!='x')
	{
		if(selection=='e' || selection=='E')
		{
			cout<<"enter course number";
			int num;
			cin>>num;
			if(num==1)
			{
				cout<<"enter roll number";
				int item;
				cin>>item;
				c1.check(item);
			}
			if(num==2)
			{
				cout<<"enter roll number";
				int item;
				cin>>item;
				c2.check(item);
			}
		}
		else if(selection=='d' || selection=='D')
		{
			c1.del();
			c2.del();
		}
		cin>>selection;
	}
	c1.display();
	cout<<endl;
	c2.display();
}
