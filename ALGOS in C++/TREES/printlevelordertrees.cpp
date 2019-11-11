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
int height(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int hs=height(root->left);
	int rs=height(root->right);
	return max(rs,hs) + 1;
}
void printklevel(node *root, int k)
{
	if(root==NULL)
	{
		return;
	}
	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}
	printklevel(root->left, k-1);
	printklevel(root->right, k-1);
	return;

}
void printalllevel(node *root)
{
	int h=height(root);
	for(int i=1;i<h;++i)
	{
		printklevel(root,i);
	}
}
int main(int argc, char const *argv[]) 
{
	/* code */
	node *root=buildtree();
	int h=height(root);
	printklevel(root, h);
	return 0;
}
