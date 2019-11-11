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
class Pair
{
public:
	int height;
	bool balance;
};
Pair isheightbalace(node *root)
{
	Pair p;
	if(root == NULL)
	{
		p.balance=true;
		p.height=0;
		return p;
	}
	Pair lt = isheightbalace(root->left);
	Pair rt = isheightbalace(root->right);
	p.height = max(lt.height, rt.height)+1;
	if(abs(lt.height - rt.height)<=1 && lt.balance && rt.balance) 
	{
		p.balance=true;
	}
	else
	{
		p.balance=false;
	}
	return p;
}
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}