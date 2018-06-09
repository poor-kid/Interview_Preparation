#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	node *next;
}node;

void printnode(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<endl;
}

node *insert(node *head,int val)
{
	node *temp = new node();
	temp->data = val;
	temp->next = head;
	head = temp;
	return head;
}

node *mergelist(node *head1,node * head2)
{
	node *head = NULL;
	if(head1 == NULL)
		return head2;
	if(head2 == NULL)
		return head1;
	if(head1->data <= head2->data)
	{
		head = head1;
		head1 = head->next;
	}
	else
	{
		head = head2;
		head2 = head->next;
	}
	node *temp = head;
	while(head1 && head2)
	{
		if(head1->data <= head2->data)
		{
			head->next = head1;
			head = head1;
			head1 = head->next;
		}
		else
		{
			head->next = head2;
			head = head2;
			head2 = head->next;
		}
	}
	if(head1 == NULL)
	{
		head->next = head2;
	}
	if(head2 == NULL)
	{
		head->next = head1;
	}
	return temp;

}



int main()
{
	node *head1 = NULL;
	node *head2 =NULL;
	int n,m,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>key;
		head1 = insert(head1,key);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>key;
		head2 = insert(head2,key);
	}
	printnode(head1);
	printnode(head2);
	node * head =mergelist(head1,head2);
	printnode(head);
}