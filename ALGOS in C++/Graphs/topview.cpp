#include <iostream>
#include <map>
#include <stack>
#include <cstdint>
#include <cinttypes>
using namespace std;
class node
{
public:
	int data;
	node *left;
	node *right;
	int hd;
	node(int d)
	{
		data=d;
		hd = INT_MAX;
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
void bottomview(node *root)
{
	if(root==NULL)
	{
		return;
	}
	int hd = 0;
	map<int, int> m;
	stack<node *> q;
	q.push(root);
	root->hd=hd;
	while (!q.empty()) 
    { 
        node *temp = q.top(); 
        q.pop();    
        
        hd = temp->hd;         
        m[hd] = temp->data; 
   
        if (temp->left != NULL) 
        { 
            temp->left->hd = hd-1; 
            q.push(temp->left); 
        } 
   
        if (temp->right != NULL) 
        { 
            temp->right->hd = hd+1; 
            q.push(temp->right); 
        } 
    }  
    for (auto i = m.begin(); i != m.end(); ++i) 
        cout << i->second << " "; 
}
int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	bottomview(root);
	return 0;
}