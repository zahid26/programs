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
void insert1( node *p)
{
		int i=1,loc;
		node* u,*v,*y,*pre;
		y=p;
		u=(node*)malloc(sizeof(node));printf("\nenter the location=");
		scanf("%d",&loc);
		printf("enter data of node to be inserted at location %d=",loc);
		scanf("%d",&u->data);
	if(loc==1)
	{
		u->next=p;
	while(u!=NULL)
		{
		printf("%d",u->data);
		u=u->next;
		}
	}
	else
	{
		for(i=1;i<loc;i++)
	{
		pre=p;
		p=p->next;
	}
		u->next=p;
 		pre->next=u;	printf("list after is=");
	while(y!=NULL)
	{
		printf("%d",y->data);
		y=y->next;
	}
	}
}
main()
{
	create();
	display(head);
	insert1(head);
	
	
	
}
