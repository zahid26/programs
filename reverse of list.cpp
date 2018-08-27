#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	node *next;
};
struct node *head=NULL;
void create()
{
	char o;
	struct node * tail=NULL,*ptr;
	do{
		ptr=(node*)malloc(sizeof(node));
		if(head==NULL)
		{
			head=ptr;tail=ptr;
		}
		else
		{
			tail->next=ptr;
			tail=ptr;
			tail->next=NULL;
		}
		printf("enter no\n");
		scanf("%d",&ptr->data);
		printf("press y for next node\n");
	o=getch();
	}
	while(o=='y');
}

void display(node * temp)
{
	printf("the list is\n");
	while(temp!=NULL)
{
	printf("%d",temp->data);
	temp=temp->next;
	}	
}

void reverse(node *a)
{
	struct node *b,*c=NULL;

	while(a!=NULL)
	{
		b=(struct node *)malloc(sizeof(struct node));
		b->data=a->data;
		a=a->next;
		if(c==NULL)
		{
			c=b;
			b->next=NULL;
		}
	else
	   {b->next=c;
		c=b;
		} 
	}
	printf("\nreversed list is\n");
	while(c!=NULL)
{
	printf("%d",c->data);
	c=c->next;
}
}
	
	main()
{
	create();
	display(head);
	reverse(head);
	}	






