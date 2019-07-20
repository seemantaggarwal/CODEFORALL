#include<iostream>
#include<queue>
#include<bits/stdc++.h>
#include<limits>
using namespace std;
struct bstnode
{
	int data;
	bstnode *right;
	bstnode *left;
};
int height(bstnode *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int rt = height(root->right);
	int ht = height (root->left);
	return max(rt, ht) + 1;
}
bstnode *getnewnode(int d)
{
	bstnode *node = new bstnode;
	node->data=d;
	node->left=NULL;
	node->right=NULL;
	return node;
}
bstnode *insert(bstnode *root, int d)
{
	if(root==NULL)
	{
		//tree is empty;
		root=getnewnode(d);
	}
	else if(d<=root->data)
	{
		root->left=insert(root->left,d);
	}
	else
	{
		root->right=insert(root->right, d);
	}
	return root;
}
bool search(bstnode *root, int x)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==x)
	{
		return true;
	}
	else if(x <= root->data)
	{
		return search(root->left, x);
	}
	else
	{
		return search(root->right, x);
	}
}
bstnode *findmin(bstnode *root)
{
	if(root==NULL)
	{
		return root;
	}
	else if(root->left)
	{
		return findmin(root->left);
	}
	else 
	{
		return root;
	}
	/*iterative
	while(curr->left!=NULL)
	{
	curr=root->left //initialise curr as root
	}
	return curr->data;
	for integer type return, curr ki jgh directly root p bhi kr skte hai 
		if(root==NULL)
	{
		return 0;
	}
	else if(root->left)
	{
		return findmin(root->left);
	}
	else 
	{
		return root->data;
	}
	*/
}
void postorderprint(bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	postorderprint(root->left);
	postorderprint(root->right);
	cout<<root->data;
}
void levelordertraversal(bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	queue<bstnode*> q;
	q.push(root);
	while(q.empty() == false)
	{
		bstnode *curr=q.front();
		cout<<curr->data;
		if(curr->left)
		{
			q.push(curr->left);
		}
		if(curr->right)
		{
			q.push(curr->right);
		}
		cout<<"Current level is processed and next level is ended"<<endl;
		q.pop();
	}
}
/*bstnode *delnode(bstnode *root, int data)
{
	bool isthere = search(root, data);
	if(root==NULL)
	{
		return root;
	}
	else if(!isthere)
	{
		cout<<" your number is not present";
	}
	else if(data<root->data)
	{
		root->left=delnode(root->left, data);
	}
	else if(data>root->data)
	{
		root->right=delnode(root->right, data);
	}
	else
	{
		if(root->right==NULL && root->left==NULL)
		{
			delete root;
			root=NULL;
		}
		else if(root->left==NULL)
		{
			bstnode *temp=root;
			root=root->right;
			delete temp;
		}
		else if(root->right==NULL)
		{
			bstnode *temp=root;
			root=root->right;
			delete temp;
			
		}
		else
		{
			bstnode *temp= findmin(root->right);
			root->data=temp->data;
			root->right=delnode(root->right, temp->data);
		}
	}
	return root;
}
*/
bool isbinary(bstnode *root, int min, int max)
{
	//return true if binary else false
	if(root==NULL)
	{
		return true;
	}
	else if(root->data > min && root->data < max && isbinary(root->left, min, root->data) && isbinary(root->right, root->data, max))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void levelprinting(bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	bstnode *const marker = NULL; //initialisation
	queue<bstnode*> q;
	q.push(root);
	q.push(marker); //first node aur uska ek null daldiya
	while(q.empty()== false)
	{
		bstnode *curr= q.front(); //temporary variable
		q.pop(); //th har bar ek element bahar fenkna hai
		if(curr==marker) //agar null encounter hua
		{
			cout<<"Current level is processed and next level is ended"<<endl;
			if(q.empty()==false)
			{
				q.push(marker); //agar q empty nhi hai th uske end pe ek null bhejdo
			}
			continue;
		}
		cout<<curr->data<<" "; //iske bad bss us node k right left dalne h usme
		if(curr->left)
		{
			q.push(curr->left);
		}
		if(curr->right)
		{
			q.push(curr->right);
		}
		cout<<endl;
	}
}
bstnode *findmax(bstnode *root)
{
	if(root==NULL)
		return root;
	else if(root->right)
	{
		return findmax(root->right);
	}
	else
		return root;
	/*iterative
	while(curr->left!=NULL)
	{
	curr=root->left //initialise curr as root
	}
	return curr->data;
	for integer type return, curr ki jgh directly root p bhi kr skte hai 
		if(root==NULL)
	{
		return 0;
	}
	else if(root->left)
	{
		return findmin(root->left);
	}
	else 
	{
		return root->data;
	}
	hr jgh left ki jgh bs right krna h
	*/
}

/*
bool issubtreeless(bstnode *root, int val)
{
	if(root==NULL)
	{
		return true;
	}
	else if(root->data<=val && issubtreeless(root->left, root->data) && issubtreebig(root->right, root->data))
	{
		return true;
	}
	else
	{
		return false
	}
}
bool issubtreebig(bstnode *root, int val)
{
	if(root==NULL)
	{
		return true;
	}
	else if(root->data>=val && issubtreeless(root->left, root->data) && issubtreebig(root->right, root->data))
	{
		return true;
	}
	else
	{
		return false
	}
}
bool isbinary(bstnode *root)
{
	if(root==NULL)
	{
		return true;
	}
	else if(issubtreeless(root->left, root->data) && issubtreebig(root->right, root->data) && isbinary(root->left) && isbinary(root->right))
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/
int main()
{
	bstnode *root;//pointer to root node
	root = NULL; //tree is empty
	root=insert(root, 10);
	root=insert(root, 12);
	root=insert(root, 11);
	root=insert(root, 15);
	root=insert(root, 24);
	cout<<"searching begins";
	cout<<endl;
	levelprinting(root);
	bool isthere= search(root, 15);
	if(isthere)
	{
		cout<<"your number is present"<<endl;
	}
	isthere=search(root, 14);
	if(!isthere)
	{
		cout<<"your number is not here";
	}	
	//delnode(root, 15);
	cout<<endl;
	levelprinting(root);
	cout<<endl;
	levelordertraversal(root);
	cout<<endl;
	bool check = isbinary(root, INT_MIN, INT_MAX);
	if(check==true)
	{
		cout<<"binary search tree";
	}
	else
	{
		cout<<"not a binary search tree";
	}
}
