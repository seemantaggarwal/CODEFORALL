#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class list
{
	public:
	node *head, *tail;
	list()
	{
		head= NULL;
		tail= NULL;
	}
	void insert(int);
	void display();
	void insertfirst(int);
	void insertposn(int, int);
	void delstart();
	void delend();
	void delposn(int);
};
void list::insert(int item)
{
	node *temp= new node;
	temp->data= item;
	temp->next= NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}
void list::display()
{
	node *temp;
	temp=head;
	if(head == NULL)
	{
		cout<<"list is empty";
	}
	else
	{
		while(temp!= NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}
}
void list:: insertfirst(int item)
{
	node *temp;
	temp = new node;
	temp->data=item;
	temp->next=head;
	head=temp;
}
void list::insertposn(int item, int pos)
{
	node *temp= new node;
	temp->data=item;
	node *curr, *pre;
	curr=head;
	for(int i=1; i<pos;++i)
	{
		pre=curr;;
		curr=curr->next;
	}
	pre->next=temp;
	temp->next=curr;
}
void list::delstart()
{
	if(head==NULL)
	{
		cout<<"empty list";
	}
	else
	{
		head=head->next;
	}
}
void list::delend()
{
	node *curr, *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		curr=temp;
		temp=temp->next;
	}
	curr->next=NULL;
}
void list::delposn(int pos)
{
	node *curr, *pre;
	curr=head;
	for(int i=1;i<pos;++i)
	{
		pre=curr;
		curr=curr->next;
	}
	curr=curr->next;
	pre=curr->next;
}
int main()
{
	list obj;
	obj.display();
	obj.insert(4);
	obj.insert(10);
	obj.insert(20);
	obj.display();
	cout<<endl;
	obj.insertfirst(80);
	obj.display();
	cout<<endl;
	obj.insertposn(100,2);
	obj.display();
	cout<<endl;
	obj.delend();
	obj.display();
	cout<<endl;
	obj.delstart();
	obj.display();
	cout<<endl;
	obj.delposn(2);
	cout<<endl;
	obj.display();
}
