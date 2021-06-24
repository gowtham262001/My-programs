#include<stdio.h>
#include<stdlib.h>
int count;
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
int NN(struct node *t)
{
	if(t)
	{
		count++;
		NN(t->left);
		NN(t->right);
		return count;
	}
	else
	 return 0;
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
	root->right->right=newnode(7);
	NN(root);
	printf("number of nodes are %d",count);
}
