#include <bits/stdc++.h>

using namespace std;

typedef struct node
{	
	int data;
	node * next;
	
}node;

node *deletefromend(node *head,int end)
{
	int len=0;
	node *temp = head,*next;
	while(temp!=NULL)
	{
		temp = temp->next;
		len++;
	}

	temp = head;
	for(int i=1;i<len-end+1;i++)
		temp = temp->next;
	next = temp->next;
	*temp = *next;
	return head;
}

node *deletefromend_single_itr(node *head,int n)
{
	node *temp,*lazy_ptr;
        temp = lazy_ptr = head;

        for(int i=0;i<n;i++)
            temp = temp->next;
        if(temp == NULL)
            return head->next;
        while(temp->next!=NULL)
        {
            temp = temp->next;
            lazy_ptr = lazy_ptr->next;
        }
        temp = lazy_ptr->next;
        lazy_ptr->next = temp->next;
        return head;
}

node *insert(node *head,int key)
{
	node *temp = new node();
	temp->data = key;
	temp->next = head;
	head = temp;
	return head;
}

void printnode(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
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
	int end;
	cin>>end;
	head = deletefromend_single_itr(head,end);
	//if(head == NULL)
	//	cout<<"no node"<<endl;
	//else
		printnode(head);
}