#include<iostream>
#include<stack>
using namespace std;
struct node
{
	int data;
	node *next;
};
class linklist
{
public:
	node *head, *tail;
	linklist()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int);
	void display();
	int findlen();
};
void linklist::insert(int item)
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
void linklist::display()
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
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}
int linklist::findlen()
{
	int ctr=1;
	node *temp = new node;
	temp = head;
	while(temp!=NULL)
	{
		temp=temp->next;
		ctr++;
	}
	return ctr;
}
int main()
{
	linklist obj;
	obj.insert(4);
	obj.insert(10);
	obj.insert(20);
	obj.insert(4);
	obj.insert(10);
	obj.insert(20);
	obj.insert(4);
	obj.insert(10);
	obj.insert(20);
	obj.insert(20);
	obj.display();
	cout<<endl;
	stack<node*> s;
	int len = obj.findlen();
	node *temp = new node;
	temp = obj.head;
	int half;
	if(len%2!=0)
	{
		half=len/2;
	}
	else
	{
		half= (len/2)-1;
	}
	while(half)
	{
		temp=temp->next;
		half--;
	}
	while(temp!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	}
	node *temp1 = new node;
	temp1 = obj.head;
	half = len/2;
	while(s.empty()==false)
	{
		temp=s.top();
		s.pop();
		temp->next=temp1->next;
		temp1->next=temp;
		temp1=temp->next;
	}
	if(len%2!=0)
	{
		temp1->next=NULL;
		obj.tail=temp1;
	}
	else
	{
		temp->next=NULL;
		obj.tail=temp;
	}
	obj.display();
}
