#include<iostream>
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
int height(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int hs=height(root->left);
	int rs=height(root->right);
	return max(rs,hs) + 1;
}
int diameter(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int hleft = height(root->left);
	int hright = height(root->right);
	int op1 = hleft + hright;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1,op2,op3);
}
int main(int argc, char const *argv[])
{
	/* code */

	return 0;
}