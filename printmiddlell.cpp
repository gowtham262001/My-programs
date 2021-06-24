#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void printmiddle()
{
	struct node *p,*q;
	p=head;
	q=head;
	while(q&&q->next)
	{
		p=p->next;
		q=q->next->next;
	}
	printf("middle node is %d",p->data);
}
void display()
{
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		struct node *t;
		 t=head;
		 while(t)
		 {
		 	printf("%d->",t->data);
		 	t=t->next;
		 }
	}
}
void insert(int i)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=i;
	if(head==NULL)
	{
		head=ptr;
		ptr->next=NULL;
	}
	else
	{
		ptr->next=head;
		head=ptr;
	}
}
int main()
{
	int n;
	printf("no. of nodes to be inserted\n");
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		int i;
		printf("enter number to be inserted\n");
		scanf("%d",&i);
		insert(i);
	}
	display();
	printmiddle();
	return 0;
}
