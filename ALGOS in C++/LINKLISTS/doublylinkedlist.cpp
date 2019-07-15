#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;	
};
node *root= NULL;
void append()
{
	node *temp= (node*)malloc(sizeof(node));
	temp= (node*)malloc(sizeof(node));
	cout<<"enter node date";
	cin>>temp->data;
	temp->left=NULL;
	temp->right= NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		node *p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=temp;
		temp->left=p;
	}
}
void appendatbegin()
{
	node *temp= (node*)malloc(sizeof(node));
	temp= (node*)malloc(sizeof(node));
	cout<<"enter node date";
	cin>>temp->data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		temp->right=root;
		root->left=temp;
		root=temp;
	}
}
int findlength()
{
	node *temp= (node*)malloc(sizeof(node));
	temp=root;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->right;
	}
	return count;
}
void display()
{
	node *temp= (node*)malloc(sizeof(node));
	temp=root;
	if(root==NULL)
	{
		cout<<"empty";
	}
	else
	{
		cout<<endl;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;;
			temp=temp->right;
		}
	}	
}
void addafter()
{
	int location;
	cout<<"enter the location to add";
	cin>>location;
	int count=1;
	int len=findlength();
	if(location>len)
	{
		cout<<"invalid location"<<endl;
		cout<<"list contains only"<<len<<"nodes";
	}
	else
	{
		node *temp= (node*)malloc(sizeof(node));
		cout<<"enter node date";
		cin>>temp->data;
		temp->right=NULL;
		temp->left=NULL;
		node *p;
		p=root;
		while(count<location)
		{
			p=p->right;
			++count;
		}
		temp->right=p->right;
		p->right->left=temp;
		temp->left=p;
		p->right=temp;
	}
}
//try deletion 
void deletionatbegin()
{
	root=root->right;
}
void deletionatend()
{
	node *temp= (node *)malloc(sizeof(node));
	temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	temp=temp->left;
	temp->right=NULL;
}
void deletionatlocation()
{
	cout<<"enter location to delete";
	int location;
	cin>>location;
	int count=1;
	int len=findlength();
	if(location>len)
	{
		cout<<"invalid location"<<endl;
		cout<<"list contains only"<<len<<"nodes";
	}
	else
	{
		node*temp= (node*)malloc(sizeof(node));
		temp=root;
		while(count<location)
		{
			temp=temp->right;
			count++;
		}
		temp->right->left=temp->left;
		temp->left->right=temp->right;
	}
}
int main()
{
	int len;
	display();
	append();
	append();
	append();
	append();
	append();
	append();
	len = findlength();
	cout<<"length is"<<len;
	display();
	appendatbegin();
	appendatbegin();
	display();
	len = findlength();
	cout<<"length is"<<len;
	deletionatbegin();
	display();
	len = findlength();
	cout<<"length is"<<len;
	deletionatend();
	display();
	len = findlength();
	cout<<"length is"<<len;
	cout<<"enter location to add";
	addafter();
	display();
	len = findlength();
	cout<<"length is"<<len;
	deletionatlocation();
	display();
	len = findlength();
	cout<<"length is"<<len;
	return 0;
}
