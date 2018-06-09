#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	node * next;
}node;

void printnode(node *head)
{
	while(head !=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

node *insert(node *head,int key)
{
	node *temp = new node();		//same as (node*)malloc(sizeof(node)) but new node() is efficient in c++
	temp->data = key;
	temp->next = head;
	head = temp;
	return head;
}

node *deletenode(node *head,int data)
{
	node *temp = head,*prev;
	while(temp->data!= data)
	{
		prev = temp;
		temp = temp->next;
	}
	if(head->data == data)
	{
		head = head->next;
	}
	else if(temp->data == data)
	{
		prev->next = temp->next;

	}
	return head;

}

node *delete_with_node(node **temp)			//EXCEPT for LAST NODE
{
	node *next = (*temp)->next;
	(*temp)->data = next->data;
	(*temp)->next = next->next;
}

node *insert_middle(node *head,int place,int value)
{
	cout<<"val "<<value<<" place "<<place<<endl;
	node * temp,*pointer;
	temp = new node();
	pointer = head;
	temp->data = value;
	if(place == 0)
	{
		temp->next = head;
		head  = temp;
		//free(temp);
		return head;
	}
	for(int i=0;i<place-1;i++)
	{
		pointer = pointer->next;
	}
	temp->next = pointer->next;
	pointer->next = temp;
	//free(temp);
	return head;

}

int main()
{
	node *head = NULL,*temp1;
	int n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>key;
		head = insert(head,key);		//Insert node that is from back to front
		//printnode(head);
	}
	int T;
	//cin>>T;
	//while(T--)
	//{
	printnode(head);
	int data;
	cin>>data;
	head = deletenode(head,data);			//delete node given value
	if(head == NULL)
		cout<<"no elements"<<endl;
	else
		printnode(head);
	int node;
	cin>>node;							//delete node given node itself (check func)
	temp1 = head;
	while(temp1->data!= node)
	{
		temp1 = temp1->next;
	}
	delete_with_node(&temp1);			//not works for tail node
	printnode(head);
	cout<<"Insert node in the middle"<<endl;
	int in,place;
	cin>>in>>place;
	head = insert_middle(head,place,in);
	printnode(head);

	//}
	
}