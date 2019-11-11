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
class Pair
{
public:
	int height;
	int diameter;
}
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
Pair fastdiameter(node *root)
{
	Pair P;
	if(root ==  NULL)
	{
		P.height = 0;
		P.diameter=0;
		return P;
	}
	Pair left = fastdiameter(root->left);
	Pair right = fastdiameter(root->right);
	P.height = max(left.height, right.height);
	P.diameter =  max(left.height + right.height, max(left.diameter, right.diameter));
	return P;
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	Pair p=fastdiameter(root);
	cout<<p.diameter;
	return 0;
}