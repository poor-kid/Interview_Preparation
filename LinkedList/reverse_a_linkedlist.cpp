#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	node *next;
}node;

node * insert(node * head,int key)
{
	node *temp = new node();
	temp->data = key;
	temp->next = head;
	head = temp;
	return head;
}

node * reverselist(node *head)
{
	node *prev =NULL;
	node *curr = head;
	node *next;
	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

void printnode(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<endl;
}

int main()
{
	node *head = NULL;
	int n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>key;
		head = insert(head,key);
	}
	printnode(head);
	head = reverselist(head);
	printnode(head);
}