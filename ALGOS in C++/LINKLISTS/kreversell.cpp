#include<iostream>
using namespace std;
struct  node
{
	int data;
	node *next=NULL;
};
node *head=NULL;
node *tail=NULL;
void insert(int n)
{
	node *linkedlist = new node;
	linkedlist->data=n;
	linkedlist->next=NULL;
	if(head==NULL)
	{
		head=linkedlist;
		tail=linkedlist;
	}
	tail->next=linkedlist;
	tail=linkedlist;

}
void display(node *head)
{
	node *linkedlist = head;
	while(linkedlist!=NULL)
	{
		cout<<linkedlist->data<<" ";
		linkedlist=linkedlist->next;

	}
}
node *reverse (node *head, int k)  
{  
    node* current = head;  
    node* next = NULL;  
    node* prev = NULL;  
    int count = 0;  
      
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  
      
    /* next is now a pointer to (k+1)th node  
    Recursively call for the list starting from current.  
    And make rest of the list as next of first node */
    if (next != NULL)  
    head->next = reverse(next, k);  
  
    /* prev is new head of the input list */
    return prev;  
}  
  
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	while(n!=-1)
	{
		insert(n);
		cin>>n;
	}
	 display(head);
	 int k;
	 cin>>k;
	 head = reverse(head, k);
	 display(head);
	return 0;
}
