#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node *newnode(int i)
{
	struct node *newnod=(struct node *)malloc(sizeof(struct node));
	newnod->data=i;
	newnod->left=NULL;
	newnod->right=NULL;
	return(newnod);
}
void preorder(struct node *t)
{
	if(t)
	{
		printf("%d",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
int main()
{
	struct node *root;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	printf("preorder traversal is");
	preorder(root);
}
