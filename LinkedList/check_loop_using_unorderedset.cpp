#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	node * next;
}node;

node * insert(node *head,int key)
{
	node *temp = new node();
	temp->data = key;
	temp->next = head;
	head = temp;
	return head;
}

bool hasloop(node * head)
{
	unordered_set<node *> s;
	while(head!=NULL)
	{
		if(s.find(head) != s.end())
			return true;
		s.insert(head);
		head = head->next;
	}
	return false;
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
	head->next->next->next = head;
	if(hasloop(head))
		cout<<"loop found"<<endl;
	else
		cout<<"loop not found"<<endl;
}