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
bool isbst(node *root, int min = INT_MIN, int max = INT_MAX)
{
	if(root==NULL)
	{
		return true;
	}
	if(root->data>=min && root->data<max && isbst(root->left, min, root->data) && isbst(root->right, root->data, max))
	{
		return true;
	}
	return false; 

}
int main(int argc, char const *argv[])
{
	bstnode *root=build();
	return 0;
}