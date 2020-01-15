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
bstnode *insertinbst(bstnode *root, int data)
{
	if(root==NULL)
	{
		return new bstnode(data);
	}
	if(data<root->data)
	{
		root->left = insertinbst(root->left, data);
	}
	else
		root->right = insertinbst(root->right, data);
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
void replacesum(bstnode *root, int *sum)
{
	if(root==NULL)
	{
		return;
	}
	replacesum(root->right, sum);
	sum = sum + root->data;
	root->data = sum;
	replacesum(root->left,sum);
}
void inorder(bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main(int argc, char const *argv[])
{
	/* code */
	bstnode *root=build();
	replacesum(root);
	inorder(root);
	return 0;
}
