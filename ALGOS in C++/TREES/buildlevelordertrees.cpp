#include<iostream>
#include<queue>
using namespace std;
class nodeofatree
 {
 public:
 	int data;
	nodeofatree *right;
	nodeofatree *left;
 	nodeofatree(int d)
 	{
 		data=d;
 		left=NULL;
 		right=NULL;
 	} 	
 }; 
nodeofatree *buildlevelordertrees()
{
	int x;
	cin>>x;
	if(x==-1)
	{
		return NULL;
	}
	queue<nodeofatree*> q;
	nodeofatree* root= new nodeofatree(x);
	q.push(root);
	while(!q.empty())
	{
		nodeofatree *n =q.front();
		q.pop();
		cout<<"enter children of "<<n->data;
		int c1, c2;
		cin>>c1;
		cin>>c2;
		if(c1!=-1)
		{
			n->left=new nodeofatree(c1);
			q.push(n->left);
		}
		if(c2!=-1)
		{
			n->right=new nodeofatree(c2);
			q.push(n->right);
		}
	}
	return root;
}
void levelprinting(nodeofatree *root)
{
	if(root==NULL)
	{
		return;
	}
	nodeofatree *const marker = NULL;
	queue<nodeofatree*> q;
	q.push(root);
	q.push(marker);
	while(q.empty()== false)
	{
		nodeofatree *curr= q.front();
		q.pop();
		if(curr==marker)
		{
			cout<<"Current level is processed and next level is ended"<<endl;
			if(q.empty()==false)
			{
				q.push(marker);
			}
			continue;
		}
		cout<<curr->data<<" ";
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
int replacesum(nodeofatree *root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL && root->right ==NULL)
	{
		return root->data;
	}
	int temp=root->data;
	int leftsum=replacesum(root->left);
	int rightsum=replacesum(root->right);
	root->data=rightsum+leftsum;
	return temp+ root->data;
}
void mirror(nodeofatree *root)
{
	if(root==NULL)
	{
		return;
	}
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}
int main()
{
    nodeofatree *root=buildlevelordertrees();
	levelprinting(root);
	int sum=replacesum(root);
	cout<<"sum tree"<<endl;
	levelprinting(root);
	cout<<endl<<sum;
	mirror(root);
	cout<<"mirror"<<endl;
	levelprinting(root);
}
//1
//2 3
//4 5 6 7
//8 -1 -1 9 10 11 12 13
//-1 -1 -1 -1 -1 -1 -1 -1 14 -1 -1 -1
// -1 -1
