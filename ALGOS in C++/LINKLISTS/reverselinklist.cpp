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
	node *head;
	node *tail;
	linklist()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int);
	void display();
	void reverse();
	void revdisplayrecursion(node *);
	void displayrec(node *);
	void reverserec(node *);
	void print(){
		revdisplayrecursion(head);
		cout<<endl;
		displayrec(head);
		reverserec(head);
		cout<<endl;
		displayrec(head);
	}
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
void linklist::reverse()
{
	node *temp = new node;
	temp=head;
	node *prev, *next;
	tail=head;
	prev = NULL;
	while(temp!=NULL)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}
	head=prev;
}
void linklist::revdisplayrecursion(node *p)
{
	if(p->next==NULL)
	{
		cout<<p->data<<" ";
		return;
    }
	revdisplayrecursion(p->next);
	cout<<p->data<<" ";
}
void linklist::displayrec(node *p)
{
	if(p->next==NULL)
	{
		cout<<p->data<<" ";
		return;
    }
    cout<<p->data<<" ";
	displayrec(p->next);
}
void linklist::reverserec(node *p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	reverserec(p->next);
	node *q = p->next;
	q->next=p;
	p->next=NULL;
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
	obj.display();
	cout<<endl;
	obj.reverse();
	obj.display();
	cout<<endl;
	obj.print();
}
