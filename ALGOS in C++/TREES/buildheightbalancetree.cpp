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
node *buildtree(int arr[], int s, int e)
{
	int mid = (e+s)/2;
	if(s>e)
	{
		return NULL;
	}
	node *root = new node(arr[mid]);
	root->left = buildtree(arr,s,mid-1);
	root->left = buildtree(arr,mid+1,e);
	return root;
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	node *root = buildtree(arr,0,n-1);
	return 0;
}