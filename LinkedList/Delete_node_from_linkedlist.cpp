#include <bits/stdc++.h>

using namespace std;

typedef struct node{
	int data;
	struct node * next;
}node;

node *getnode(int key)
{
	node *temp;
	temp = (node *)malloc(sizeof(node));
	temp->data = key;
	temp->next = NULL;
	return temp;
}

void printnode(node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp = temp->next;	
	}
}

void deletenode(node **tail,int key)
{
	if((*tail)->data == key)
	{
		node * temp;
		temp = (*tail)->next;
		//(*tail)->next = NULL;
		(*tail) = temp;
		return;
	}
	while((*tail)->data != key)
	{
		(*tail) = (*tail)->next;
	}
	node * next = (*tail)->next;
	**tail = *next;

}

void push(node **root,int key)
{
		node *temp = (node *)malloc(sizeof(node));
		temp->data = key;
		temp->next = (*root);
		(*root) = temp;
		//free(temp);
		

}

int main()
{
	node *root = NULL,*temp,*tail;
	int n,key,deletekey;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>key;
		push(&root,key);
	}
	printnode(root);
	cin>>deletekey;
	tail = root;
	deletenode(&tail,deletekey);
	printnode(root);


	//tail = root;
	//deletenode(&tail,deletekey);
	//tail = root;
	//printnode(tail,n);
	
	

}