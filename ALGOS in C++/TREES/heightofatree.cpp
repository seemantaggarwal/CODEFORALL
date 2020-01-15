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
int heightofatree(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL && root->right == NULL)
	{
		return 1;
	}
	int rt = heightofatree(root->right);
	int lt = heightofatree(root->left);
	return max(lt,rt) +1;
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	int height = heightofatree(root);
	cout<<height;
	return 0;
}