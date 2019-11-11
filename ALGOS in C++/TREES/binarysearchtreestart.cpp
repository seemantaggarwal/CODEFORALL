#include <iostream>
using namespace std;
class bstnode
{
public:
	int data;
	bstnode *right;
	bstnode *left;
	bstnode(int d)
	{
		right = NULL;
		data=d;
		left = NULL;
	}
};
bstnode *insertinbst(node *root, int data)
{
	if(root==NULL)
	{
		return new node(d);
	}
	if(data<=root->data)
	{
		root->left = insertinbst(root->left, d);
	}
	else
		root->right = insertinbst(root->right, d);
	return root;
}
bstnode *build()
{
	int d;
	cin>>d;
	bstnode *root = NULL;
	while(d!=-1)
	{
		root = insertinbst(root,d);
		cin>>d;
	}
	return root;
}
void inoroder(bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	inoroder(root->left);
	cout<<root->data;
	inoroder(root->right);
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root = build();
	return 0;
}