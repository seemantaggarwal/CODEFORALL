#include <iostream>
#include<stack>
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
void zizagtraversal(struct node* root) 
{ 
    // if null then return 
    if (!root) 
        return; 
    stack<struct node*> currentlevel; 
    stack<struct node*> nextlevel; 
  
    // push the root 
    currentlevel.push(root); 
      
    bool lefttoright = true; 
    while (!currentlevel.empty()) {  
        struct node* temp = currentlevel.top(); 
        currentlevel.pop(); 
  
        // if not null 
        if (temp) { 
  
            // print the data in it 
            cout << temp->data << " "; 
  
            // store data according to current 
            // order. 
            if (lefttoright) { 
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right); 
            } 
            else { 
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            } 
        } 
  
        if (currentlevel.empty()) { 
            lefttoright = !lefttoright; 
            swap(currentlevel, nextlevel); 
        } 
    } 
} 

int main(int argc, char const *argv[])
{
	/* code */
	node *root=buildtree();
	return 0;
}