#include <iostream>
#include<queue>
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
void leftview(node *root)
{
	if(root==NULL)
	{
		cout<<"nothing to print";
		return;
	}
	cout<<root->data<<endl;
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	int sum =0;
	int ctr=1;
	while(q.empty()==false)
	{
		if(q.front()==NULL)
		{
			q.pop();
			if(!q.empty())
			{
				q.push(NULL);
			}
			node *temp = q.front();
			cout<<temp->data<<endl;
			
		}
		else
		{
				
			if(q.front()->left!=NULL)
			{
				q.push(q.front()->left);

			}
			if(q.front()->right!=NULL)
			{
				q.push(q.front()->right);

			}	
			sum+=q.front()->data;
			q.pop();
		}
	}

}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	leftview(root);
	return 0;
}
