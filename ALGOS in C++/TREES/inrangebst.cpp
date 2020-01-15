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
	if(data<=root->data)
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
void inrange(bstnode *root, int lower, int upper)
{
	if(root==NULL)
	{
		return;
	}
	if(root->data < lower)
	{
		inrange(root->right, lower, upper);
	}
	else if(root->data > upper)
	{
		inrange(root->left, lower, upper);
	}
	else
	{
		cout<<root->data<<" ";
		inrange(root->right, lower, upper);
		inrange(root->left, lower, upper);
	}
	return;
}
int main(int argc, char const *argv[])
{
	/* code */
	bstnode *root = build();
	cout<<"enter range";
	cout<<endl;
	int u, l;
	cin>>l>>u;
	cout<<"in the range are:"<<endl;
	inrange(root, l, u);
	return 0;
}
