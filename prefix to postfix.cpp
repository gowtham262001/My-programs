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
void display()
{
    struct node *p;
    p=head;
	while(p)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}
int priority(char x)
{
    if(x=='(')
	     return 0;
    if(x=='+'||x=='-')
	      return 1;
    if(x=='*'||x=='/')
	     return 2;
    return 0;		 		  	
}
int main()
{
	int x,i=0;
    char str[20];
	printf("enter the expression that has to be converted into postfix expression\n");
	scanf("%s",str);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
	   if(isalnum(str[i]))
	   {
	   	printf("%c",str[i]);
	   }
	   else if(str[i]=='(')
	   {
	   	push(str[i]);
	   }
	   else if(str[i]==')')
	   {
	   	while((x=pop())!='(')
	   	 printf("%c",x);
	   }
	   else
	   {
	   	if(head==NULL)
	   	    push(str[i]);
	   	 else
			{   
	   	  while(priority(head->data)>=priority(str[i]))
	   	    printf("%c",pop());
	   	   push(str[i]);
		}
	   }	
	}
	while(head)
		{
			printf("%c",x=pop());
			
		}
	return 0;
}

	
