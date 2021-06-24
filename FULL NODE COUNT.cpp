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
int NFN(struct node *t)
{
	if(t==NULL)
	    return 0;
    else if((t->left==NULL)&&(t->right==NULL))
	    return 0;
	else if((t->left==NULL)||t->right==NULL)
	    return(NFN(t->left)+NFN(t->right));	 
	else
	    return(NFN(t->left)+NFN(t->right)+1);
		
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
	root->right->right=newnode(8);
	root->right->left->left=newnode(7);
    int c=NFN(root);
	printf("number of full nodes are %d",c);
}
