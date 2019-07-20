#include<iostream>
#include<cmath>
using namespace std;
struct	node1
{
	int data;
	node1 *next;
};
class list
{
	public:
	node1 *head, *tail;
	list()
	{
		head= NULL;
		tail= NULL;
	}
	void insert(int);
	void display();
	int findlen();
};
void list::insert(int item)
{
	node1 *temp= new node1;
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
	node1 *temp;
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
int list::findlen()
{
	node1 *temp=head;
	int ctr=1;
	while(temp!=NULL)
	{
		ctr++;
		temp=temp->next;
	}
	return ctr;
}
int main()
{
	list obj, obj2;
	obj.insert(4);
	obj.insert(10);
	obj.insert(20);
	obj.insert(4);
	obj2.insert(10);
	obj2.insert(20);
	obj2.insert(4);
	obj2.insert(10);
	obj2.insert(20);
	obj2.insert(10);
	obj2.insert(20);
	obj.insert(10);
	obj.insert(20);
	obj.insert(4);
	cout<<"first ll";
	obj.display();
	cout<<endl<<"second ll";
	obj2.display();
	list objc;
	objc.insert(5);
	objc.insert(20);
	objc.insert(4);
	objc.insert(10);
	objc.insert(20);
	objc.insert(10);
	objc.insert(20);
	objc.insert(10);
	objc.insert(20);
	objc.insert(4);
	obj2.tail->next=objc.head;
	obj.tail->next=objc.head;
	cout<<endl<<"first ll";
	obj.display();
	cout<<endl<<"second ll";
	obj2.display();
	int len=abs(obj.findlen() - obj2.findlen());
	node1 *temp= new node1;
	temp=obj2.head;
	while(len)
	{
		temp=temp->next;
		len--;
	}
	node1 *temp2=new node1;
	temp2 = obj.head;
	while(temp != temp2)
	{
		temp=temp->next;
		temp2=temp2->next;
	}
	cout<<endl<<"common node is"<<temp2->data;
}

