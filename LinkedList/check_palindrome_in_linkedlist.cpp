#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	node *next;
}node;

node *insert(node *head,int key)
{
	node *temp = new node();
	temp->data = key;
	temp->next = head;
	head = temp;
	return head;
}

node *reverselist(node *head)
{
	node *prev =NULL;
	node *curr = head;
	node * next;
	while(curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

bool compare(node *head1,node *head2)
{	
	while(head1 && head2)
	{
		if(head1->data != head2->data)
			return false;
		head1 = head1->next;
		head2 = head2->next;
	}
	if(head1!=NULL || head2!=NULL)
	{
		return false;
	}
	else
		return true;
}

void printnode(node *head)
{
	while(head != NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}

}

bool checkpalindrome(node *head)
{
	if(head == NULL)
		return true;
	if(head->next == NULL)
		return true;
		//finding middle node
	node *lazyptr,*fastptr,*end_of_first,*second_half;
	lazyptr = fastptr = head;
	node *middle = NULL;
	while(fastptr!=NULL && fastptr->next!=NULL)
	{
		end_of_first = lazyptr;
		lazyptr = lazyptr->next;
		fastptr = fastptr->next->next;
	}
	if(fastptr!=NULL)
	{
		middle = lazyptr;
		lazyptr = lazyptr->next;
	}
	second_half = lazyptr;
	end_of_first->next = NULL;
	
	//printnode(second_half);
	second_half = reverselist(second_half);
	//printnode(second_half);
	bool res = compare(head,second_half);
	second_half = reverselist(second_half);
	if(middle!=NULL)
	{
		end_of_first->next = middle;
		middle->next = second_half;
	}
	else
	{
		end_of_first->next = second_half;
	}
	return res;

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
	if(checkpalindrome(head))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}