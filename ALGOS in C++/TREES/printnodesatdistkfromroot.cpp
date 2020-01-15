#include <iostream>
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
void nodesatdistk(node *root, int k)
{
	if(node==NULL || k<0)
	{
		return;
	}
	if(k==0)
	{
		cout<<root->data;
		return;
	}
	nodesatdistk(root->left, k-1);
	nodesatdistk(root->right, k-1);
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	int k;
	cin>>k;
	nodesatdistk(root, k);
	return 0;
}
