#include <iostream>
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
int countnodes(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	return 1 + countnodes(root->left) + countnodes(root->right);
}
int sumnodes(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	return root->data + sumnodes(root->left) + sumnodes(root->right;
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	int totalnodes=countnodes(root);
	cout<<totalnodes<<endl;
	int sum=sumnodes(root);
	cout<<sum;
	return 0;
}