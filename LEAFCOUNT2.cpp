#include<stdio.h>
#include<stdlib.h>
int nonleafcount=0;
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
int NLC(struct node *t)
{
	if((t->left!=NULL) || (t->right!=NULL))
	{
		nonleafcount++;
		if(t->left==NULL)
		   return 0;
		else   
		   NLC(t->left);
		if(t->right==NULL)
		    return 0;
		else   
		    NLC(t->right);
		return nonleafcount;
	}
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
	root->right->left->left=newnode(7);
    int c=NLC(root);
	printf("number of leaves are %d",c);
}
