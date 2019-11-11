#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *right;
	node *left;
	node(int d)
	{
		data=d;
		right=NULL;
		left=NULL;
	}
}
node *preorder(int in[],int pre[], int s, int e)
{
	static int i = 0;
	if(s>e)
	{
		return NULL;
	}
	node *root = new node(pre[i]);
	int index = -1;
	for (int j=s;j<=e ++j)
	{
		/* code */
		if(in[j]==pre[i])
		{
			index = j;
			break;
		}
	}
	i++;
	root->left = preorder(in, pre,s,index-1);
	root->right = preorder(in, pre, index+1,e);
	return root;
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int in[n], pre[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>in[i];
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>pre[i];
	}
	node *root = preorder(in, pre, 0, n-1);
	return 0;
}