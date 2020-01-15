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
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}
node *midpoint(node *head)
{
	if(head->next->next==NULL)
	{
		return head;
	}
	node *first =  new node;
	node *mid = new node;
	mid = head;
	first = head;
	while(first!=NULL && first->next!=NULL)
	{
		first=first->next->next;
		mid =  mid->next;
	}
	return mid;
}
void display(node *head)
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
	cout<<endl;
}

node* merge(node* a, node* b)  
{  
    node* result = NULL;  
    if (a == NULL)  
        return(b);  
    else if (b == NULL)  
        return(a);  
      
    if (a->data <= b->data)  
    {  
        result = a;  
        result->next =merge(a->next, b);  
    }  
    else
    {  
        result = b;  
        result->next = merge(a, b->next);  
    }  
    return(result);  
}  
  
node *mergesort(node *head)
{
	if(head==NULL || head->next== NULL)
	{
		return head;
	}
	node *mid = midpoint(head);
	node *a =  head;
	node *b = mid->next;
	mid->next=NULL;
	a = mergesort(a);
	b = mergesort(b);
	display(b);
	cout<<"now a";
	display(a);
	node *c = merge(a,b);
	cout<<"now c";
	display(c);
	return c;
}
int main(int argc, char const *argv[])
{
	/* code */
	list obj;
	obj.display();
	obj.insert(6);
	obj.insert(0);
	obj.insert(3);
	obj.insert(2);
	obj.insert(2);
	obj.insert(2);
	obj.display();
	cout<<endl;
	obj.head = mergesort(obj.head);
	obj.display();
	return 0;
}
