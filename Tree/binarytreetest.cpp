#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
  int data;
  node *left,*right;
}node;  


int maxDepth(node *root)
{
  int lDepth,rDepth,height;
  if(root == NULL)
    return 0;
  else
  {
    lDepth = maxDepth(root->left);
    rDepth = maxDepth(root->right);
    if(lDepth > rDepth)
      height = 1+lDepth;
    else
      height = 1+rDepth;
    return height;
  }
}

node *newNode(int val)
{
  node *temp = new node();
  temp->data = val;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

node *insert(node *root,int key)                   //RECURSIVE METHOD
{
  if(root == NULL)
    return newNode(key);
  if(key < root->data)
      root->left = insert(root->left,key);
  else
    root->right = insert(root->right,key);
  return root;
}

node *itr_insert(node *root,int key)                //ITERATIVE METHOD
{
  node *temp = newNode(key);
  if(root == NULL)
    return temp;
  node *parent = NULL;
  node *curr = root;
  while(curr!=NULL)
  {
    parent = curr;
    if(key <= curr->data)
    {
      curr = curr->left;
    }
    else
      curr = curr->right;
  }
  if(key <= parent->data)
    parent->left = temp;
  else
    parent->right = temp;
  return root;
}

void printinorder(node *root)
{
  if(root!=NULL)
  {
    printinorder(root->left);
    cout<<root->data<<" -> ";
    printinorder( root->right);
  }

}

void printpreorder(node *root)
{
  if(root!=NULL)
  {
    cout<<root->data<<" -> ";
    printpreorder(root->left);
    printpreorder(root->right);
  }
}

void printpostorder(node *root)
{
  if(root!=NULL)
  {
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->data<<" -> ";;
  }
}

int main()
{
     node *root = NULL;
     int n,key;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        cin>>key;
        root = itr_insert(root,key);
     }
     printinorder(root);
     cout<<endl;
     printpreorder(root);
     cout<<endl;
     printpostorder(root);
     cout<<endl;  
 
    //root->left = newNode(2);
    //root->right = newNode(3);
    //root->left->left = newNode(4);
    //root->left->right = newNode(5); 
   
    printf("Hight of tree is %d\n", maxDepth(root));
  
    return 0;
}