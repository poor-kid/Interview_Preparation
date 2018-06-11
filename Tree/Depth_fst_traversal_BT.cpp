#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	node * left,*right;
}node;

node *newnode(int val)
{
	node *temp = new node();
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

node *insert(node *root,int val)
{
	node *temp = newnode(val);
	if(root == NULL)
		return temp;
	node *parent =NULL,*curr = root;
	while(curr!=NULL)
	{
		parent = curr;
		if(val <= curr->data)
		{
			curr = curr->left;
		}
		else
			curr = curr->right;
	}
	return root;
}

int main()
{
	node *root = NULL;
	int n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>key;
		root = insert(root,key);
	}
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root)
	cout<<endl;
}