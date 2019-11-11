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
bool ispresent(bstnode *root, int key)
{
	if(root==NULL)
	{
		return false;
	}
	if(key == root->data)
	{
		return true;
	}
	else if(key < root->data)
	{
		return ispresent(root->left, key);
	}
	else
	{
		return ispresent(root->right, key);
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	bstnode *root = build();
	int key;
	cin>>key;
	bool ispresent = searchinbst(root, key);
	return 0;
}