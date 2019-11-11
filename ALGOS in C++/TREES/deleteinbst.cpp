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
bstnode *delinbst(node *root, int data)
{
	if(root == NULL)
	{
		return NULL;
	}
	else if(data< root->data)
	{
		root->left = delinbst(root->left,data);
		return root;
	}
	else if(data == root->data)
	{
		if(root->left == NULL && root->right==NULL)
		{
			delete root;
			return NULL;
		}
		else if(root->left != NULL && root->right==NULL)
		{
			bstnode *temp = root->left;
			delete root;
			return temp;
		}
		else if(root->left == NULL && root->right!=NULL)
		{
			bstnode *temp = root->right;
			delete root;
			return temp;
		}
		else
		{
			node *replace = root->right;
			while(replace->left!=NULL)
			{
				replace=replace->left;
			}
			root->data=replace->data;
			root->right=delinbst(root->right,replace->data);
			return root;
		}
	}
	else
	{
		root->right = delinbst(root->right, data);
		return root;
	}

}
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}