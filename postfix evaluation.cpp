#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	char data;
	struct node *next;
};
struct node *head;
void push(int item)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}
int pop()
{
	int temp;
	struct node *p;
	p=head;
    temp=p->data;
    head=head->next;
    free(p);
    return temp;
}
int main()
{
	int z;
	char str[20];
	printf("enter the postfix expression\n");
	scanf("%s",&str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(isalnum(str[i]))
		push(str[i]-'0');
		else
		{
			int x=pop();
			int y=pop();
			if(str[i]=='+')
			    z=y+x;
			 else if(str[i]=='-')
			     z=y-x;
		     else if(str[i]=='*')
			     z=y*x;
			  else
			        z=y/x;
		 push(z);
		}
	}
	printf("answer for the postfix expression is %d",z);
	return 0;
}
