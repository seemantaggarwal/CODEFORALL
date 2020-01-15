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
void printrootdown(node *root, int k)
{
	if(root==NULL)
	{
		return;
	}
	if(k==0)
	{
		cout<<root->data;
		return;
	}
	printrootdown(root->left, k-1);
	printrootdown(root->right, k-1);
}
int nodesatdistk(node *root, int target, int k)
{
	if(root==NULL || k<0)
	{
		return -1;
	}
	if(target==root->data)
	{
		printrootdown(root, k);
		return 0;
	}
	int dl = nodesatdistk(root->left, target, k); //is target found in the left subtree?
	//if it is found toh -1 return nhi hoga base case hit nhi hua mtlb, kahi na kahi vo mil chuka aur uske neeche ka print ho chuka left subtree mein
	if(dl!=-1)
	{
		if(dl+1==k) //dl is distance of left child from target
		{
			cout<<root->data<<endl;
		}
		 else
            printrootdown(root->right, k-dl-2); 
  
         // Add 1 to the distance and return value for parent calls 
         return 1 + dl; 
	} 
	 int dr = nodesatdistk(root->right, target, k); 
    if (dr != -1) 
    { 
         if (dr + 1 == k) 
            cout << root->data << endl; 
         else
            printrootdown(root->left, k-dr-2); 
         return 1 + dr; 
    } 
  
    // If target was neither present in left nor in right subtree 
    return -1; 
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	nodesatdistk(root, 1, 3);
	return 0; 
}
