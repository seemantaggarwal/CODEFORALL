#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		data=d;
		right=NULL;
		left=NULL;
	} 
};
node *buildtree()
{
	int data;
	cin>>data;
	if(data==-1)
	{
		return NULL;
	}
	node *root = new node(data);
	root->left=buildtree();
	root->right=buildtree();
	return root;
}
void printlevelorder(node *root)
{
	queue<node *> q;
	q.push(root);
	while(!q.empty())
	{
		node *f= q.front()
		cout<<f->data<<" ";
		q.pop();
		if(f->left)
		{
			q.push(f->left);
		}
		if(f->right)
		{
			q.push(f->right);
		}
	}
}
void printinlevel(node *root)
{
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node *f= q.front()
		if(f==NULL)
		{
			cout<<endl;
			q.pop();
			if(!q.empty)
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<f->data<<" ";
			q.pop();
			if(f->left)
			{
				q.push(f->left);
			}
			if(f->right)
			{
				q.push(f->right);
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	printlevelorder(root);
	return 0;
}