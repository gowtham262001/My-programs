#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *head;
void create(int n);
void print();
int main()
{
	int n;
	printf("enter how many nodes\n");
	scanf("%d",&n);
	create(n);
	printf("original linked list\n");
	print();
	return 0;
}
void create(int n)
{
	struct node *p,*newnode;
	int i;
	head=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&head->info);
	head->next=NULL;
	p=head;
	for(i=1;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		scanf("%d",newnode->info);
		newnode->next=NULL;
		p->next=newnode;
		p=p->next;
	}
}
void print()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info);
		printf("\n");
		temp=temp->next;
	}
}

