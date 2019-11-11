#include <iostream>
using namespace std;
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
int replacesum(node *root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left == NULL && root->right==NULL)
	{
		return root->data;
	}
	int leftsum = replacesum(root->left);
	int rightsum = replacesum(root->right);
	int temp = root->data;
	root->data = leftsum + rightsum;
	return temp + root->data;
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	return 0;
}