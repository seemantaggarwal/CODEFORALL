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
void sumatlevelk(node *root)
{
	if(root==NULL)
	{
		cout<<"nothing to print";
		return;
	}
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	int sum =0;
	int ctr=1;
	while(q.empty()==false)
	{
		if(q.front()==NULL)
		{
			cout<<"sum of level"<<ctr<<": "<<sum<<endl;
			sum=0;
			ctr++;
			q.pop();
			if(!q.empty())
			{
				q.push(NULL);
			}

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
	sumatlevelk(root);
	return 0;
}
